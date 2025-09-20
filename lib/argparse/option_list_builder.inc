%ifndef __ARGPARSE__OPTION_LIST_BUILDER_INC__
%define __ARGPARSE__OPTION_LIST_BUILDER_INC__

%imacro OPT_LIST 1
    %ifctx opt_list_ctx
        %fatal Expected `ENDOPT`.
    %endif

    %ifnid %1
        %fatal Expected an indentifier.
    %endif

    %push opt_list_ctx

    %define %$opt_list_name %1
    %assign %$opt_i 0
%endmacro

%imacro ENDOPT 0
    %ifnctx opt_list_ctx
        %fatal `ENDOPT` without `OPT_LIST` was found.
    %endif

    %define %$opt_list_count %$opt_i

    %[%$opt_list_name]:
    %assign %$i 0
    %rep %$opt_list_count
        dq %$opt_list_item_%[%$i]
        %assign %$i %$i + 1
    %endrep
    dq 0

    %[%$opt_list_name]_count equ %$opt_list_count

    %pop opt_list_ctx
%endmacro

%imacro DOPT 2
    %ifnctx opt_list_ctx
        %fatal Cannot declare an option outside `OPT_LIST`.
    %endif

    %$opt_list_item_%[%$opt_i]:
        dq %1
        db %2, 0
    %assign %$opt_i %$opt_i + 1
%endmacro

%endif
