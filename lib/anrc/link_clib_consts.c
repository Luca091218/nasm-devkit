#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <fenv.h>

/* ------- stdio: standard streams ------- */
FILE* cc_get_stdin(void) { return stdin; }
FILE* cc_get_stdout(void) { return stdout; }
FILE* cc_get_stderr(void) { return stderr; }

/* ------- stdio: fseek & ftell whence values ------- */
int cc_get_SEEK_SET(void) { return SEEK_SET; }
int cc_get_SEEK_CUR(void) { return SEEK_CUR; }
int cc_get_SEEK_END(void) { return SEEK_END; }

/* ------- stdio: setvbuf modes ------- */
int cc_get__IONBF(void) { return _IONBF; }
int cc_get__IOLBF(void) { return _IOLBF; }
int cc_get__IOFBF(void) { return _IOFBF; }

/* ------- stdio: other macros ------- */
int cc_get_BUFSIZ(void) { return BUFSIZ; }
int cc_get_EOF(void) { return EOF; }

/* ------- locale: setlocale categories ------- */
int cc_get_LC_ALL(void) { return LC_ALL; }
int cc_get_LC_COLLATE(void) { return LC_COLLATE; }
int cc_get_LC_CTYPE(void) { return LC_CTYPE; }
int cc_get_LC_MONETARY(void) { return LC_MONETARY; }
int cc_get_LC_NUMERIC(void) { return LC_NUMERIC; }
int cc_get_LC_TIME(void) { return LC_TIME; }

/* ------- locale: other macros ------- */
size_t cc_get_MB_CUR_MAX(void) { return (size_t)MB_CUR_MAX; }

/* ------- stdlib: used with rand() ------- */
int cc_get_RAND_MAX(void) { return RAND_MAX; }
