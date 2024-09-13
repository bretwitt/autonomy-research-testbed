/* This file was automatically generated by CasADi 3.6.6.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) mpc_model_True_impl_dae_fun_jac_x_xdot_z_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_fabs CASADI_PREFIX(fabs)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_sign CASADI_PREFIX(sign)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

casadi_real casadi_fabs(casadi_real x) {
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
  return x>0 ? x : -x;
#else
  return fabs(x);
#endif
}

casadi_real casadi_sign(casadi_real x) { return x<0 ? -1 : x>0 ? 1 : x;}

static const casadi_int casadi_s0[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s4[21] = {8, 8, 0, 1, 2, 5, 9, 9, 9, 9, 10, 4, 5, 0, 1, 6, 0, 1, 2, 3, 7};
static const casadi_int casadi_s5[19] = {8, 8, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s6[3] = {8, 0, 0};

/* mpc_model_True_impl_dae_fun_jac_x_xdot_z:(i0[8],i1[8],i2[2],i3[],i4[],i5[3])->(o0[8],o1[8x8,10nz],o2[8x8,8nz],o3[8x0]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[1]? arg[1][0] : 0;
  a1=arg[0]? arg[0][3] : 0;
  a2=arg[0]? arg[0][2] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a0=(a0-a4);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[1]? arg[1][1] : 0;
  a4=sin(a2);
  a5=(a1*a4);
  a0=(a0-a5);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[1]? arg[1][2] : 0;
  a5=2.9999999999999999e-01;
  a5=(a1/a5);
  a6=arg[2]? arg[2][1] : 0;
  a6=tan(a6);
  a5=(a5*a6);
  a0=(a0-a5);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[1]? arg[1][3] : 0;
  a5=arg[2]? arg[2][0] : 0;
  a7=1.0000000000000000e-02;
  a8=casadi_sq(a1);
  a8=(a7*a8);
  a5=(a5-a8);
  a8=5.0000000000000000e-01;
  a9=casadi_fabs(a1);
  a9=(a8*a9);
  a5=(a5-a9);
  a0=(a0-a5);
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[1]? arg[1][4] : 0;
  a5=arg[5]? arg[5][0] : 0;
  a9=arg[0]? arg[0][0] : 0;
  a5=(a5-a9);
  a9=casadi_fabs(a5);
  a0=(a0-a9);
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[1]? arg[1][5] : 0;
  a9=arg[5]? arg[5][1] : 0;
  a10=arg[0]? arg[0][1] : 0;
  a9=(a9-a10);
  a10=casadi_fabs(a9);
  a0=(a0-a10);
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[1]? arg[1][6] : 0;
  a10=arg[5]? arg[5][2] : 0;
  a10=(a2-a10);
  a11=sin(a10);
  a10=cos(a10);
  a11=atan2(a11,a10);
  a10=casadi_fabs(a11);
  a0=(a0-a10);
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[1]? arg[1][7] : 0;
  a10=arg[0]? arg[0][7] : 0;
  a12=1.;
  a10=(a10-a12);
  a0=(a0-a10);
  if (res[0]!=0) res[0][7]=a0;
  a5=casadi_sign(a5);
  if (res[1]!=0) res[1][0]=a5;
  a9=casadi_sign(a9);
  if (res[1]!=0) res[1][1]=a9;
  a9=sin(a2);
  a9=(a1*a9);
  if (res[1]!=0) res[1][2]=a9;
  a2=cos(a2);
  a2=(a1*a2);
  a2=(-a2);
  if (res[1]!=0) res[1][3]=a2;
  a11=casadi_sign(a11);
  a11=(-a11);
  if (res[1]!=0) res[1][4]=a11;
  a3=(-a3);
  if (res[1]!=0) res[1][5]=a3;
  a4=(-a4);
  if (res[1]!=0) res[1][6]=a4;
  a4=3.3333333333333335e+00;
  a4=(a4*a6);
  a4=(-a4);
  if (res[1]!=0) res[1][7]=a4;
  a4=(a1+a1);
  a7=(a7*a4);
  a1=casadi_sign(a1);
  a8=(a8*a1);
  a7=(a7+a8);
  if (res[1]!=0) res[1][8]=a7;
  a7=-1.;
  if (res[1]!=0) res[1][9]=a7;
  if (res[2]!=0) res[2][0]=a12;
  if (res[2]!=0) res[2][1]=a12;
  if (res[2]!=0) res[2][2]=a12;
  if (res[2]!=0) res[2][3]=a12;
  if (res[2]!=0) res[2][4]=a12;
  if (res[2]!=0) res[2][5]=a12;
  if (res[2]!=0) res[2][6]=a12;
  if (res[2]!=0) res[2][7]=a12;
  return 0;
}

CASADI_SYMBOL_EXPORT int mpc_model_True_impl_dae_fun_jac_x_xdot_z(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int mpc_model_True_impl_dae_fun_jac_x_xdot_z_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int mpc_model_True_impl_dae_fun_jac_x_xdot_z_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void mpc_model_True_impl_dae_fun_jac_x_xdot_z_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int mpc_model_True_impl_dae_fun_jac_x_xdot_z_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void mpc_model_True_impl_dae_fun_jac_x_xdot_z_release(int mem) {
}

CASADI_SYMBOL_EXPORT void mpc_model_True_impl_dae_fun_jac_x_xdot_z_incref(void) {
}

CASADI_SYMBOL_EXPORT void mpc_model_True_impl_dae_fun_jac_x_xdot_z_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int mpc_model_True_impl_dae_fun_jac_x_xdot_z_n_in(void) { return 6;}

CASADI_SYMBOL_EXPORT casadi_int mpc_model_True_impl_dae_fun_jac_x_xdot_z_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_real mpc_model_True_impl_dae_fun_jac_x_xdot_z_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* mpc_model_True_impl_dae_fun_jac_x_xdot_z_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    case 5: return "i5";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* mpc_model_True_impl_dae_fun_jac_x_xdot_z_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* mpc_model_True_impl_dae_fun_jac_x_xdot_z_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    case 4: return casadi_s2;
    case 5: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* mpc_model_True_impl_dae_fun_jac_x_xdot_z_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s4;
    case 2: return casadi_s5;
    case 3: return casadi_s6;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int mpc_model_True_impl_dae_fun_jac_x_xdot_z_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT int mpc_model_True_impl_dae_fun_jac_x_xdot_z_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 4*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
