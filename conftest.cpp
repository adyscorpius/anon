/* confdefs.h */
#define PACKAGE_NAME "BTCPrivate"
#define PACKAGE_TARNAME "zcash"
#define PACKAGE_VERSION "1.0.12-1"
#define PACKAGE_STRING "BTCPrivate 1.0.12-1"
#define PACKAGE_BUGREPORT "https://github.com/btcprivate/bitcoinprivate/issues"
#define PACKAGE_URL ""
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define HAVE_DECL_STRERROR_R 1
#define HAVE_STRERROR_R 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_UNISTD_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_GETADDRINFO_A 1
#define HAVE_INET_PTON 1
#define HAVE_DECL_STRNLEN 1
#define HAVE_DECL_LE16TOH 0
#define HAVE_DECL_LE32TOH 0
#define HAVE_DECL_LE64TOH 0
#define HAVE_DECL_HTOLE16 0
#define HAVE_DECL_HTOLE32 0
#define HAVE_DECL_HTOLE64 0
#define HAVE_DECL_BE16TOH 0
#define HAVE_DECL_BE32TOH 0
#define HAVE_DECL_BE64TOH 0
#define HAVE_DECL_HTOBE16 0
#define HAVE_DECL_HTOBE32 0
#define HAVE_DECL_HTOBE64 0
#define HAVE_DECL_BSWAP_16 0
#define HAVE_DECL_BSWAP_32 0
#define HAVE_DECL_BSWAP_64 0
#define HAVE_VISIBILITY_ATTRIBUTE 1
#define ENABLE_PROTON 0
#define HAVE_MINIUPNPC_MINIWGET_H 1
#define HAVE_MINIUPNPC_MINIUPNPC_H 1
#define HAVE_MINIUPNPC_UPNPCOMMANDS_H 1
#define HAVE_MINIUPNPC_UPNPERRORS_H 1
#define HAVE_BOOST /**/
#define HAVE_BOOST_SYSTEM /**/
#define HAVE_BOOST_FILESYSTEM /**/
#define HAVE_BOOST_PROGRAM_OPTIONS /**/
#define HAVE_BOOST_THREAD /**/
#define HAVE_BOOST_CHRONO /**/
/* end confdefs.h.  */
#include <boost/test/unit_test.hpp>
int
main ()
{
using boost::unit_test::test_suite;
							 test_suite* test= BOOST_TEST_SUITE( "Unit test example 1" ); return 0;
  ;
  return 0;
}
