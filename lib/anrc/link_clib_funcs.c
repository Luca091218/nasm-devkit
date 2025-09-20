#include <math.h>
#include <fenv.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <locale.h>

/* ------- math: trig, hyperbolic, inverse ------- */
double cc_sin(double x) { return sin(x); }
float cc_sinf(float x) { return sinf(x); }
long double cc_sinl(long double x) { return sinl(x); }

double cc_sinh(double x) { return sinh(x); }
float cc_sinhf(float x) { return sinhf(x); }
long double cc_sinhl(long double x) { return sinhl(x); }

double cc_asin(double x) { return asin(x); }
float cc_asinf(float x) { return asinf(x); }
long double cc_asinl(long double x) { return asinl(x); }

double cc_asinh(double x) { return asinh(x); }
float cc_asinhf(float x) { return asinhf(x); }
long double cc_asinhl(long double x) { return asinhl(x); }

double cc_cos(double x) { return cos(x); }
float cc_cosf(float x) { return cosf(x); }
long double cc_cosl(long double x) { return cosl(x); }

double cc_cosh(double x) { return cosh(x); }
float cc_coshf(float x) { return coshf(x); }
long double cc_coshl(long double x) { return coshl(x); }

double cc_acos(double x) { return acos(x); }
float cc_acosf(float x) { return acosf(x); }
long double cc_acosl(long double x) { return acosl(x); }

double cc_acosh(double x) { return acosh(x); }
float cc_acoshf(float x) { return acoshf(x); }
long double cc_acoshl(long double x) { return acoshl(x); }

double cc_tan(double x) { return tan(x); }
float cc_tanf(float x) { return tanf(x); }
long double cc_tanl(long double x) { return tanl(x); }

double cc_tanh(double x) { return tanh(x); }
float cc_tanhf(float x) { return tanhf(x); }
long double cc_tanhl(long double x) { return tanhl(x); }

double cc_atan(double x) { return atan(x); }
float cc_atanf(float x) { return atanf(x); }
long double cc_atanl(long double x) { return atanl(x); }

double cc_atanh(double x) { return atanh(x); }
float cc_atanhf(float x) { return atanhf(x); }
long double cc_atanhl(long double x) { return atanhl(x); }

double cc_atan2(double y, double x) { return atan2(y, x); }
float cc_atan2f(float y, float x) { return atan2f(y, x); }
long double cc_atan2l(long double y, long double x) { return atan2l(y, x); }

/* ------- math: exp, log, pow, root ------- */
double cc_exp(double x) { return exp(x); }
float cc_expf(float x) { return expf(x); }
long double cc_expl(long double x) { return expl(x); }

double cc_ldexp(double x, int expn) { return ldexp(x, expn); }
float cc_ldexpf(float x, int expn) { return ldexpf(x, expn); }
long double cc_ldexpl(long double x, int expn) { return ldexpl(x, expn); }

double cc_exp2(double x) { return exp2(x); }
float cc_exp2f(float x) { return exp2f(x); }
long double cc_exp2l(long double x) { return exp2l(x); }

double cc_expm1(double x) { return expm1(x); }
float cc_expm1f(float x) { return expm1f(x); }
long double cc_expm1l(long double x) { return expm1l(x); }

double cc_pow(double x, double y) { return pow(x, y); }
float cc_powf(float x, float y) { return powf(x, y); }
long double cc_powl(long double x, long double y) { return powl(x, y); }

double cc_sqrt(double x) { return sqrt(x); }
float cc_sqrtf(float x) { return sqrtf(x); }
long double cc_sqrtl(long double x) { return sqrtl(x); }

double cc_cbrt(double x) { return cbrt(x); }
float cc_cbrtf(float x) { return cbrtf(x); }
long double cc_cbrtl(long double x) { return cbrtl(x); }

double cc_hypot(double x, double y) { return hypot(x, y); }
float cc_hypotf(float x, float y) { return hypotf(x, y); }
long double cc_hypotl(long double x, long double y) { return hypotl(x, y); }

double cc_log(double x) { return log(x); }
float cc_logf(float x) { return logf(x); }
long double cc_logl(long double x) { return logl(x); }

double cc_log2(double x) { return log2(x); }
float cc_log2f(float x) { return log2f(x); }
long double cc_log2l(long double x) { return log2l(x); }

double cc_log10(double x) { return log10(x); }
float cc_log10f(float x) { return log10f(x); }
long double cc_log10l(long double x) { return log10l(x); }

double cc_log1p(double x) { return log1p(x); }
float cc_log1pf(float x) { return log1pf(x); }
long double cc_log1pl(long double x) { return log1pl(x); }

double cc_tgamma(double x) { return tgamma(x); }
float cc_tgammaf(float x) { return tgammaf(x); }
long double cc_tgammal(long double x) { return tgammal(x); }

double cc_lgamma(double x) { return lgamma(x); }
float cc_lgammaf(float x) { return lgammaf(x); }
long double cc_lgammal(long double x) { return lgammal(x); }

/* ------- rounding & fract ------- */
double cc_ceil(double x) { return ceil(x); }
float cc_ceilf(float x) { return ceilf(x); }
long double cc_ceill(long double x) { return ceill(x); }

double cc_floor(double x) { return floor(x); }
float cc_floorf(float x) { return floorf(x); }
long double cc_floorl(long double x) { return floorl(x); }

double cc_trunc(double x) { return trunc(x); }
float cc_truncf(float x) { return truncf(x); }
long double cc_truncl(long double x) { return truncl(x); }

double cc_round(double x) { return round(x); }
float cc_roundf(float x) { return roundf(x); }
long double cc_roundl(long double x) { return roundl(x); }

long cc_lround(double x) { return lround(x); }
long cc_lroundf(float x) { return lroundf(x); }
long cc_lroundl(long double x) { return lroundl(x); }

long long cc_llround(double x) { return llround(x); }
long long cc_llroundf(float x) { return llroundf(x); }
long long cc_llroundl(long double x) { return llroundl(x); }

double cc_rint(double x) { return rint(x); }
float cc_rintf(float x) { return rintf(x); }
long double cc_rintl(long double x) { return rintl(x); }

long cc_lrint(double x) { return lrint(x); }
long cc_lrintf(float x) { return lrintf(x); }
long cc_lrintl(long double x) { return lrintl(x); }

long long cc_llrint(double x) { return llrint(x); }
long long cc_llrintf(float x) { return llrintf(x); }
long long cc_llrintl(long double x) { return llrintl(x); }

double cc_modf(double x, double *iptr) { return modf(x, iptr); }
float cc_modff(float x, float *iptr) { return modff(x, iptr); }
long double cc_modfl(long double x, long double *iptr) { return modfl(x, iptr); }

double cc_nearbyint(double x) { return nearbyint(x); }
float cc_nearbyintf(float x) { return nearbyintf(x); }
long double cc_nearbyintl(long double x) { return nearbyintl(x); }

double cc_nextafter(double x, double y) { return nextafter(x, y); }
float cc_nextafterf(float x, float y) { return nextafterf(x, y); }
long double cc_nextafterl(long double x, long double y) { return nextafterl(x, y); }

double cc_nexttoward(double x, long double y) { return nexttoward(x, y); }
float cc_nexttowardf(float x, long double y) { return nexttowardf(x, y); }
long double cc_nexttowardl(long double x, long double y) { return nexttowardl(x, y); }

/* ------- fenv ------- */
int cc_fegetround(void) { return fegetround(); }
int cc_fesetround(int mode) { return fesetround(mode); }

/* ------- memory mgmt ------- */
void* cc_malloc(size_t n) { return malloc(n); }
void* cc_calloc(size_t nmemb, size_t size) { return calloc(nmemb, size); }
void* cc_realloc(void *p, size_t size) { return realloc(p, size); }
void cc_free(void *p) { free(p); }

/* ------- stdio: files ------- */
FILE* cc_fopen(const char *filename, const char *mode) { return fopen(filename, mode); }
FILE* cc_freopen(const char *filename, const char *mode, FILE *stream) { return freopen(filename, mode, stream); }
int cc_fflush(FILE *stream) { return fflush(stream); }
int cc_fclose(FILE *stream) { return fclose(stream); }

int cc_remove(const char *path) { return remove(path); }
int cc_rename(const char *oldn, const char *newn) { return rename(oldn, newn); }
FILE* cc_tmpfile(void) { return tmpfile(); }

/* ------- stdio: rw, seek ------- */
size_t cc_fread(void *ptr, size_t size, size_t nmemb, FILE *stream) { return fread(ptr, size, nmemb, stream); }
size_t cc_fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream) { return fwrite(ptr, size, nmemb, stream); }
int cc_fseek(FILE *stream, long offset, int whence) { return fseek(stream, offset, whence); }
long cc_ftell(FILE *stream) { return ftell(stream); }
void cc_rewind(FILE *stream) { rewind(stream); }

/* ------- stdio: buffering ------- */
void cc_setbuf(FILE *stream, char *buf) { setbuf(stream, buf); }
int cc_setvbuf(FILE *stream, char *buf, int mode, size_t size) { return setvbuf(stream, buf, mode, size); }

/* ------- stdio: char io ------- */
int cc_putchar(int c) { return putchar(c); }
int cc_putc(int c, FILE *stream) { return putc(c, stream); }
int cc_fputc(int c, FILE *stream) { return fputc(c, stream); }
int cc_getchar(void) { return getchar(); }
int cc_fgetc(FILE *stream) { return fgetc(stream); }
int cc_ungetc(int c, FILE *stream) { return ungetc(c, stream); }

/* ------- stdio: strings ------- */
int cc_fputs(const char *s, FILE *stream) { return fputs(s, stream); }
char* cc_fgets(char *s, int size, FILE *stream){ return fgets(s, size, stream); }

/* ------- stdio: printf-family (varargs) ------- */
int cc_printf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vprintf(fmt, ap);
    va_end(ap);
    return r;
}

int cc_fprintf(FILE *stream, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vfprintf(stream, fmt, ap);
    va_end(ap);
    return r;
}

int cc_sprintf(char *s, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vsprintf(s, fmt, ap);
    va_end(ap);
    return r;
}

int cc_snprintf(char *s, size_t n, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vsnprintf(s, n, fmt, ap);
    va_end(ap);
    return r;
}

/* ------- stdio: scanf-family (varargs) ------- */
int cc_scanf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vscanf(fmt, ap);
    va_end(ap);
    return r;
}

int cc_fscanf(FILE *stream, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vfscanf(stream, fmt, ap);
    va_end(ap);
    return r;
}

int cc_sscanf(const char *s, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int r = vsscanf(s, fmt, ap);
    va_end(ap);
    return r;
}

/* ------- misc: rand, time, locale ------- */
int cc_rand(void) { return rand(); }
void cc_srand(unsigned int seed) { srand(seed); }

clock_t cc_clock(void) { return clock(); }
time_t cc_time(time_t *tloc) { return time(tloc); }
struct tm* cc_localtime(const time_t *t) { return localtime(t); }

char* cc_setlocale(int category, const char *locale) { return setlocale(category, locale); }

/* ------- intentionally disabled functions ------- */

// char *cc_tmpnam(char *s) { return tmpnam(s); }

// int cc_puts(const char *s) { return puts(s); }
// char *cc_gets(char *s) { return gets(s); }

// void cc_abort(void) { abort(); }
// void cc_exit(int status) { exit(status); }
// int cc_system(const char *command) { return system(command); }
