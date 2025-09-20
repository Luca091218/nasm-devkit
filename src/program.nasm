%include "anrc/all"
%include "main.inc"
%include "program.inc"

global program_entry

section .text

program_entry:
    lea r8, [rel hello_world_msg]
    callclib 1, cc_printf

    xor eax, eax
    ret

section .rotext

hello_world_msg:
    db `Hello, World!\n\0`
