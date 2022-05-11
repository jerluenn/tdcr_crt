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
  #define CASADI_PREFIX(ID) tetherunit_impl_dae_fun_ ## ID
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

static const casadi_int casadi_s0[25] = {21, 1, 0, 21, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
static const casadi_int casadi_s1[4] = {0, 1, 0, 0};
static const casadi_int casadi_s2[3] = {0, 0, 0};

/* tetherunit_impl_dae_fun:(i0[21],i1[21],i2[0],i3[],i4[])->(o0[21]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][9] : 0;
  a1=arg[1]? arg[1][0] : 0;
  a1=(a0-a1);
  if (res[0]!=0) res[0][0]=a1;
  a1=arg[0]? arg[0][10] : 0;
  a2=arg[1]? arg[1][1] : 0;
  a2=(a1-a2);
  if (res[0]!=0) res[0][1]=a2;
  a2=arg[0]? arg[0][11] : 0;
  a3=arg[1]? arg[1][2] : 0;
  a3=(a2-a3);
  if (res[0]!=0) res[0][2]=a3;
  a3=arg[0]? arg[0][6] : 0;
  a4=5.7305223413900919e-01;
  a5=(a4*a0);
  a6=arg[0]? arg[0][15] : 0;
  a5=(a5*a6);
  a7=(a4*a1);
  a8=arg[0]? arg[0][16] : 0;
  a7=(a7*a8);
  a5=(a5+a7);
  a7=(a4*a2);
  a9=arg[0]? arg[0][17] : 0;
  a7=(a7*a9);
  a5=(a5+a7);
  a7=(a3*a5);
  a10=4.0113656389730643e+01;
  a11=(a10*a3);
  a11=(a11*a6);
  a12=arg[0]? arg[0][7] : 0;
  a13=(a10*a12);
  a13=(a13*a8);
  a11=(a11+a13);
  a13=arg[0]? arg[0][8] : 0;
  a14=(a10*a13);
  a14=(a14*a9);
  a11=(a11+a14);
  a14=(a0*a11);
  a7=(a7-a14);
  a14=arg[1]? arg[1][3] : 0;
  a14=(a7-a14);
  if (res[0]!=0) res[0][3]=a14;
  a14=(a12*a5);
  a15=(a1*a11);
  a14=(a14-a15);
  a15=arg[1]? arg[1][4] : 0;
  a15=(a14-a15);
  if (res[0]!=0) res[0][4]=a15;
  a15=(a13*a5);
  a16=(a2*a11);
  a15=(a15-a16);
  a16=arg[1]? arg[1][5] : 0;
  a16=(a15-a16);
  if (res[0]!=0) res[0][5]=a16;
  a16=arg[0]? arg[0][3] : 0;
  a17=(a10*a16);
  a17=(a17*a6);
  a18=arg[0]? arg[0][4] : 0;
  a19=(a10*a18);
  a19=(a19*a8);
  a17=(a17+a19);
  a19=arg[0]? arg[0][5] : 0;
  a20=(a10*a19);
  a20=(a20*a9);
  a17=(a17+a20);
  a20=(a0*a17);
  a21=(a16*a5);
  a20=(a20-a21);
  a21=arg[1]? arg[1][6] : 0;
  a21=(a20-a21);
  if (res[0]!=0) res[0][6]=a21;
  a21=(a1*a17);
  a22=(a18*a5);
  a21=(a21-a22);
  a22=arg[1]? arg[1][7] : 0;
  a22=(a21-a22);
  if (res[0]!=0) res[0][7]=a22;
  a22=(a2*a17);
  a5=(a19*a5);
  a22=(a22-a5);
  a5=arg[1]? arg[1][8] : 0;
  a5=(a22-a5);
  if (res[0]!=0) res[0][8]=a5;
  a5=(a16*a11);
  a23=(a3*a17);
  a5=(a5-a23);
  a23=arg[1]? arg[1][9] : 0;
  a23=(a5-a23);
  if (res[0]!=0) res[0][9]=a23;
  a23=(a18*a11);
  a24=(a12*a17);
  a23=(a23-a24);
  a24=arg[1]? arg[1][10] : 0;
  a24=(a23-a24);
  if (res[0]!=0) res[0][10]=a24;
  a11=(a19*a11);
  a17=(a13*a17);
  a11=(a11-a17);
  a17=arg[1]? arg[1][11] : 0;
  a17=(a11-a17);
  if (res[0]!=0) res[0][11]=a17;
  a17=-3.4335000000000004e-01;
  a24=arg[1]? arg[1][12] : 0;
  a17=(a17-a24);
  if (res[0]!=0) res[0][12]=a17;
  a17=arg[1]? arg[1][13] : 0;
  a17=(-a17);
  if (res[0]!=0) res[0][13]=a17;
  a17=arg[1]? arg[1][14] : 0;
  a17=(-a17);
  if (res[0]!=0) res[0][14]=a17;
  a17=arg[0]? arg[0][14] : 0;
  a24=(a1*a17);
  a25=arg[0]? arg[0][13] : 0;
  a26=(a2*a25);
  a24=(a24-a26);
  a26=arg[1]? arg[1][15] : 0;
  a26=(a24+a26);
  a26=(-a26);
  if (res[0]!=0) res[0][15]=a26;
  a26=arg[0]? arg[0][12] : 0;
  a27=(a2*a26);
  a17=(a0*a17);
  a27=(a27-a17);
  a17=arg[1]? arg[1][16] : 0;
  a17=(a27+a17);
  a17=(-a17);
  if (res[0]!=0) res[0][16]=a17;
  a25=(a0*a25);
  a26=(a1*a26);
  a25=(a25-a26);
  a26=arg[1]? arg[1][17] : 0;
  a26=(a25+a26);
  a26=(-a26);
  if (res[0]!=0) res[0][17]=a26;
  a26=arg[0]? arg[0][20] : 0;
  a17=arg[0]? arg[0][18] : 0;
  a26=(a26*a17);
  a7=(a7*a6);
  a14=(a14*a8);
  a7=(a7+a14);
  a15=(a15*a9);
  a7=(a7+a15);
  a16=(a16*a24);
  a18=(a18*a27);
  a16=(a16+a18);
  a19=(a19*a25);
  a16=(a16+a19);
  a7=(a7-a16);
  a7=(a10*a7);
  a7=casadi_sq(a7);
  a20=(a20*a6);
  a21=(a21*a8);
  a20=(a20+a21);
  a22=(a22*a9);
  a20=(a20+a22);
  a3=(a3*a24);
  a12=(a12*a27);
  a3=(a3+a12);
  a13=(a13*a25);
  a3=(a3+a13);
  a20=(a20-a3);
  a10=(a10*a20);
  a10=casadi_sq(a10);
  a7=(a7+a10);
  a5=(a5*a6);
  a23=(a23*a8);
  a5=(a5+a23);
  a11=(a11*a9);
  a5=(a5+a11);
  a0=(a0*a24);
  a1=(a1*a27);
  a0=(a0+a1);
  a2=(a2*a25);
  a0=(a0+a2);
  a5=(a5-a0);
  a4=(a4*a5);
  a4=casadi_sq(a4);
  a7=(a7+a4);
  a7=sqrt(a7);
  a26=(a26*a7);
  a7=arg[1]? arg[1][18] : 0;
  a26=(a26+a7);
  a26=(-a26);
  if (res[0]!=0) res[0][18]=a26;
  a26=1.;
  a7=arg[1]? arg[1][19] : 0;
  a26=(a26-a7);
  if (res[0]!=0) res[0][19]=a26;
  a26=arg[1]? arg[1][20] : 0;
  a26=(-a26);
  if (res[0]!=0) res[0][20]=a26;
  return 0;
}

CASADI_SYMBOL_EXPORT int tetherunit_impl_dae_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int tetherunit_impl_dae_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int tetherunit_impl_dae_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void tetherunit_impl_dae_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int tetherunit_impl_dae_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void tetherunit_impl_dae_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void tetherunit_impl_dae_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void tetherunit_impl_dae_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int tetherunit_impl_dae_fun_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int tetherunit_impl_dae_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real tetherunit_impl_dae_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* tetherunit_impl_dae_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* tetherunit_impl_dae_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* tetherunit_impl_dae_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    case 4: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* tetherunit_impl_dae_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int tetherunit_impl_dae_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
