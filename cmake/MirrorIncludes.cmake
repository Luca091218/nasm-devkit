# Inputs:
#   - DEPS_FILE : path with one active dependency name per line
#   - LIB_DIR   : absolute path to lib/
#   - OUT_DIR   : absolute path to nasm_includes/

if(NOT DEFINED DEPS_FILE OR NOT DEFINED LIB_DIR OR NOT DEFINED OUT_DIR)
    message(FATAL_ERROR "MirrorIncludes.cmake: missing DEPS_FILE/LIB_DIR/OUT_DIR")
endif()

foreach(_k DEPS_FILE LIB_DIR OUT_DIR)
    if(DEFINED ${_k})
        string(REGEX REPLACE "^\"|\"$" "" ${_k} "${${_k}}")
    endif()
endforeach()

file(READ "${DEPS_FILE}" _deps_raw)
string(REGEX REPLACE "[\r\n]+" ";" DEPS "${_deps_raw}")

set(EXPECTED_REL "")

foreach(dep IN LISTS DEPS)
    if(dep STREQUAL "")
        continue()
    endif()

    file(GLOB_RECURSE files
        "${LIB_DIR}/${dep}/*.inc"
        "${LIB_DIR}/${dep}/*.h"
        "${LIB_DIR}/${dep}/*.hpp"
        "${LIB_DIR}/${dep}/*.h++"
        "${LIB_DIR}/${dep}/*.txt"
        "${LIB_DIR}/${dep}/all"
    )

    foreach(f IN LISTS files)
        file(RELATIVE_PATH rel "${LIB_DIR}" "${f}")
        list(APPEND EXPECTED_REL "${rel}")

        set(dst "${OUT_DIR}/${rel}")
        get_filename_component(dst_dir "${dst}" DIRECTORY)
        file(MAKE_DIRECTORY "${dst_dir}")
        execute_process(COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${f}" "${dst}")
    endforeach()
endforeach()

if(EXISTS "${OUT_DIR}")
    file(GLOB_RECURSE CURRENT_REL RELATIVE "${OUT_DIR}" "${OUT_DIR}/*")

    foreach(p IN LISTS CURRENT_REL)
        if(EXISTS "${OUT_DIR}/${p}" AND NOT IS_DIRECTORY "${OUT_DIR}/${p}")
            list(FIND EXPECTED_REL "${p}" _idx)

            if(_idx EQUAL -1)
                file(REMOVE "${OUT_DIR}/${p}")
            endif()
        endif()
    endforeach()

    file(GLOB TOPLEVEL RELATIVE "${OUT_DIR}" "${OUT_DIR}/*")

    foreach(d IN LISTS TOPLEVEL)
        if(IS_DIRECTORY "${OUT_DIR}/${d}")
            list(FIND DEPS "${d}" _idx2)

            if(_idx2 EQUAL -1)
                file(REMOVE_RECURSE "${OUT_DIR}/${d}")
            endif()
        endif()
    endforeach()
endif()

message(STATUS "Mirrored lib/ interfaces into: ${OUT_DIR}")
