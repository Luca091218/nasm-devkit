%ifndef __ARGPARSE__PARSER_INTERNAL_INC__
%define __ARGPARSE__PARSER_INTERNAL_INC__

%ifdef WINDOWS
    %define argc_reg rcx
    %define argv_reg rdx
%elifdef LINUX
    %define argc_reg rdi
    %define argv_reg rsi
%else
    %fatal Neither `WINDOWS` nor `LINUX` was defined.
%endif

%endif
