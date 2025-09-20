; program.nasm: application entry point.

%include "anrc/all"
%include "main.inc"
%include "program.inc"

global program_entry

section .text

; int program_entry(void)
; * DESC: User entry. Implement application logic and return an exit status.
; * RETURNS: Exit status.
program_entry:
    lea  r8, [rel hello_world_msg]
    callclib 1, cc_printf

    ; Start coding here!

    xor  eax, eax
    ret

section .rotext

hello_world_msg:
    db "Hello, World!", `\n`, 0
