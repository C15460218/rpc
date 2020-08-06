/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULAR_H_RPCGEN
#define _CALCULAR_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct sumar_1_argument {
	int a;
	int b;
};
typedef struct sumar_1_argument sumar_1_argument;

struct restar_1_argument {
	int a;
	int b;
};
typedef struct restar_1_argument restar_1_argument;

struct multiplica_1_argument {
	int a;
	int b;
};
typedef struct multiplica_1_argument multiplica_1_argument;

struct divide_1_argument {
	int a;
	int b;
};
typedef struct divide_1_argument divide_1_argument;

#define CALCULAR 999999999
#define UNO 1

#if defined(__STDC__) || defined(__cplusplus)
#define sumar 1
extern  int * sumar_1(int , int , CLIENT *);
extern  int * sumar_1_svc(int , int , struct svc_req *);
#define restar 2
extern  int * restar_1(int , int , CLIENT *);
extern  int * restar_1_svc(int , int , struct svc_req *);
#define multiplica 3
extern  int * multiplica_1(int , int , CLIENT *);
extern  int * multiplica_1_svc(int , int , struct svc_req *);
#define divide 4
extern  float * divide_1(int , int , CLIENT *);
extern  float * divide_1_svc(int , int , struct svc_req *);
extern int calcular_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define sumar 1
extern  int * sumar_1();
extern  int * sumar_1_svc();
#define restar 2
extern  int * restar_1();
extern  int * restar_1_svc();
#define multiplica 3
extern  int * multiplica_1();
extern  int * multiplica_1_svc();
#define divide 4
extern  float * divide_1();
extern  float * divide_1_svc();
extern int calcular_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_sumar_1_argument (XDR *, sumar_1_argument*);
extern  bool_t xdr_restar_1_argument (XDR *, restar_1_argument*);
extern  bool_t xdr_multiplica_1_argument (XDR *, multiplica_1_argument*);
extern  bool_t xdr_divide_1_argument (XDR *, divide_1_argument*);

#else /* K&R C */
extern bool_t xdr_sumar_1_argument ();
extern bool_t xdr_restar_1_argument ();
extern bool_t xdr_multiplica_1_argument ();
extern bool_t xdr_divide_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULAR_H_RPCGEN */