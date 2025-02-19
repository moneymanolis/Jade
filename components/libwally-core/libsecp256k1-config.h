/* src/libsecp256k1-config.h.  Generated from libsecp256k1-config.h.in by configure.  */
/* src/libsecp256k1-config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef LIBSECP256K1_CONFIG_H

#define LIBSECP256K1_CONFIG_H

/* Define this symbol to compile out all VERIFY code */
/* #undef COVERAGE */

/* Set ecmult gen precision bits */
#define ECMULT_GEN_PREC_BITS 4

/* Set window size for ecmult precomputation */
#define ECMULT_WINDOW_SIZE 8

/* Define this symbol to enable the ECDH module */
#define ENABLE_MODULE_ECDH 1

/* Define this symbol to enable the ECDSA adaptor module */
/* #undef ENABLE_MODULE_ECDSA_ADAPTOR */

/* Define this symbol to enable the ECDSA sign-to-contract module */
#define ENABLE_MODULE_ECDSA_S2C 1

/* Define this symbol to enable the extrakeys module */
#define ENABLE_MODULE_EXTRAKEYS 1

/* Define this symbol to enable the NUMS generator module */
#define ENABLE_MODULE_GENERATOR 1

/* Define this symbol to enable the MuSig module */
/* #undef ENABLE_MODULE_MUSIG */

/* Define this symbol to enable the Pedersen / zero knowledge range proof
   module */
#define ENABLE_MODULE_RANGEPROOF 1

/* Define this symbol to enable the ECDSA pubkey recovery module */
#define ENABLE_MODULE_RECOVERY 1

/* Define this symbol to enable the schnorrsig module */
#define ENABLE_MODULE_SCHNORRSIG

/* Define this symbol to enable the surjection proof module */
#define ENABLE_MODULE_SURJECTIONPROOF 1

/* Define this symbol to enable the key whitelisting module */
/* #define ENABLE_MODULE_WHITELIST 1 */

/* Define this symbol if OpenSSL EC functions are available */
/* #undef ENABLE_OPENSSL_TESTS */

/* Define this symbol if __builtin_clzll is available */
/* #undef HAVE_BUILTIN_CLZLL */

/* Define this symbol if __builtin_popcount is available */
/* #undef HAVE_BUILTIN_POPCOUNT */

#define HAVE_BUILTIN_POPCOUNT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define this symbol if valgrind is installed, and it supports the host
   platform */
/* #undef HAVE_VALGRIND */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "libsecp256k1"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "libsecp256k1"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libsecp256k1 0.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libsecp256k1"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.1"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define this symbol to enable x86_64 assembly optimizations */
/* #undef USE_ASM_X86_64 */

/* Define this symbol if an external (non-inline) assembly implementation is
   used */
/* #undef USE_EXTERNAL_ASM */

/* Define this symbol if an external implementation of the default callbacks
   is used */
/* #undef USE_EXTERNAL_DEFAULT_CALLBACKS */

/* Define this symbol to force the use of the (unsigned) __int128 based wide
   multiplication implementation */
/* #undef USE_FORCE_WIDEMUL_INT128 */

/* Define this symbol to force the use of the (u)int64_t based wide
   multiplication implementation */
/* #undef USE_FORCE_WIDEMUL_INT64 */

/* Define this symbol to reduce SECP256K1_SURJECTIONPROOF_MAX_N_INPUTS to 16,
   disabling parsing and verification */
/* #undef USE_REDUCED_SURJECTION_PROOF_SIZE */

/* Version number of package */
#define VERSION "0.1"

#endif /*LIBSECP256K1_CONFIG_H*/
