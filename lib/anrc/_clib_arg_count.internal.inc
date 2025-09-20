%ifndef __ANRC__CLIB_ARG_COUNT_INTERNAL_INC__
%define __ANRC__CLIB_ARG_COUNT_INTERNAL_INC__

%define CALLCLIB_MAX_ARG_COUNT 12

%if %isnnum(CALLCLIB_MAX_ARG_COUNT) || CALLCLIB_MAX_ARG_COUNT < 0
    %fatal Invalid value for count.
%endif

%endif
