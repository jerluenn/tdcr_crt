/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) tetherunit_stepIntegrator_expl_ode_fun_ ## ID
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
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
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

static const casadi_int casadi_s0[20] = {16, 1, 0, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
static const casadi_int casadi_s1[4] = {0, 1, 0, 0};
static const casadi_int casadi_s2[3] = {0, 0, 0};

/* tetherunit_stepIntegrator_expl_ode_fun:(i0[16],i1[0],i2[])->(o0[16]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a3, a4, a5, a6, a7, a8, a9;
  a0=2.;
  a1=arg[0]? arg[0][4] : 0;
  a2=arg[0]? arg[0][6] : 0;
  a3=(a1*a2);
  a4=arg[0]? arg[0][3] : 0;
  a5=arg[0]? arg[0][5] : 0;
  a6=(a4*a5);
  a3=(a3+a6);
  a3=(a0*a3);
  if (res[0]!=0) res[0][0]=a3;
  a6=(a5*a2);
  a7=(a4*a1);
  a6=(a6-a7);
  a6=(a0*a6);
  if (res[0]!=0) res[0][1]=a6;
  a7=casadi_sq(a4);
  a8=casadi_sq(a2);
  a7=(a7+a8);
  a7=(a0*a7);
  a8=1.;
  a7=(a7-a8);
  if (res[0]!=0) res[0][2]=a7;
  a9=1.0000000000000000e-02;
  a10=casadi_sq(a4);
  a11=casadi_sq(a1);
  a10=(a10+a11);
  a11=casadi_sq(a5);
  a10=(a10+a11);
  a11=casadi_sq(a2);
  a10=(a10+a11);
  a10=(a8-a10);
  a9=(a9*a10);
  a10=(a9*a4);
  a11=5.0000000000000000e-01;
  a12=4.0113656389730643e+01;
  a13=casadi_sq(a4);
  a14=casadi_sq(a1);
  a13=(a13+a14);
  a13=(a0*a13);
  a13=(a13-a8);
  a13=(a12*a13);
  a14=arg[0]? arg[0][10] : 0;
  a13=(a13*a14);
  a15=(a1*a5);
  a16=(a4*a2);
  a15=(a15+a16);
  a15=(a0*a15);
  a15=(a12*a15);
  a16=arg[0]? arg[0][11] : 0;
  a15=(a15*a16);
  a13=(a13+a15);
  a15=(a1*a2);
  a17=(a4*a5);
  a15=(a15-a17);
  a15=(a0*a15);
  a15=(a12*a15);
  a17=arg[0]? arg[0][12] : 0;
  a15=(a15*a17);
  a13=(a13+a15);
  a15=(a13*a1);
  a18=(a1*a5);
  a19=(a4*a2);
  a18=(a18-a19);
  a18=(a0*a18);
  a18=(a12*a18);
  a18=(a18*a14);
  a19=casadi_sq(a4);
  a20=casadi_sq(a5);
  a19=(a19+a20);
  a19=(a0*a19);
  a19=(a19-a8);
  a19=(a12*a19);
  a19=(a19*a16);
  a18=(a18+a19);
  a19=(a5*a2);
  a20=(a4*a1);
  a19=(a19+a20);
  a0=(a0*a19);
  a12=(a12*a0);
  a12=(a12*a17);
  a18=(a18+a12);
  a12=(a18*a5);
  a15=(a15+a12);
  a12=5.7305223413900919e-01;
  a0=(a12*a3);
  a0=(a0*a14);
  a14=(a12*a6);
  a14=(a14*a16);
  a0=(a0+a14);
  a12=(a12*a7);
  a12=(a12*a17);
  a0=(a0+a12);
  a12=(a0*a2);
  a15=(a15+a12);
  a15=(a11*a15);
  a10=(a10-a15);
  if (res[0]!=0) res[0][3]=a10;
  a10=(a13*a4);
  a15=(a0*a5);
  a10=(a10+a15);
  a15=(a18*a2);
  a10=(a10-a15);
  a10=(a11*a10);
  a15=(a9*a1);
  a10=(a10+a15);
  if (res[0]!=0) res[0][4]=a10;
  a10=(a18*a4);
  a15=(a0*a1);
  a10=(a10-a15);
  a15=(a13*a2);
  a10=(a10+a15);
  a10=(a11*a10);
  a15=(a9*a5);
  a10=(a10+a15);
  if (res[0]!=0) res[0][5]=a10;
  a4=(a0*a4);
  a1=(a18*a1);
  a4=(a4+a1);
  a5=(a13*a5);
  a4=(a4-a5);
  a11=(a11*a4);
  a9=(a9*a2);
  a11=(a11+a9);
  if (res[0]!=0) res[0][6]=a11;
  a11=-3.4335000000000004e-01;
  if (res[0]!=0) res[0][7]=a11;
  a11=0.;
  if (res[0]!=0) res[0][8]=a11;
  if (res[0]!=0) res[0][9]=a11;
  a9=arg[0]? arg[0][9] : 0;
  a2=(a6*a9);
  a4=arg[0]? arg[0][8] : 0;
  a5=(a7*a4);
  a2=(a2-a5);
  a2=(-a2);
  if (res[0]!=0) res[0][10]=a2;
  a2=arg[0]? arg[0][7] : 0;
  a7=(a7*a2);
  a9=(a3*a9);
  a7=(a7-a9);
  a7=(-a7);
  if (res[0]!=0) res[0][11]=a7;
  a3=(a3*a4);
  a6=(a6*a2);
  a3=(a3-a6);
  a3=(-a3);
  if (res[0]!=0) res[0][12]=a3;
  a3=arg[0]? arg[0][15] : 0;
  a6=arg[0]? arg[0][13] : 0;
  a3=(a3*a6);
  a13=casadi_sq(a13);
  a18=casadi_sq(a18);
  a13=(a13+a18);
  a0=casadi_sq(a0);
  a13=(a13+a0);
  a13=sqrt(a13);
  a3=(a3*a13);
  a3=(-a3);
  if (res[0]!=0) res[0][13]=a3;
  if (res[0]!=0) res[0][14]=a8;
  if (res[0]!=0) res[0][15]=a11;
  return 0;
}

CASADI_SYMBOL_EXPORT int tetherunit_stepIntegrator_expl_ode_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int tetherunit_stepIntegrator_expl_ode_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int tetherunit_stepIntegrator_expl_ode_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void tetherunit_stepIntegrator_expl_ode_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int tetherunit_stepIntegrator_expl_ode_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void tetherunit_stepIntegrator_expl_ode_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void tetherunit_stepIntegrator_expl_ode_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void tetherunit_stepIntegrator_expl_ode_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int tetherunit_stepIntegrator_expl_ode_fun_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int tetherunit_stepIntegrator_expl_ode_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real tetherunit_stepIntegrator_expl_ode_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* tetherunit_stepIntegrator_expl_ode_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* tetherunit_stepIntegrator_expl_ode_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* tetherunit_stepIntegrator_expl_ode_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* tetherunit_stepIntegrator_expl_ode_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int tetherunit_stepIntegrator_expl_ode_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
