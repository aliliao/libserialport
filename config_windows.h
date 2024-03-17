/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* clock_gettime is available. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the declaration of `BOTHER', and to 0 if you don't.
   */
#define HAVE_DECL_BOTHER 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* flock is available. */
/* #undef HAVE_FLOCK */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* realpath is available. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct serial_struct'. */
/* #undef HAVE_STRUCT_SERIAL_STRUCT */

/* Define to 1 if the system has the type `struct termios2'. */
/* #undef HAVE_STRUCT_TERMIOS2 */

/* Define to 1 if `c_ispeed' is a member of `struct termios2'. */
/* #undef HAVE_STRUCT_TERMIOS2_C_ISPEED */

/* Define to 1 if `c_ospeed' is a member of `struct termios2'. */
/* #undef HAVE_STRUCT_TERMIOS2_C_OSPEED */

/* Define to 1 if `c_ispeed' is a member of `struct termios'. */
/* #undef HAVE_STRUCT_TERMIOS_C_ISPEED */

/* Define to 1 if `c_ospeed' is a member of `struct termios'. */
/* #undef HAVE_STRUCT_TERMIOS_C_OSPEED */

/* sys/file.h is available. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Enumeration is unsupported. */
/* #undef NO_ENUMERATION */

/* Port metadata is unavailable. */
/* #undef NO_PORT_METADATA */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "martin-libserialport@earth.li"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libserialport"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libserialport 0.1.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libserialport"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://sigrok.org/wiki/Libserialport"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.1.1"

/* Macro preceding public API functions */
#define SP_API __declspec(dllexport)

/* . */
#define SP_LIB_VERSION_AGE 1

/* . */
#define SP_LIB_VERSION_CURRENT 1

/* . */
#define SP_LIB_VERSION_REVISION 0

/* . */
#define SP_LIB_VERSION_STRING "1:0:1"

/* . */
#define SP_PACKAGE_VERSION_MAJOR 0

/* . */
#define SP_PACKAGE_VERSION_MICRO 1

/* . */
#define SP_PACKAGE_VERSION_MINOR 1

/* . */
#define SP_PACKAGE_VERSION_STRING "0.1.1"

/* Macro preceding private functions */
#define SP_PRIV 

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

#if HAVE_STRUCT_TERMIOS_C_ISPEED && HAVE_STRUCT_TERMIOS_C_OSPEED
# define HAVE_TERMIOS_SPEED 1
#endif
#if HAVE_STRUCT_TERMIOS2_C_ISPEED && HAVE_STRUCT_TERMIOS2_C_OSPEED
# define HAVE_TERMIOS2_SPEED 1
#endif
