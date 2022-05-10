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
  #define CASADI_PREFIX(ID) tetherunit_expl_vde_adj_ ## ID
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

/* tetherunit_expl_vde_adj:(i0[21],i1[21],i2[0],i3[])->(o0[21]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  a1=arg[0]? arg[0][10] : 0;
  a2=arg[0]? arg[0][14] : 0;
  a3=(a1*a2);
  a4=arg[0]? arg[0][11] : 0;
  a5=arg[0]? arg[0][13] : 0;
  a6=(a4*a5);
  a3=(a3-a6);
  a6=4.0113656389730643e+01;
  a7=arg[0]? arg[0][6] : 0;
  a8=5.7305223413900919e-01;
  a9=arg[0]? arg[0][9] : 0;
  a10=(a8*a9);
  a11=arg[0]? arg[0][15] : 0;
  a12=(a10*a11);
  a13=(a8*a1);
  a14=arg[0]? arg[0][16] : 0;
  a15=(a13*a14);
  a12=(a12+a15);
  a15=(a8*a4);
  a16=arg[0]? arg[0][17] : 0;
  a17=(a15*a16);
  a12=(a12+a17);
  a17=(a7*a12);
  a18=(a6*a7);
  a19=(a18*a11);
  a20=arg[0]? arg[0][7] : 0;
  a21=(a6*a20);
  a22=(a21*a14);
  a19=(a19+a22);
  a22=arg[0]? arg[0][8] : 0;
  a23=(a6*a22);
  a24=(a23*a16);
  a19=(a19+a24);
  a24=(a9*a19);
  a17=(a17-a24);
  a24=(a17*a11);
  a25=(a20*a12);
  a26=(a1*a19);
  a25=(a25-a26);
  a26=(a25*a14);
  a24=(a24+a26);
  a26=(a22*a12);
  a27=(a4*a19);
  a26=(a26-a27);
  a27=(a26*a16);
  a24=(a24+a27);
  a27=arg[0]? arg[0][3] : 0;
  a28=(a27*a3);
  a29=arg[0]? arg[0][4] : 0;
  a30=arg[0]? arg[0][12] : 0;
  a31=(a4*a30);
  a32=(a9*a2);
  a31=(a31-a32);
  a32=(a29*a31);
  a28=(a28+a32);
  a32=arg[0]? arg[0][5] : 0;
  a33=(a9*a5);
  a34=(a1*a30);
  a33=(a33-a34);
  a34=(a32*a33);
  a28=(a28+a34);
  a24=(a24-a28);
  a24=(a6*a24);
  a28=(a24+a24);
  a34=arg[0]? arg[0][20] : 0;
  a35=arg[0]? arg[0][18] : 0;
  a36=(a34*a35);
  a37=arg[1]? arg[1][18] : 0;
  a36=(a36*a37);
  a24=casadi_sq(a24);
  a38=(a6*a27);
  a39=(a38*a11);
  a40=(a6*a29);
  a41=(a40*a14);
  a39=(a39+a41);
  a41=(a6*a32);
  a42=(a41*a16);
  a39=(a39+a42);
  a42=(a9*a39);
  a43=(a27*a12);
  a42=(a42-a43);
  a43=(a42*a11);
  a44=(a1*a39);
  a45=(a29*a12);
  a44=(a44-a45);
  a45=(a44*a14);
  a43=(a43+a45);
  a45=(a4*a39);
  a46=(a32*a12);
  a45=(a45-a46);
  a46=(a45*a16);
  a43=(a43+a46);
  a46=(a7*a3);
  a47=(a20*a31);
  a46=(a46+a47);
  a47=(a22*a33);
  a46=(a46+a47);
  a43=(a43-a46);
  a43=(a6*a43);
  a46=casadi_sq(a43);
  a24=(a24+a46);
  a46=(a27*a19);
  a47=(a7*a39);
  a46=(a46-a47);
  a47=(a46*a11);
  a48=(a29*a19);
  a49=(a20*a39);
  a48=(a48-a49);
  a49=(a48*a14);
  a47=(a47+a49);
  a49=(a32*a19);
  a50=(a22*a39);
  a49=(a49-a50);
  a50=(a49*a16);
  a47=(a47+a50);
  a50=(a9*a3);
  a51=(a1*a31);
  a50=(a50+a51);
  a51=(a4*a33);
  a50=(a50+a51);
  a47=(a47-a50);
  a47=(a8*a47);
  a50=casadi_sq(a47);
  a24=(a24+a50);
  a24=sqrt(a24);
  a50=(a24+a24);
  a36=(a36/a50);
  a28=(a28*a36);
  a28=(a6*a28);
  a50=(a3*a28);
  a51=arg[1]? arg[1][9] : 0;
  a47=(a47+a47);
  a47=(a47*a36);
  a47=(a8*a47);
  a52=(a11*a47);
  a51=(a51-a52);
  a52=(a19*a51);
  a50=(a50+a52);
  a52=arg[1]? arg[1][6] : 0;
  a43=(a43+a43);
  a43=(a43*a36);
  a43=(a6*a43);
  a36=(a11*a43);
  a52=(a52-a36);
  a36=(a12*a52);
  a50=(a50-a36);
  a36=arg[1]? arg[1][8] : 0;
  a53=(a16*a43);
  a36=(a36-a53);
  a53=(a4*a36);
  a54=arg[1]? arg[1][11] : 0;
  a55=(a16*a47);
  a54=(a54-a55);
  a55=(a22*a54);
  a56=arg[1]? arg[1][10] : 0;
  a57=(a14*a47);
  a56=(a56-a57);
  a57=(a20*a56);
  a55=(a55+a57);
  a57=(a7*a51);
  a55=(a55+a57);
  a53=(a53-a55);
  a55=arg[1]? arg[1][7] : 0;
  a57=(a14*a43);
  a55=(a55-a57);
  a57=(a1*a55);
  a53=(a53+a57);
  a57=(a9*a52);
  a53=(a53+a57);
  a57=(a11*a53);
  a57=(a6*a57);
  a50=(a50+a57);
  if (res[0]!=0) res[0][3]=a50;
  a50=(a31*a28);
  a57=(a19*a56);
  a50=(a50+a57);
  a57=(a12*a55);
  a50=(a50-a57);
  a57=(a14*a53);
  a57=(a6*a57);
  a50=(a50+a57);
  if (res[0]!=0) res[0][4]=a50;
  a50=(a33*a28);
  a57=(a19*a54);
  a50=(a50+a57);
  a57=(a12*a36);
  a50=(a50-a57);
  a57=(a16*a53);
  a57=(a6*a57);
  a50=(a50+a57);
  if (res[0]!=0) res[0][5]=a50;
  a50=(a3*a43);
  a57=(a39*a51);
  a50=(a50-a57);
  a57=(a32*a54);
  a58=(a29*a56);
  a57=(a57+a58);
  a51=(a27*a51);
  a57=(a57+a51);
  a51=arg[1]? arg[1][5] : 0;
  a58=(a16*a28);
  a51=(a51-a58);
  a58=(a4*a51);
  a57=(a57-a58);
  a58=arg[1]? arg[1][4] : 0;
  a59=(a14*a28);
  a58=(a58-a59);
  a59=(a1*a58);
  a57=(a57-a59);
  a59=arg[1]? arg[1][3] : 0;
  a60=(a11*a28);
  a59=(a59-a60);
  a60=(a9*a59);
  a57=(a57-a60);
  a60=(a11*a57);
  a60=(a6*a60);
  a50=(a50+a60);
  a60=(a12*a59);
  a50=(a50+a60);
  if (res[0]!=0) res[0][6]=a50;
  a50=(a31*a43);
  a56=(a39*a56);
  a50=(a50-a56);
  a56=(a12*a58);
  a50=(a50+a56);
  a56=(a14*a57);
  a56=(a6*a56);
  a50=(a50+a56);
  if (res[0]!=0) res[0][7]=a50;
  a50=(a33*a43);
  a54=(a39*a54);
  a50=(a50-a54);
  a12=(a12*a51);
  a50=(a50+a12);
  a12=(a16*a57);
  a6=(a6*a12);
  a50=(a50+a6);
  if (res[0]!=0) res[0][8]=a50;
  a3=(a3*a47);
  a50=(a4*a47);
  a6=(a22*a43);
  a50=(a50+a6);
  a6=(a32*a28);
  a50=(a50+a6);
  a6=arg[1]? arg[1][17] : 0;
  a50=(a50-a6);
  a6=(a5*a50);
  a3=(a3+a6);
  a6=(a1*a47);
  a12=(a20*a43);
  a6=(a6+a12);
  a12=(a29*a28);
  a6=(a6+a12);
  a12=arg[1]? arg[1][16] : 0;
  a6=(a6-a12);
  a12=(a2*a6);
  a3=(a3-a12);
  a12=(a39*a52);
  a3=(a3+a12);
  a12=(a19*a59);
  a3=(a3-a12);
  a22=(a22*a51);
  a32=(a32*a36);
  a29=(a29*a55);
  a32=(a32+a29);
  a52=(a27*a52);
  a32=(a32+a52);
  a22=(a22-a32);
  a20=(a20*a58);
  a22=(a22+a20);
  a59=(a7*a59);
  a22=(a22+a59);
  a11=(a11*a22);
  a11=(a8*a11);
  a3=(a3+a11);
  a11=arg[1]? arg[1][0] : 0;
  a3=(a3+a11);
  if (res[0]!=0) res[0][9]=a3;
  a31=(a31*a47);
  a3=(a30*a50);
  a31=(a31-a3);
  a3=(a9*a47);
  a7=(a7*a43);
  a3=(a3+a7);
  a27=(a27*a28);
  a3=(a3+a27);
  a27=arg[1]? arg[1][15] : 0;
  a3=(a3-a27);
  a2=(a2*a3);
  a31=(a31+a2);
  a55=(a39*a55);
  a31=(a31+a55);
  a58=(a19*a58);
  a31=(a31-a58);
  a14=(a14*a22);
  a14=(a8*a14);
  a31=(a31+a14);
  a14=arg[1]? arg[1][1] : 0;
  a31=(a31+a14);
  if (res[0]!=0) res[0][10]=a31;
  a33=(a33*a47);
  a30=(a30*a6);
  a33=(a33+a30);
  a5=(a5*a3);
  a33=(a33-a5);
  a39=(a39*a36);
  a33=(a33+a39);
  a19=(a19*a51);
  a33=(a33-a19);
  a16=(a16*a22);
  a8=(a8*a16);
  a33=(a33+a8);
  a8=arg[1]? arg[1][2] : 0;
  a33=(a33+a8);
  if (res[0]!=0) res[0][11]=a33;
  a33=(a4*a6);
  a8=(a1*a50);
  a33=(a33-a8);
  if (res[0]!=0) res[0][12]=a33;
  a50=(a9*a50);
  a4=(a4*a3);
  a50=(a50-a4);
  if (res[0]!=0) res[0][13]=a50;
  a1=(a1*a3);
  a9=(a9*a6);
  a1=(a1-a9);
  if (res[0]!=0) res[0][14]=a1;
  a38=(a38*a53);
  a46=(a46*a47);
  a42=(a42*a43);
  a46=(a46+a42);
  a17=(a17*a28);
  a46=(a46+a17);
  a38=(a38-a46);
  a18=(a18*a57);
  a38=(a38+a18);
  a10=(a10*a22);
  a38=(a38+a10);
  if (res[0]!=0) res[0][15]=a38;
  a40=(a40*a53);
  a48=(a48*a47);
  a44=(a44*a43);
  a48=(a48+a44);
  a25=(a25*a28);
  a48=(a48+a25);
  a40=(a40-a48);
  a21=(a21*a57);
  a40=(a40+a21);
  a13=(a13*a22);
  a40=(a40+a13);
  if (res[0]!=0) res[0][16]=a40;
  a41=(a41*a53);
  a49=(a49*a47);
  a45=(a45*a43);
  a49=(a49+a45);
  a26=(a26*a28);
  a49=(a49+a26);
  a41=(a41-a49);
  a23=(a23*a57);
  a41=(a41+a23);
  a15=(a15*a22);
  a41=(a41+a15);
  if (res[0]!=0) res[0][17]=a41;
  a24=(a24*a37);
  a34=(a34*a24);
  a34=(-a34);
  if (res[0]!=0) res[0][18]=a34;
  if (res[0]!=0) res[0][19]=a0;
  a35=(a35*a24);
  a35=(-a35);
  if (res[0]!=0) res[0][20]=a35;
  return 0;
}

CASADI_SYMBOL_EXPORT int tetherunit_expl_vde_adj(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int tetherunit_expl_vde_adj_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int tetherunit_expl_vde_adj_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void tetherunit_expl_vde_adj_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int tetherunit_expl_vde_adj_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void tetherunit_expl_vde_adj_release(int mem) {
}

CASADI_SYMBOL_EXPORT void tetherunit_expl_vde_adj_incref(void) {
}

CASADI_SYMBOL_EXPORT void tetherunit_expl_vde_adj_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int tetherunit_expl_vde_adj_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int tetherunit_expl_vde_adj_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real tetherunit_expl_vde_adj_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* tetherunit_expl_vde_adj_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* tetherunit_expl_vde_adj_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* tetherunit_expl_vde_adj_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* tetherunit_expl_vde_adj_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int tetherunit_expl_vde_adj_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
