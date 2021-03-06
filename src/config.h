/* config.h  Maintained by hand. */

#define USE_READLINE_STATIC

#ifdef _WIN32
#define _LIB
#define _CRT_SECURE_NO_WARNINGS

#ifndef _WIN64
#define WIN32
#endif

#endif



/* Define NO_MULTIBYTE_SUPPORT to not compile in support for multibyte
   characters, even if the OS supports them. */
#undef NO_MULTIBYTE_SUPPORT

/* Define if on MINIX.  */
#undef _MINIX

/* Define as the return type of signal handlers (int or void).  */
#undef RETSIGTYPE

#undef VOID_SIGHANDLER

/* Characteristics of the compiler. */
#undef const
#undef size_t
#undef ssize_t
#undef PROTOTYPES
#undef __CHAR_UNSIGNED__

/* Define if the `S_IS*' macros in <sys/stat.h> do not work properly.  */
#undef STAT_MACROS_BROKEN

/* Define if you have the isascii function. */
#define HAVE_ISASCII

/* Define if you have the isxdigit function. */
#undef HAVE_ISXDIGIT

/* Define if you have the lstat function. */
#undef HAVE_LSTAT

/* Define if you have the mbrlen function. */
#define HAVE_MBRLEN

/* Define if you have the mbrtowc function. */
#define HAVE_MBRTOWC

/* Define if you have the mbrtowc function. */
#undef HAVE_MBRTOWC

/* Define if you have the mbsrtowcs function. */
#undef HAVE_MBSRTOWCS

/* Define if you have the memmove function. */
#define HAVE_MEMMOVE

/* Define if you have the putenv function.  */
#define HAVE_PUTENV

/* Define if you have the select function.  */
#undef HAVE_SELECT

/* Define if you have the setenv function.  */
#define HAVE_SETENV

/* Define if you have the setlocale function. */
#define HAVE_SETLOCALE

/* Define if you have the strcasecmp function.  */
#undef HAVE_STRCASECMP

/* Define if you have the strcoll function.  */
#undef HAVE_STRCOLL

#undef STRCOLL_BROKEN

/* Define if you have the strpbrk function.  */
#undef HAVE_STRPBRK

/* Define if you have the tcgetattr function.  */
#undef HAVE_TCGETATTR

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF

/* Define if you have the wctomb function.  */
#define HAVE_WCTOMB 

/* Define if you have the wcwidth function.  */
#undef HAVE_WCWIDTH

#undef STDC_HEADERS

/* Define if you have the <dirent.h> header file.  */
#undef HAVE_DIRENT_H

/* Define if you have the <langinfo.h> header file.  */
#undef HAVE_LANGINFO_H

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H

/* Define if you have the <locale.h> header file.  */
#define HAVE_LOCALE_H

/* Define if you have the <memory.h> header file.  */
#define HAVE_MEMORY_H

/* Define if you have the <ndir.h> header file.  */
#undef HAVE_NDIR_H

/* Define if you have the <stdarg.h> header file.  */
#define HAVE_STDARG_H

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H

/* Define if you have the <strings.h> header file.  */
#undef HAVE_STRINGS_H

/* Define if you have the <sys/dir.h> header file.  */
#undef HAVE_SYS_DIR_H

/* Define if you have the <sys/file.h> header file.  */
#undef HAVE_SYS_FILE_H

/* Define if you have the <sys/ndir.h> header file.  */
#undef HAVE_SYS_NDIR_H

/* Define if you have the <sys/pte.h> header file.  */
#undef HAVE_SYS_PTE_H

/* Define if you have the <sys/ptem.h> header file.  */
#undef HAVE_SYS_PTEM_H

/* Define if you have the <sys/select.h> header file.  */
#undef HAVE_SYS_SELECT_H

/* Define if you have the <sys/stream.h> header file.  */
#undef HAVE_SYS_STREAM_H

/* Define if you have the <termcap.h> header file.  */
#undef HAVE_TERMCAP_H

/* Define if you have the <termio.h> header file.  */
#undef HAVE_TERMIO_H

/* Define if you have the <termios.h> header file.  */
#undef HAVE_TERMIOS_H

/* Define if you have the <unistd.h> header file.  */
#undef HAVE_UNISTD_H

/* Define if you have the <varargs.h> header file.  */
#undef HAVE_VARARGS_H

/* Define if you have the <wchar.h> header file.  */
#define HAVE_WCHAR_H

/* Define if you have the <varargs.h> header file.  */
#define HAVE_WCTYPE_H

#define HAVE_MBSTATE_T

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#undef HAVE_LANGINFO_CODESET

/* Definitions pulled in from aclocal.m4. */
#undef VOID_SIGHANDLER
#undef GWINSZ_IN_SYS_IOCTL
#undef STRUCT_WINSIZE_IN_SYS_IOCTL
#undef STRUCT_WINSIZE_IN_TERMIOS
#undef TIOCSTAT_IN_SYS_IOCTL
#undef FIONREAD_IN_SYS_IOCTL
#undef SPEED_T_IN_SYS_TYPES
#undef HAVE_GETPW_DECLS
#undef STRUCT_DIRENT_HAS_D_INO
#undef STRUCT_DIRENT_HAS_D_FILENO
#undef HAVE_BSD_SIGNALS
#undef HAVE_POSIX_SIGNALS
#undef HAVE_USG_SIGHOLD
#undef MUST_REINSTALL_SIGHANDLERS
#undef HAVE_POSIX_SIGSETJMP
#undef CTYPE_NON_ASCII

/* modify settings or make new ones based on what autoconf tells us. */

/* Ultrix botches type-ahead when switching from canonical to
   non-canonical mode, at least through version 4.3 */
#if !defined (HAVE_TERMIOS_H) || !defined (HAVE_TCGETATTR) || defined (ultrix)
#  define TERMIOS_MISSING
#endif

#if defined (STRCOLL_BROKEN)
#  undef HAVE_STRCOLL
#endif

#if defined (__STDC__) && defined (HAVE_STDARG_H)
#  define PREFER_STDARG
#  define USE_VARARGS
#else
#  if defined (HAVE_VARARGS_H)
#    define PREFER_VARARGS
#    define USE_VARARGS
#  endif
#endif
