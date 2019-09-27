/* sys/socket.h */

#ifndef _SYS_SOCKET_H
#define _SYS_SOCKET_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef _MSC_VER
  #define SO_REUSEPORT   SO_REUSEADDR
#else
  #define SO_REUSEADDR	2
  #define SO_REUSEPORT	15
#endif

#ifdef __cplusplus
};
#endif


#endif /* _SYS_SOCKET_H */
