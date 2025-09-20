%ifndef __ANRC__CALLCLIB_INC__
%define __ANRC__CALLCLIB_INC__

%include "anrc/_clib_arg_count.internal.inc"

%assign i 0
%rep CALLCLIB_MAX_ARG_COUNT + 1
    extern __callclib%[i]
    %assign i i + 1
%endrep

%imacro callclib 2
    %if %isnnum(%1) || %1 < 0 || %1 > CALLCLIB_MAX_ARG_COUNT
        %error Invalid number of function parameters.
    %endif

    %ifnid %2
        %error Expected an identifier.
    %endif

    extern %2

    %ifdef CLIB_PIC_CALL
        lea r15, [rel %2 wrt ..plt]
    %else
        lea r15, [rel %2]
    %endif

    call __callclib%1
%endmacro

%imacro callclib 1
    %ifnid %1
        %error Expected an identifier.
    %endif

    extern %1

    %ifdef CLIB_PIC_CALL
        lea r15, [rel %1 wrt ..plt]
    %else
        lea r15, [rel %1]
    %endif

    call __callclib0
%endmacro

%endif
