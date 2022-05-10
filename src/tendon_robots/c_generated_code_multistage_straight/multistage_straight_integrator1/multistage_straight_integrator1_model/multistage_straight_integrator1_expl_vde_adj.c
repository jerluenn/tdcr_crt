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
  #define CASADI_PREFIX(ID) multistage_straight_integrator1_expl_vde_adj_ ## ID
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

static const casadi_int casadi_s0[29] = {25, 1, 0, 25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
static const casadi_int casadi_s1[4] = {0, 1, 0, 0};
static const casadi_int casadi_s2[3] = {0, 0, 0};

/* multistage_straight_integrator1_expl_vde_adj:(i0[25],i1[25],i2[0],i3[])->(o0[25]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a16, a160, a161, a162, a163, a164, a165, a166, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  a1=2.3536854249213214e+01;
  a2=arg[0]? arg[0][6] : 0;
  a3=(a1*a2);
  a4=arg[0]? arg[0][15] : 0;
  a5=(a3*a4);
  a6=arg[0]? arg[0][7] : 0;
  a7=(a1*a6);
  a8=arg[0]? arg[0][16] : 0;
  a9=(a7*a8);
  a5=(a5+a9);
  a9=arg[0]? arg[0][8] : 0;
  a10=(a1*a9);
  a11=arg[0]? arg[0][17] : 0;
  a12=(a10*a11);
  a5=(a5+a12);
  a12=arg[0]? arg[0][23] : 0;
  a13=arg[0]? arg[0][9] : 0;
  a14=arg[0]? arg[0][11] : 0;
  a15=(a13*a14);
  a16=(a12*a15);
  a17=arg[1]? arg[1][14] : 0;
  a16=(a16*a17);
  a18=arg[0]? arg[0][10] : 0;
  a19=(a13*a18);
  a20=(a12*a19);
  a21=arg[1]? arg[1][13] : 0;
  a20=(a20*a21);
  a16=(a16+a20);
  a20=casadi_sq(a14);
  a22=casadi_sq(a18);
  a20=(a20+a22);
  a22=(a12*a20);
  a23=arg[1]? arg[1][12] : 0;
  a22=(a22*a23);
  a16=(a16-a22);
  a22=(a5*a16);
  a24=arg[0]? arg[0][22] : 0;
  a25=(a13*a14);
  a26=(a24*a25);
  a26=(a26*a17);
  a27=(a13*a18);
  a28=(a24*a27);
  a28=(a28*a21);
  a26=(a26+a28);
  a28=casadi_sq(a14);
  a29=casadi_sq(a18);
  a28=(a28+a29);
  a29=(a24*a28);
  a29=(a29*a23);
  a26=(a26-a29);
  a29=(a5*a26);
  a22=(a22+a29);
  a29=arg[0]? arg[0][20] : 0;
  a30=(a13*a14);
  a31=(a29*a30);
  a31=(a31*a17);
  a32=(a13*a18);
  a33=(a29*a32);
  a33=(a33*a21);
  a31=(a31+a33);
  a33=casadi_sq(a14);
  a34=casadi_sq(a18);
  a33=(a33+a34);
  a34=(a29*a33);
  a34=(a34*a23);
  a31=(a31-a34);
  a34=(a5*a31);
  a22=(a22+a34);
  a34=arg[0]? arg[0][19] : 0;
  a35=(a13*a14);
  a36=(a34*a35);
  a36=(a36*a17);
  a37=(a13*a18);
  a38=(a34*a37);
  a38=(a38*a21);
  a36=(a36+a38);
  a38=casadi_sq(a14);
  a39=casadi_sq(a18);
  a38=(a38+a39);
  a39=(a34*a38);
  a39=(a39*a23);
  a36=(a36-a39);
  a39=(a5*a36);
  a22=(a22+a39);
  a39=arg[0]? arg[0][18] : 0;
  a40=(a13*a14);
  a41=(a39*a40);
  a41=(a41*a17);
  a42=(a13*a18);
  a43=(a39*a42);
  a43=(a43*a21);
  a41=(a41+a43);
  a43=casadi_sq(a14);
  a44=casadi_sq(a18);
  a43=(a43+a44);
  a44=(a39*a43);
  a44=(a44*a23);
  a41=(a41-a44);
  a44=(a5*a41);
  a22=(a22+a44);
  a44=arg[1]? arg[1][9] : 0;
  a45=(a5*a44);
  a22=(a22+a45);
  a45=5.1042610546200007e-01;
  a46=(a45*a13);
  a47=(a46*a4);
  a48=(a45*a18);
  a49=(a48*a8);
  a47=(a47+a49);
  a49=(a45*a14);
  a50=(a49*a11);
  a47=(a47+a50);
  a50=arg[1]? arg[1][6] : 0;
  a51=(a47*a50);
  a22=(a22-a51);
  a51=arg[1]? arg[1][8] : 0;
  a52=(a14*a51);
  a53=(a14*a18);
  a54=(a12*a53);
  a54=(a54*a21);
  a55=casadi_sq(a18);
  a56=casadi_sq(a13);
  a55=(a55+a56);
  a56=(a12*a55);
  a56=(a56*a17);
  a54=(a54-a56);
  a56=(a14*a13);
  a57=(a12*a56);
  a57=(a57*a23);
  a54=(a54+a57);
  a57=(a9*a54);
  a58=(a18*a14);
  a59=(a12*a58);
  a59=(a59*a17);
  a60=casadi_sq(a14);
  a61=casadi_sq(a13);
  a60=(a60+a61);
  a61=(a12*a60);
  a61=(a61*a21);
  a59=(a59-a61);
  a61=(a18*a13);
  a62=(a12*a61);
  a62=(a62*a23);
  a59=(a59+a62);
  a62=(a6*a59);
  a57=(a57+a62);
  a62=(a2*a16);
  a57=(a57+a62);
  a62=(a14*a18);
  a63=(a24*a62);
  a63=(a63*a21);
  a64=casadi_sq(a18);
  a65=casadi_sq(a13);
  a64=(a64+a65);
  a65=(a24*a64);
  a65=(a65*a17);
  a63=(a63-a65);
  a65=(a14*a13);
  a66=(a24*a65);
  a66=(a66*a23);
  a63=(a63+a66);
  a66=(a9*a63);
  a57=(a57+a66);
  a66=(a18*a14);
  a67=(a24*a66);
  a67=(a67*a17);
  a68=casadi_sq(a14);
  a69=casadi_sq(a13);
  a68=(a68+a69);
  a69=(a24*a68);
  a69=(a69*a21);
  a67=(a67-a69);
  a69=(a18*a13);
  a70=(a24*a69);
  a70=(a70*a23);
  a67=(a67+a70);
  a70=(a6*a67);
  a57=(a57+a70);
  a70=(a2*a26);
  a57=(a57+a70);
  a70=(a14*a18);
  a71=(a29*a70);
  a71=(a71*a21);
  a72=casadi_sq(a18);
  a73=casadi_sq(a13);
  a72=(a72+a73);
  a73=(a29*a72);
  a73=(a73*a17);
  a71=(a71-a73);
  a73=(a14*a13);
  a74=(a29*a73);
  a74=(a74*a23);
  a71=(a71+a74);
  a74=(a9*a71);
  a57=(a57+a74);
  a74=(a18*a14);
  a75=(a29*a74);
  a75=(a75*a17);
  a76=casadi_sq(a14);
  a77=casadi_sq(a13);
  a76=(a76+a77);
  a77=(a29*a76);
  a77=(a77*a21);
  a75=(a75-a77);
  a77=(a18*a13);
  a78=(a29*a77);
  a78=(a78*a23);
  a75=(a75+a78);
  a78=(a6*a75);
  a57=(a57+a78);
  a78=(a2*a31);
  a57=(a57+a78);
  a78=(a14*a18);
  a79=(a34*a78);
  a79=(a79*a21);
  a80=casadi_sq(a18);
  a81=casadi_sq(a13);
  a80=(a80+a81);
  a81=(a34*a80);
  a81=(a81*a17);
  a79=(a79-a81);
  a81=(a14*a13);
  a82=(a34*a81);
  a82=(a82*a23);
  a79=(a79+a82);
  a82=(a9*a79);
  a57=(a57+a82);
  a82=(a18*a14);
  a83=(a34*a82);
  a83=(a83*a17);
  a84=casadi_sq(a14);
  a85=casadi_sq(a13);
  a84=(a84+a85);
  a85=(a34*a84);
  a85=(a85*a21);
  a83=(a83-a85);
  a85=(a18*a13);
  a86=(a34*a85);
  a86=(a86*a23);
  a83=(a83+a86);
  a86=(a6*a83);
  a57=(a57+a86);
  a86=(a2*a36);
  a57=(a57+a86);
  a86=(a14*a18);
  a87=(a39*a86);
  a87=(a87*a21);
  a88=casadi_sq(a18);
  a89=casadi_sq(a13);
  a88=(a88+a89);
  a89=(a39*a88);
  a89=(a89*a17);
  a87=(a87-a89);
  a89=(a14*a13);
  a90=(a39*a89);
  a90=(a90*a23);
  a87=(a87+a90);
  a90=(a9*a87);
  a57=(a57+a90);
  a90=(a18*a14);
  a91=(a39*a90);
  a91=(a91*a17);
  a92=casadi_sq(a14);
  a93=casadi_sq(a13);
  a92=(a92+a93);
  a93=(a39*a92);
  a93=(a93*a21);
  a91=(a91-a93);
  a93=(a18*a13);
  a94=(a39*a93);
  a94=(a94*a23);
  a91=(a91+a94);
  a94=(a6*a91);
  a57=(a57+a94);
  a94=(a2*a41);
  a57=(a57+a94);
  a94=arg[1]? arg[1][11] : 0;
  a95=(a9*a94);
  a57=(a57+a95);
  a95=arg[1]? arg[1][10] : 0;
  a96=(a6*a95);
  a57=(a57+a96);
  a96=(a2*a44);
  a57=(a57+a96);
  a52=(a52-a57);
  a57=arg[1]? arg[1][7] : 0;
  a96=(a18*a57);
  a52=(a52+a96);
  a96=(a13*a50);
  a52=(a52+a96);
  a96=(a4*a52);
  a96=(a1*a96);
  a22=(a22+a96);
  if (res[0]!=0) res[0][3]=a22;
  a22=(a5*a59);
  a96=(a5*a67);
  a22=(a22+a96);
  a96=(a5*a75);
  a22=(a22+a96);
  a96=(a5*a83);
  a22=(a22+a96);
  a96=(a5*a91);
  a22=(a22+a96);
  a96=(a5*a95);
  a22=(a22+a96);
  a96=(a47*a57);
  a22=(a22-a96);
  a96=(a8*a52);
  a96=(a1*a96);
  a22=(a22+a96);
  if (res[0]!=0) res[0][4]=a22;
  a22=(a5*a54);
  a96=(a5*a63);
  a22=(a22+a96);
  a96=(a5*a71);
  a22=(a22+a96);
  a96=(a5*a79);
  a22=(a22+a96);
  a96=(a5*a87);
  a22=(a22+a96);
  a96=(a5*a94);
  a22=(a22+a96);
  a96=(a47*a51);
  a22=(a22-a96);
  a96=(a11*a52);
  a96=(a1*a96);
  a22=(a22+a96);
  if (res[0]!=0) res[0][5]=a22;
  a22=arg[0]? arg[0][5] : 0;
  a96=(a22*a54);
  a97=arg[0]? arg[0][4] : 0;
  a98=(a97*a59);
  a96=(a96+a98);
  a98=arg[0]? arg[0][3] : 0;
  a99=(a98*a16);
  a96=(a96+a99);
  a99=(a22*a63);
  a96=(a96+a99);
  a99=(a97*a67);
  a96=(a96+a99);
  a99=(a98*a26);
  a96=(a96+a99);
  a99=(a22*a71);
  a96=(a96+a99);
  a99=(a97*a75);
  a96=(a96+a99);
  a99=(a98*a31);
  a96=(a96+a99);
  a99=(a22*a79);
  a96=(a96+a99);
  a99=(a97*a83);
  a96=(a96+a99);
  a99=(a98*a36);
  a96=(a96+a99);
  a99=(a22*a87);
  a96=(a96+a99);
  a99=(a97*a91);
  a96=(a96+a99);
  a99=(a98*a41);
  a96=(a96+a99);
  a99=(a22*a94);
  a96=(a96+a99);
  a99=(a97*a95);
  a96=(a96+a99);
  a99=(a98*a44);
  a96=(a96+a99);
  a99=arg[1]? arg[1][5] : 0;
  a100=(a14*a99);
  a96=(a96-a100);
  a100=arg[1]? arg[1][4] : 0;
  a101=(a18*a100);
  a96=(a96-a101);
  a101=arg[1]? arg[1][3] : 0;
  a102=(a13*a101);
  a96=(a96-a102);
  a102=(a4*a96);
  a102=(a1*a102);
  a103=(a1*a98);
  a104=(a103*a4);
  a105=(a1*a97);
  a106=(a105*a8);
  a104=(a104+a106);
  a106=(a1*a22);
  a107=(a106*a11);
  a104=(a104+a107);
  a16=(a104*a16);
  a26=(a104*a26);
  a16=(a16+a26);
  a31=(a104*a31);
  a16=(a16+a31);
  a36=(a104*a36);
  a16=(a16+a36);
  a41=(a104*a41);
  a16=(a16+a41);
  a44=(a104*a44);
  a16=(a16+a44);
  a102=(a102-a16);
  a16=(a47*a101);
  a102=(a102+a16);
  if (res[0]!=0) res[0][6]=a102;
  a102=(a47*a100);
  a59=(a104*a59);
  a67=(a104*a67);
  a59=(a59+a67);
  a75=(a104*a75);
  a59=(a59+a75);
  a83=(a104*a83);
  a59=(a59+a83);
  a91=(a104*a91);
  a59=(a59+a91);
  a95=(a104*a95);
  a59=(a59+a95);
  a102=(a102-a59);
  a59=(a8*a96);
  a59=(a1*a59);
  a102=(a102+a59);
  if (res[0]!=0) res[0][7]=a102;
  a47=(a47*a99);
  a54=(a104*a54);
  a63=(a104*a63);
  a54=(a54+a63);
  a71=(a104*a71);
  a54=(a54+a71);
  a79=(a104*a79);
  a54=(a54+a79);
  a87=(a104*a87);
  a54=(a54+a87);
  a94=(a104*a94);
  a54=(a54+a94);
  a47=(a47-a54);
  a54=(a11*a96);
  a1=(a1*a54);
  a47=(a47+a1);
  if (res[0]!=0) res[0][8]=a47;
  a47=arg[0]? arg[0][14] : 0;
  a1=arg[1]? arg[1][16] : 0;
  a54=(a47*a1);
  a94=arg[0]? arg[0][13] : 0;
  a87=arg[1]? arg[1][17] : 0;
  a79=(a94*a87);
  a54=(a54-a79);
  a79=(a98*a5);
  a71=(a2*a104);
  a79=(a79-a71);
  a71=(a79*a17);
  a63=(a12*a71);
  a102=(a14*a63);
  a54=(a54+a102);
  a102=(a13+a13);
  a59=(a22*a5);
  a95=(a9*a104);
  a59=(a59-a95);
  a95=(a59*a17);
  a91=(a12*a95);
  a102=(a102*a91);
  a54=(a54-a102);
  a102=(a98*a5);
  a83=(a2*a104);
  a102=(a102-a83);
  a83=(a102*a17);
  a75=(a24*a83);
  a67=(a14*a75);
  a54=(a54+a67);
  a67=(a13+a13);
  a16=(a22*a5);
  a44=(a9*a104);
  a16=(a16-a44);
  a44=(a16*a17);
  a41=(a24*a44);
  a67=(a67*a41);
  a54=(a54-a67);
  a67=(a98*a5);
  a36=(a2*a104);
  a67=(a67-a36);
  a36=(a67*a17);
  a31=(a29*a36);
  a26=(a14*a31);
  a54=(a54+a26);
  a26=(a13+a13);
  a107=(a22*a5);
  a108=(a9*a104);
  a107=(a107-a108);
  a108=(a107*a17);
  a109=(a29*a108);
  a26=(a26*a109);
  a54=(a54-a26);
  a26=(a98*a5);
  a110=(a2*a104);
  a26=(a26-a110);
  a110=(a26*a17);
  a111=(a34*a110);
  a112=(a14*a111);
  a54=(a54+a112);
  a112=(a13+a13);
  a113=(a22*a5);
  a114=(a9*a104);
  a113=(a113-a114);
  a114=(a113*a17);
  a115=(a34*a114);
  a112=(a112*a115);
  a54=(a54-a112);
  a112=(a98*a5);
  a116=(a2*a104);
  a112=(a112-a116);
  a116=(a112*a17);
  a117=(a39*a116);
  a118=(a14*a117);
  a54=(a54+a118);
  a118=(a13+a13);
  a119=(a22*a5);
  a120=(a9*a104);
  a119=(a119-a120);
  a120=(a119*a17);
  a121=(a39*a120);
  a118=(a118*a121);
  a54=(a54-a118);
  a118=(a79*a21);
  a122=(a12*a118);
  a123=(a18*a122);
  a54=(a54+a123);
  a123=(a13+a13);
  a124=(a97*a5);
  a125=(a6*a104);
  a124=(a124-a125);
  a125=(a124*a21);
  a126=(a12*a125);
  a123=(a123*a126);
  a54=(a54-a123);
  a123=(a102*a21);
  a127=(a24*a123);
  a128=(a18*a127);
  a54=(a54+a128);
  a128=(a13+a13);
  a129=(a97*a5);
  a130=(a6*a104);
  a129=(a129-a130);
  a130=(a129*a21);
  a131=(a24*a130);
  a128=(a128*a131);
  a54=(a54-a128);
  a128=(a67*a21);
  a132=(a29*a128);
  a133=(a18*a132);
  a54=(a54+a133);
  a133=(a13+a13);
  a134=(a97*a5);
  a135=(a6*a104);
  a134=(a134-a135);
  a135=(a134*a21);
  a136=(a29*a135);
  a133=(a133*a136);
  a54=(a54-a133);
  a133=(a26*a21);
  a137=(a34*a133);
  a138=(a18*a137);
  a54=(a54+a138);
  a138=(a13+a13);
  a139=(a97*a5);
  a140=(a6*a104);
  a139=(a139-a140);
  a140=(a139*a21);
  a141=(a34*a140);
  a138=(a138*a141);
  a54=(a54-a138);
  a138=(a112*a21);
  a142=(a39*a138);
  a143=(a18*a142);
  a54=(a54+a143);
  a143=(a13+a13);
  a144=(a97*a5);
  a145=(a6*a104);
  a144=(a144-a145);
  a145=(a144*a21);
  a146=(a39*a145);
  a143=(a143*a146);
  a54=(a54-a143);
  a143=(a59*a23);
  a147=(a12*a143);
  a148=(a14*a147);
  a54=(a54+a148);
  a148=(a124*a23);
  a149=(a12*a148);
  a150=(a18*a149);
  a54=(a54+a150);
  a150=(a16*a23);
  a151=(a24*a150);
  a152=(a14*a151);
  a54=(a54+a152);
  a152=(a129*a23);
  a153=(a24*a152);
  a154=(a18*a153);
  a54=(a54+a154);
  a154=(a107*a23);
  a155=(a29*a154);
  a156=(a14*a155);
  a54=(a54+a156);
  a156=(a134*a23);
  a157=(a29*a156);
  a158=(a18*a157);
  a54=(a54+a158);
  a158=(a113*a23);
  a159=(a34*a158);
  a160=(a14*a159);
  a54=(a54+a160);
  a160=(a139*a23);
  a161=(a34*a160);
  a162=(a18*a161);
  a54=(a54+a162);
  a162=(a119*a23);
  a163=(a39*a162);
  a164=(a14*a163);
  a54=(a54+a164);
  a164=(a144*a23);
  a165=(a39*a164);
  a166=(a18*a165);
  a54=(a54+a166);
  a166=(a104*a50);
  a54=(a54+a166);
  a166=(a5*a101);
  a54=(a54-a166);
  a9=(a9*a99);
  a22=(a22*a51);
  a97=(a97*a57);
  a22=(a22+a97);
  a98=(a98*a50);
  a22=(a22+a98);
  a9=(a9-a22);
  a6=(a6*a100);
  a9=(a9+a6);
  a2=(a2*a101);
  a9=(a9+a2);
  a4=(a4*a9);
  a4=(a45*a4);
  a54=(a54+a4);
  a4=arg[1]? arg[1][0] : 0;
  a54=(a54+a4);
  if (res[0]!=0) res[0][9]=a54;
  a54=arg[0]? arg[0][12] : 0;
  a4=(a54*a87);
  a2=arg[1]? arg[1][15] : 0;
  a47=(a47*a2);
  a4=(a4-a47);
  a124=(a124*a17);
  a47=(a12*a124);
  a101=(a14*a47);
  a4=(a4+a101);
  a101=(a18+a18);
  a101=(a101*a91);
  a4=(a4-a101);
  a129=(a129*a17);
  a101=(a24*a129);
  a91=(a14*a101);
  a4=(a4+a91);
  a91=(a18+a18);
  a91=(a91*a41);
  a4=(a4-a91);
  a134=(a134*a17);
  a91=(a29*a134);
  a41=(a14*a91);
  a4=(a4+a41);
  a41=(a18+a18);
  a41=(a41*a109);
  a4=(a4-a41);
  a139=(a139*a17);
  a41=(a34*a139);
  a109=(a14*a41);
  a4=(a4+a109);
  a109=(a18+a18);
  a109=(a109*a115);
  a4=(a4-a109);
  a144=(a144*a17);
  a17=(a39*a144);
  a109=(a14*a17);
  a4=(a4+a109);
  a109=(a18+a18);
  a109=(a109*a121);
  a4=(a4-a109);
  a59=(a59*a21);
  a109=(a12*a59);
  a121=(a14*a109);
  a4=(a4+a121);
  a122=(a13*a122);
  a4=(a4+a122);
  a16=(a16*a21);
  a122=(a24*a16);
  a121=(a14*a122);
  a4=(a4+a121);
  a127=(a13*a127);
  a4=(a4+a127);
  a107=(a107*a21);
  a127=(a29*a107);
  a121=(a14*a127);
  a4=(a4+a121);
  a132=(a13*a132);
  a4=(a4+a132);
  a113=(a113*a21);
  a132=(a34*a113);
  a121=(a14*a132);
  a4=(a4+a121);
  a137=(a13*a137);
  a4=(a4+a137);
  a119=(a119*a21);
  a21=(a39*a119);
  a137=(a14*a21);
  a4=(a4+a137);
  a142=(a13*a142);
  a4=(a4+a142);
  a149=(a13*a149);
  a4=(a4+a149);
  a149=(a18+a18);
  a79=(a79*a23);
  a12=(a12*a79);
  a149=(a149*a12);
  a4=(a4-a149);
  a153=(a13*a153);
  a4=(a4+a153);
  a153=(a18+a18);
  a102=(a102*a23);
  a24=(a24*a102);
  a153=(a153*a24);
  a4=(a4-a153);
  a157=(a13*a157);
  a4=(a4+a157);
  a157=(a18+a18);
  a67=(a67*a23);
  a29=(a29*a67);
  a157=(a157*a29);
  a4=(a4-a157);
  a161=(a13*a161);
  a4=(a4+a161);
  a161=(a18+a18);
  a26=(a26*a23);
  a34=(a34*a26);
  a161=(a161*a34);
  a4=(a4-a161);
  a165=(a13*a165);
  a4=(a4+a165);
  a165=(a18+a18);
  a112=(a112*a23);
  a39=(a39*a112);
  a165=(a165*a39);
  a4=(a4-a165);
  a57=(a104*a57);
  a4=(a4+a57);
  a100=(a5*a100);
  a4=(a4-a100);
  a8=(a8*a9);
  a8=(a45*a8);
  a4=(a4+a8);
  a8=arg[1]? arg[1][1] : 0;
  a4=(a4+a8);
  if (res[0]!=0) res[0][10]=a4;
  a94=(a94*a2);
  a54=(a54*a1);
  a94=(a94-a54);
  a47=(a18*a47);
  a94=(a94+a47);
  a63=(a13*a63);
  a94=(a94+a63);
  a101=(a18*a101);
  a94=(a94+a101);
  a75=(a13*a75);
  a94=(a94+a75);
  a91=(a18*a91);
  a94=(a94+a91);
  a31=(a13*a31);
  a94=(a94+a31);
  a41=(a18*a41);
  a94=(a94+a41);
  a111=(a13*a111);
  a94=(a94+a111);
  a17=(a18*a17);
  a94=(a94+a17);
  a117=(a13*a117);
  a94=(a94+a117);
  a109=(a18*a109);
  a94=(a94+a109);
  a109=(a14+a14);
  a109=(a109*a126);
  a94=(a94-a109);
  a122=(a18*a122);
  a94=(a94+a122);
  a122=(a14+a14);
  a122=(a122*a131);
  a94=(a94-a122);
  a127=(a18*a127);
  a94=(a94+a127);
  a127=(a14+a14);
  a127=(a127*a136);
  a94=(a94-a127);
  a132=(a18*a132);
  a94=(a94+a132);
  a132=(a14+a14);
  a132=(a132*a141);
  a94=(a94-a132);
  a21=(a18*a21);
  a94=(a94+a21);
  a21=(a14+a14);
  a21=(a21*a146);
  a94=(a94-a21);
  a147=(a13*a147);
  a94=(a94+a147);
  a147=(a14+a14);
  a147=(a147*a12);
  a94=(a94-a147);
  a151=(a13*a151);
  a94=(a94+a151);
  a151=(a14+a14);
  a151=(a151*a24);
  a94=(a94-a151);
  a155=(a13*a155);
  a94=(a94+a155);
  a155=(a14+a14);
  a155=(a155*a29);
  a94=(a94-a155);
  a159=(a13*a159);
  a94=(a94+a159);
  a159=(a14+a14);
  a159=(a159*a34);
  a94=(a94-a159);
  a163=(a13*a163);
  a94=(a94+a163);
  a163=(a14+a14);
  a163=(a163*a39);
  a94=(a94-a163);
  a104=(a104*a51);
  a94=(a94+a104);
  a5=(a5*a99);
  a94=(a94-a5);
  a11=(a11*a9);
  a45=(a45*a11);
  a94=(a94+a45);
  a45=arg[1]? arg[1][2] : 0;
  a94=(a94+a45);
  if (res[0]!=0) res[0][11]=a94;
  a94=(a18*a87);
  a45=(a14*a1);
  a94=(a94-a45);
  if (res[0]!=0) res[0][12]=a94;
  a14=(a14*a2);
  a87=(a13*a87);
  a14=(a14-a87);
  if (res[0]!=0) res[0][13]=a14;
  a13=(a13*a1);
  a18=(a18*a2);
  a13=(a13-a18);
  if (res[0]!=0) res[0][14]=a13;
  a103=(a103*a52);
  a3=(a3*a96);
  a103=(a103+a3);
  a46=(a46*a9);
  a103=(a103+a46);
  if (res[0]!=0) res[0][15]=a103;
  a105=(a105*a52);
  a7=(a7*a96);
  a105=(a105+a7);
  a48=(a48*a9);
  a105=(a105+a48);
  if (res[0]!=0) res[0][16]=a105;
  a106=(a106*a52);
  a10=(a10*a96);
  a106=(a106+a10);
  a49=(a49*a9);
  a106=(a106+a49);
  if (res[0]!=0) res[0][17]=a106;
  a90=(a90*a144);
  a40=(a40*a116);
  a90=(a90+a40);
  a88=(a88*a120);
  a90=(a90-a88);
  a86=(a86*a119);
  a90=(a90+a86);
  a42=(a42*a138);
  a90=(a90+a42);
  a92=(a92*a145);
  a90=(a90-a92);
  a89=(a89*a162);
  a90=(a90+a89);
  a93=(a93*a164);
  a90=(a90+a93);
  a43=(a43*a112);
  a90=(a90-a43);
  if (res[0]!=0) res[0][18]=a90;
  a82=(a82*a139);
  a35=(a35*a110);
  a82=(a82+a35);
  a80=(a80*a114);
  a82=(a82-a80);
  a78=(a78*a113);
  a82=(a82+a78);
  a37=(a37*a133);
  a82=(a82+a37);
  a84=(a84*a140);
  a82=(a82-a84);
  a81=(a81*a158);
  a82=(a82+a81);
  a85=(a85*a160);
  a82=(a82+a85);
  a38=(a38*a26);
  a82=(a82-a38);
  if (res[0]!=0) res[0][19]=a82;
  a74=(a74*a134);
  a30=(a30*a36);
  a74=(a74+a30);
  a72=(a72*a108);
  a74=(a74-a72);
  a70=(a70*a107);
  a74=(a74+a70);
  a32=(a32*a128);
  a74=(a74+a32);
  a76=(a76*a135);
  a74=(a74-a76);
  a73=(a73*a154);
  a74=(a74+a73);
  a77=(a77*a156);
  a74=(a74+a77);
  a33=(a33*a67);
  a74=(a74-a33);
  if (res[0]!=0) res[0][20]=a74;
  if (res[0]!=0) res[0][21]=a0;
  a66=(a66*a129);
  a25=(a25*a83);
  a66=(a66+a25);
  a64=(a64*a44);
  a66=(a66-a64);
  a62=(a62*a16);
  a66=(a66+a62);
  a27=(a27*a123);
  a66=(a66+a27);
  a68=(a68*a130);
  a66=(a66-a68);
  a65=(a65*a150);
  a66=(a66+a65);
  a69=(a69*a152);
  a66=(a66+a69);
  a28=(a28*a102);
  a66=(a66-a28);
  if (res[0]!=0) res[0][22]=a66;
  a58=(a58*a124);
  a15=(a15*a71);
  a58=(a58+a15);
  a55=(a55*a95);
  a58=(a58-a55);
  a53=(a53*a59);
  a58=(a58+a53);
  a19=(a19*a118);
  a58=(a58+a19);
  a60=(a60*a125);
  a58=(a58-a60);
  a56=(a56*a143);
  a58=(a58+a56);
  a61=(a61*a148);
  a58=(a58+a61);
  a20=(a20*a79);
  a58=(a58-a20);
  if (res[0]!=0) res[0][23]=a58;
  if (res[0]!=0) res[0][24]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int multistage_straight_integrator1_expl_vde_adj(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int multistage_straight_integrator1_expl_vde_adj_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int multistage_straight_integrator1_expl_vde_adj_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void multistage_straight_integrator1_expl_vde_adj_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int multistage_straight_integrator1_expl_vde_adj_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void multistage_straight_integrator1_expl_vde_adj_release(int mem) {
}

CASADI_SYMBOL_EXPORT void multistage_straight_integrator1_expl_vde_adj_incref(void) {
}

CASADI_SYMBOL_EXPORT void multistage_straight_integrator1_expl_vde_adj_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int multistage_straight_integrator1_expl_vde_adj_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int multistage_straight_integrator1_expl_vde_adj_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real multistage_straight_integrator1_expl_vde_adj_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* multistage_straight_integrator1_expl_vde_adj_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* multistage_straight_integrator1_expl_vde_adj_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* multistage_straight_integrator1_expl_vde_adj_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* multistage_straight_integrator1_expl_vde_adj_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int multistage_straight_integrator1_expl_vde_adj_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
