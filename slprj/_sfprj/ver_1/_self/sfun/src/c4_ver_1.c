/* Include files */

#include "ver_1_sfun.h"
#include "c4_ver_1.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 38,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 271,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 124,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 417,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 26,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c4_j_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c4_k_emlrtMCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c4_l_emlrtMCI = { 23,/* lineNo */
  1,                                   /* colNo */
  "imreconstruct",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pName */
};

static emlrtMCInfo c4_m_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c4_n_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c4_o_emlrtMCI = { 83,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c4_p_emlrtMCI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtMCInfo c4_q_emlrtMCI = { 81,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c4_r_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c4_s_emlrtMCI = { 121,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 13, /* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 15,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 25,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 38,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 42,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 3,/* lineNo */
  "Detection object/MATLAB Function1", /* fcnName */
  "#ver_1:118"                         /* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 76,/* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 259,/* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 52,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 45,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 66,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 17,/* lineNo */
  "scalexpAlloc",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 20,/* lineNo */
  "scalexpAllocNoCheck",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 127,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 200,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 311,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 323,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 452,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 17,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 38,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 77,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 161,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 197,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 87,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 99,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 78,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 75,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 73,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 32,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 79,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 71,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_nb_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_ob_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_pb_emlrtRSI = { 57,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_qb_emlrtRSI = { 44,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_rb_emlrtRSI = { 23,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_sb_emlrtRSI = { 33,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c4_tb_emlrtRSI = { 51,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c4_ub_emlrtRSI = { 114,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c4_vb_emlrtRSI = { 149,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c4_wb_emlrtRSI = { 150,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c4_xb_emlrtRSI = { 153,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c4_yb_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c4_ac_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c4_bc_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c4_cc_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c4_dc_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_ec_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_fc_emlrtRSI = { 53,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_gc_emlrtRSI = { 57,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_hc_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_ic_emlrtRSI = { 182,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_jc_emlrtRSI = { 183,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_kc_emlrtRSI = { 184,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_lc_emlrtRSI = { 189,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_mc_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_nc_emlrtRSI = { 14,/* lineNo */
  "cumsum",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"/* pathName */
};

static emlrtRSInfo c4_oc_emlrtRSI = { 16,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c4_pc_emlrtRSI = { 32,/* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo c4_qc_emlrtRSI = { 99,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c4_rc_emlrtRSI = { 125,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c4_sc_emlrtRSI = { 290,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c4_tc_emlrtRSI = { 1293,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_uc_emlrtRSI = { 1468,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_vc_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c4_wc_emlrtRSI = { 1840,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_xc_emlrtRSI = { 295,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_yc_emlrtRSI = { 351,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ad_emlrtRSI = { 362,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_bd_emlrtRSI = { 698,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_cd_emlrtRSI = { 712,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_dd_emlrtRSI = { 713,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ed_emlrtRSI = { 715,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_fd_emlrtRSI = { 716,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_gd_emlrtRSI = { 722,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_hd_emlrtRSI = { 723,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_id_emlrtRSI = { 565,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_jd_emlrtRSI = { 581,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_kd_emlrtRSI = { 536,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ld_emlrtRSI = { 546,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_md_emlrtRSI = { 547,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_nd_emlrtRSI = { 770,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_od_emlrtRSI = { 772,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_pd_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_qd_emlrtRSI = { 22,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c4_rd_emlrtRSI = { 96,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c4_sd_emlrtRSI = { 15,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c4_td_emlrtRSI = { 46,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ud_emlrtRSI = { 92,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_vd_emlrtRSI = { 197,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_wd_emlrtRSI = { 288,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_xd_emlrtRSI = { 356,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_yd_emlrtRSI = { 438,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ae_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c4_be_emlrtRSI = { 44,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ce_emlrtRSI = { 79,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_de_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c4_ee_emlrtRSI = { 117,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c4_fe_emlrtRSI = { 311,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c4_ge_emlrtRSI = { 320,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c4_he_emlrtRSI = { 175,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ie_emlrtRSI = { 871,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_je_emlrtRSI = { 54,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c4_ke_emlrtRSI = { 103,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c4_le_emlrtRSI = { 185,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_me_emlrtRSI = { 867,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ne_emlrtRSI = { 194,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c4_oe_emlrtRSI = { 193,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c4_pe_emlrtRSI = { 190,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c4_qe_emlrtRSI = { 181,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c4_re_emlrtRSI = { 177,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c4_se_emlrtRSI = { 176,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c4_te_emlrtRSI = { 66,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c4_ue_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c4_ve_emlrtRSI = { 405,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c4_we_emlrtRSI = { 420,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c4_xe_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c4_ye_emlrtRSI = { 15,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c4_af_emlrtRSI = { 138,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c4_bf_emlrtRSI = { 198,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c4_cf_emlrtRSI = { 375,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_df_emlrtRSI = { 379,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ef_emlrtRSI = { 420,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ff_emlrtRSI = { 424,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_gf_emlrtRSI = { 49,/* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo c4_hf_emlrtRSI = { 437,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_if_emlrtRSI = { 441,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_jf_emlrtRSI = { 56,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c4_kf_emlrtRSI = { 58,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c4_lf_emlrtRSI = { 60,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c4_mf_emlrtRSI = { 145,/* lineNo */
  "bwlookup",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtRSInfo c4_nf_emlrtRSI = { 334,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_of_emlrtRSI = { 339,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_pf_emlrtRSI = { 458,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_qf_emlrtRSI = { 469,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_rf_emlrtRSI = { 470,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_sf_emlrtRSI = { 471,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_tf_emlrtRSI = { 472,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_uf_emlrtRSI = { 485,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_vf_emlrtRSI = { 486,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_wf_emlrtRSI = { 492,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_xf_emlrtRSI = { 493,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_yf_emlrtRSI = { 503,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ag_emlrtRSI = { 504,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_bg_emlrtRSI = { 510,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_cg_emlrtRSI = { 511,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_dg_emlrtRSI = { 606,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_eg_emlrtRSI = { 608,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_fg_emlrtRSI = { 635,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_gg_emlrtRSI = { 636,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_hg_emlrtRSI = { 637,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ig_emlrtRSI = { 640,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_jg_emlrtRSI = { 641,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_kg_emlrtRSI = { 642,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_lg_emlrtRSI = { 643,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_mg_emlrtRSI = { 644,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ng_emlrtRSI = { 649,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_og_emlrtRSI = { 653,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_pg_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c4_qg_emlrtRSI = { 80,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c4_rg_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo c4_sg_emlrtRSI = { 673,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_tg_emlrtRSI = { 675,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ug_emlrtRSI = { 798,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_vg_emlrtRSI = { 803,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_wg_emlrtRSI = { 814,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_xg_emlrtRSI = { 842,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_yg_emlrtRSI = { 855,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ah_emlrtRSI = { 859,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_bh_emlrtRSI = { 1049,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ch_emlrtRSI = { 1054,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_dh_emlrtRSI = { 955,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_eh_emlrtRSI = { 974,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_fh_emlrtRSI = { 976,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_gh_emlrtRSI = { 980,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_hh_emlrtRSI = { 1860,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ih_emlrtRSI = { 1861,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_jh_emlrtRSI = { 1874,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_kh_emlrtRSI = { 1875,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_lh_emlrtRSI = { 1880,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_mh_emlrtRSI = { 1881,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_nh_emlrtRSI = { 1121,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_oh_emlrtRSI = { 1135,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ph_emlrtRSI = { 1138,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_qh_emlrtRSI = { 1143,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_rh_emlrtRSI = { 1152,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_sh_emlrtRSI = { 1167,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_th_emlrtRSI = { 1171,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_uh_emlrtRSI = { 1182,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_vh_emlrtRSI = { 1187,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_wh_emlrtRSI = { 1199,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_xh_emlrtRSI = { 1204,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_yh_emlrtRSI = { 392,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ai_emlrtRSI = { 402,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_bi_emlrtRSI = { 408,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_ci_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c4_di_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c4_ei_emlrtRSI = { 158,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c4_fi_emlrtRSI = { 382,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c4_gi_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c4_hi_emlrtRSI = { 43,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c4_ii_emlrtRSI = { 17,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c4_ji_emlrtRSI = { 40,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ki_emlrtRSI = { 90,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 6,/* lineNo */
  24,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 6,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 10,/* lineNo */
  22,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 3,/* lineNo */
  5,                                   /* colNo */
  "Detection object/MATLAB Function1", /* fName */
  "#ver_1:118"                         /* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 13,/* lineNo */
  29,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 19,/* lineNo */
  33,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 20,/* lineNo */
  27,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 20,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 22,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_k_emlrtRTEI = { 25,/* lineNo */
  29,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_l_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c4_m_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c4_n_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c4_o_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_p_emlrtRTEI = { 42,/* lineNo */
  32,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_q_emlrtRTEI = { 42,/* lineNo */
  62,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_r_emlrtRTEI = { 42,/* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_s_emlrtRTEI = { 46,/* lineNo */
  13,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_t_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_u_emlrtRTEI = { 38,/* lineNo */
  10,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_v_emlrtRTEI = { 38,/* lineNo */
  19,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_w_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c4_x_emlrtRTEI = { 32,/* lineNo */
  25,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_y_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c4_ab_emlrtRTEI = { 1468,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_bb_emlrtRTEI = { 1840,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_cb_emlrtRTEI = { 291,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_db_emlrtRTEI = { 292,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_eb_emlrtRTEI = { 318,/* lineNo */
  30,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_fb_emlrtRTEI = { 17,/* lineNo */
  25,                                  /* colNo */
  "cumop",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pName */
};

static emlrtRTEInfo c4_gb_emlrtRTEI = { 295,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_hb_emlrtRTEI = { 298,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_ib_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_jb_emlrtRTEI = { 75,/* lineNo */
  2,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_kb_emlrtRTEI = { 1719,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_lb_emlrtRTEI = { 220,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_mb_emlrtRTEI = { 233,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_nb_emlrtRTEI = { 234,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_ob_emlrtRTEI = { 48,/* lineNo */
  27,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_pb_emlrtRTEI = { 49,/* lineNo */
  25,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_qb_emlrtRTEI = { 50,/* lineNo */
  28,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_rb_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_sb_emlrtRTEI = { 39,/* lineNo */
  35,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_tb_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_ub_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_vb_emlrtRTEI = { 69,/* lineNo */
  41,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_wb_emlrtRTEI = { 69,/* lineNo */
  31,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_xb_emlrtRTEI = { 70,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_yb_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_ac_emlrtRTEI = { 89,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_bc_emlrtRTEI = { 90,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_cc_emlrtRTEI = { 11,/* lineNo */
  6,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_dc_emlrtRTEI = { 11,/* lineNo */
  19,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_ec_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c4_fc_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_gc_emlrtRTEI = { 51,/* lineNo */
  57,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_hc_emlrtRTEI = { 51,/* lineNo */
  64,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c4_ic_emlrtRTEI = { 42,/* lineNo */
  42,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c4_jc_emlrtRTEI = { 51,/* lineNo */
  36,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c4_kc_emlrtRTEI = { 54,/* lineNo */
  44,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c4_lc_emlrtRTEI = { 57,/* lineNo */
  43,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c4_mc_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "useConstantDim",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pName */
};

static emlrtRTEInfo c4_nc_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_oc_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_pc_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_qc_emlrtRTEI = { 43,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_rc_emlrtRTEI = { 44,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_sc_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_tc_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c4_uc_emlrtRTEI = { 414,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_vc_emlrtRTEI = { 38,/* lineNo */
  32,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_wc_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_xc_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c4_yc_emlrtRTEI = { 127,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo c4_ad_emlrtRTEI = { 36,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_bd_emlrtRTEI = { 769,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_cd_emlrtRTEI = { 424,/* lineNo */
  34,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_dd_emlrtRTEI = { 770,/* lineNo */
  41,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_ed_emlrtRTEI = { 774,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_fd_emlrtRTEI = { 104,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_gd_emlrtRTEI = { 111,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_hd_emlrtRTEI = { 772,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_id_emlrtRTEI = { 770,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c4_jd_emlrtRTEI = { 99,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtECInfo c4_emlrtECI = { -1, /* nDims */
  42,                                  /* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c4_kd_emlrtRTEI = { 30,/* lineNo */
  20,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtECInfo c4_b_emlrtECI = { 2,/* nDims */
  20,                                  /* lineNo */
  18,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtECInfo c4_c_emlrtECI = { 2,/* nDims */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtBCInfo c4_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  31,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_emlrtDCI = { 31, /* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  31,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 32,/* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  1080,                                /* iLast */
  6,                                   /* lineNo */
  33,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 6,/* lineNo */
  33,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { 1,/* iFirst */
  1920,                                /* iLast */
  6,                                   /* lineNo */
  69,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 6,/* lineNo */
  69,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  9,                                   /* colNo */
  "Im_Depth_box",                      /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 10,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  49,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 31,/* lineNo */
  49,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  49,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 32,/* lineNo */
  49,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  25,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 33,/* lineNo */
  25,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  32,                                  /* colNo */
  "puntos_x",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 44,/* lineNo */
  32,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  51,                                  /* colNo */
  "puntos_y",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_j_emlrtDCI = { 44,/* lineNo */
  51,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { 1,/* iFirst */
  1080,                                /* iLast */
  46,                                  /* lineNo */
  37,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_k_emlrtDCI = { 46,/* lineNo */
  37,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { 1,/* iFirst */
  1920,                                /* iLast */
  46,                                  /* lineNo */
  73,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_l_emlrtDCI = { 46,/* lineNo */
  73,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  28,                                  /* colNo */
  "Im_Depth_box",                      /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_m_emlrtDCI = { 47,/* lineNo */
  28,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  604,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  614,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  623,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_n_emlrtDCI = { 84,/* lineNo */
  12,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  65,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1896,                                /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1898,                                /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_o_emlrtDCI = { 48,/* lineNo */
  33,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_eb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ib_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_p_emlrtDCI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_lb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ec_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_gc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_q_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_r_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_jc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_lc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_mc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_nc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_oc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_pc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_sc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_tc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_vc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_wc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_xc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_yc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ad_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_bd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_cd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  774,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_dd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ed_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  772,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_fd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  769,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_gd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  770,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_hd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c4_li_emlrtRSI = { 32,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c4_mi_emlrtRSI = { 46,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_ni_emlrtRSI = { 44,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_oi_emlrtRSI = { 43,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_pi_emlrtRSI = { 40,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_qi_emlrtRSI = { 30,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_ri_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_si_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_ti_emlrtRSI = { 55,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_ui_emlrtRSI = { 39,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c4_vi_emlrtRSI = { 424,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

/* Function Declarations */
static void initialize_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void initialize_params_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void enable_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void disable_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void c4_update_jit_animation_state_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance);
static void c4_do_animation_call_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance);
static void set_sim_state_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_st);
static void sf_gateway_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void mdl_start_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void mdl_terminate_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance);
static void initSimStructsc4_ver_1(SFc4_ver_1InstanceStruct *chartInstance);
static void c4_check_forloop_overflow_error(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp);
static void c4_imhist(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack *
                      c4_sp, c4_emxArray_real32_T *c4_varargin_1, real_T
                      c4_yout[256]);
static void c4_warning(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp);
static void c4_b_warning(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp);
static void c4_regionprops(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_varargin_1,
  c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *c4_outstats);
static void c4_bwconncomp(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_varargin_1,
  c4_s_vX9LV7M75v5ZNol5H5URkE *c4_CC);
static real_T c4_sum(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c4_sp, c4_emxArray_int32_T *c4_b_x);
static real_T c4_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T *c4_b_x, int32_T c4_vlen);
static real_T c4_sumColumnB4(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_int32_T *c4_b_x, int32_T c4_vstart);
static real_T c4_b_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T *c4_b_x, int32_T c4_vlen, int32_T
  c4_vstart);
static void c4_useConstantDim(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T *c4_varargin_2, int32_T c4_varargin_3,
  c4_emxArray_int32_T *c4_varargout_1);
static void c4_assertValidSizeArg(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_varargin_1);
static void c4_ind2sub_indexClass(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_siz[2], c4_emxArray_real_T *c4_ndx,
  c4_emxArray_int32_T *c4_varargout_1, c4_emxArray_int32_T *c4_varargout_2);
static void c4_ComputeCentroid(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_imageSize[2], c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c4_stats, c4_sHtk0WM4OMtyqkehwQYcq2 c4_statsAlreadyComputed,
  c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c4_b_stats, c4_sHtk0WM4OMtyqkehwQYcq2
  *c4_b_statsAlreadyComputed);
static real_T c4_c_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T *c4_b_x, int32_T c4_col, int32_T c4_vlen);
static real_T c4_b_sumColumnB4(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_real_T *c4_b_x, int32_T c4_col, int32_T c4_vstart);
static real_T c4_d_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T *c4_b_x, int32_T c4_col, int32_T c4_vlen,
  int32_T c4_vstart);
static void c4_power(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c4_sp, c4_emxArray_real_T *c4_a, c4_emxArray_real_T
                     *c4_b_y);
static void c4_indexShapeCheck(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, int32_T c4_matrixSize, int32_T c4_indexSize[2]);
static void c4_c_warning(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp);
static void c4_minimum(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, c4_emxArray_real_T *c4_b_x, real_T *c4_ex, int32_T *c4_idx);
static real_T c4_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance, const
  mxArray *c4_b_cx, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint8_T c4_c_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_b_is_active_c4_ver_1, const char_T *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_chart_data_browse_helper(SFc4_ver_1InstanceStruct *chartInstance,
  int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T *c4_isValueTooBig);
static const mxArray *c4_feval(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_b_feval(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_c_feval(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_d_feval(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_e_feval(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_f_feval(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_b_ComputeCentroid(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_imageSize[2], c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c4_stats, c4_sHtk0WM4OMtyqkehwQYcq2 *c4_statsAlreadyComputed);
static void c4_emxEnsureCapacity_real32_T(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real32_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_boolean_T(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_int32_T(SFc4_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real_T(SFc4_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real32_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real32_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_boolean_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_sPw6XcACqvsnFn0LPvB6yCC(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_sPw6XcACqvsnFn0LPvB6yC
  **c4_pEmxArray, int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_int32_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_real32_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_real32_T **c4_pEmxArray);
static void c4_emxFree_boolean_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_boolean_T **c4_pEmxArray);
static void c4_emxFree_sPw6XcACqvsnFn0LPvB6yCC(SFc4_ver_1InstanceStruct
  *chartInstance, c4_emxArray_sPw6XcACqvsnFn0LPvB6yC **c4_pEmxArray);
static void c4_emxFree_real_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_real_T **c4_pEmxArray);
static void c4_emxFree_int32_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_int32_T **c4_pEmxArray);
static void c4_emxEnsureCapacity_boolean_T1(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_sPw6XcACqvsnF(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_sPw6XcACqvsnFn0LPvB6yC
  *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFreeStruct_s_bxcgeNxEuVlgmMh(SFc4_ver_1InstanceStruct
  *chartInstance, c4_s_bxcgeNxEuVlgmMh5HwQaXB *c4_pStruct);
static void c4_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(SFc4_ver_1InstanceStruct
  *chartInstance, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c4_emxArray, int32_T
  c4_fromIndex, int32_T c4_toIndex);
static void c4_emxInitStruct_s_bxcgeNxEuVlgmMh(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_bxcgeNxEuVlgmMh5HwQaXB
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T1(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c4_emxArray, int32_T c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxEnsureCapacity_s_bxcgeNxEuVl(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyStruct_s_bxcgeNxEuVlgmMh(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_bxcgeNxEuVlgmMh5HwQaXB *c4_dst,
  const c4_s_bxcgeNxEuVlgmMh5HwQaXB *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyMatrix_real_T(SFc4_ver_1InstanceStruct *chartInstance,
  real_T c4_dst[2], const real_T c4_src[2]);
static void c4_emxCopyMatrix_real_T1(SFc4_ver_1InstanceStruct *chartInstance,
  real_T c4_dst[4], const real_T c4_src[4]);
static void c4_emxCopy_boolean_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_dst, c4_emxArray_boolean_T *
  const *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyMatrix_real_T2(SFc4_ver_1InstanceStruct *chartInstance,
  real_T c4_dst[16], const real_T c4_src[16]);
static void c4_emxCopy_real_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_dst, c4_emxArray_real_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopy_real_T1(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_dst, c4_emxArray_real_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real_T1(SFc4_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_s_vX9LV7M75v5ZNol(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_vX9LV7M75v5ZNol5H5URkE
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  **c4_pEmxArray, int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_boolean_T1(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFreeStruct_s_vX9LV7M75v5ZNol(SFc4_ver_1InstanceStruct
  *chartInstance, c4_s_vX9LV7M75v5ZNol5H5URkE *c4_pStruct);
static void c4_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(SFc4_ver_1InstanceStruct
  *chartInstance, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa **c4_pEmxArray);
static void c4_emxInitMatrix_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_10 c4_pMatrix[2], const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_10 *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxFreeMatrix_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, c4_cell_wrap_10 c4_pMatrix[2]);
static void c4_emxFreeStruct_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, c4_cell_wrap_10 *c4_pStruct);
static int32_T c4_div_nzp_s32(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_numerator, int32_T c4_denominator, int32_T c4_EMLOvCount_src_loc, uint32_T
  c4_ssid_src_loc, int32_T c4_offset_src_loc, int32_T c4_length_src_loc);
static int32_T c4_div_s32(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_numerator, int32_T c4_denominator, int32_T c4_EMLOvCount_src_loc, uint32_T
  c4_ssid_src_loc, int32_T c4_offset_src_loc, int32_T c4_length_src_loc);
static int32_T c4__s32_minus__(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_b, int32_T c4_c, int32_T c4_EMLOvCount_src_loc, uint32_T c4_ssid_src_loc,
  int32_T c4_offset_src_loc, int32_T c4_length_src_loc);
static int32_T c4__s32_add__(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_b, int32_T c4_c, int32_T c4_EMLOvCount_src_loc, uint32_T c4_ssid_src_loc,
  int32_T c4_offset_src_loc, int32_T c4_length_src_loc);
static int32_T c4__s32_s64_(SFc4_ver_1InstanceStruct *chartInstance, int64_T
  c4_b, int32_T c4_EMLOvCount_src_loc, uint32_T c4_ssid_src_loc, int32_T
  c4_offset_src_loc, int32_T c4_length_src_loc);
static void init_dsm_address_info(SFc4_ver_1InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc4_ver_1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c4_st, (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_ver_1 = 0U;
}

static void initialize_params_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c4_update_jit_animation_state_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_st;
  c4_st = NULL;
  c4_st = NULL;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_createcellmatrix(5, 1), false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", chartInstance->c4_cx, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c4_b_y, 0, c4_c_y);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", chartInstance->c4_cy, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c4_b_y, 1, c4_d_y);
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", chartInstance->c4_x, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c4_b_y, 2, c4_e_y);
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", chartInstance->c4_y, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c4_b_y, 3, c4_f_y);
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_ver_1, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_b_y, 4, c4_g_y);
  sf_mex_assign(&c4_st, c4_b_y, false);
  return c4_st;
}

static void set_sim_state_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_st)
{
  const mxArray *c4_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_cx = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "cx");
  *chartInstance->c4_cy = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 1)), "cy");
  *chartInstance->c4_x = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 2)), "x");
  *chartInstance->c4_y = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 3)), "y");
  chartInstance->c4_is_active_c4_ver_1 = c4_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 4)), "is_active_c4_ver_1");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void sf_gateway_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  static char_T c4_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  c4_emxArray_boolean_T *c4_BW;
  c4_emxArray_boolean_T *c4_b_BW;
  c4_emxArray_int32_T *c4_ii;
  c4_emxArray_int32_T *c4_varargout_4;
  c4_emxArray_real32_T *c4_Im_Depth_box;
  c4_emxArray_real32_T *c4_Immask;
  c4_emxArray_real32_T *c4_e_Im_Depth_box;
  c4_emxArray_real_T *c4_b_puntos_x;
  c4_emxArray_real_T *c4_b_puntos_y;
  c4_emxArray_real_T *c4_b_varargin_1;
  c4_emxArray_real_T *c4_puntos_x;
  c4_emxArray_real_T *c4_puntos_y;
  c4_emxArray_real_T *c4_r;
  c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *c4_stats;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_i_st;
  emlrtStack c4_j_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  real_T c4_counts[256];
  real_T c4_varargin_1[254];
  real_T c4_centroide[2];
  real_T c4_siz[2];
  real_T c4_Centroid_x;
  real_T c4_Centroid_y;
  real_T c4_acum_area;
  real_T c4_b_centroide;
  real_T c4_b_cx;
  real_T c4_b_cy;
  real_T c4_b_ex;
  real_T c4_b_posicion;
  real_T c4_b_stat;
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_c_centroide;
  real_T c4_c_cx;
  real_T c4_c_cy;
  real_T c4_c_posicion;
  real_T c4_c_x;
  real_T c4_c_y;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d5;
  real_T c4_d_posicion;
  real_T c4_d_x;
  real_T c4_e_posicion;
  real_T c4_e_x;
  real_T c4_ex;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_i_x;
  real_T c4_posicion;
  int32_T c4_iv[2];
  int32_T c4_iv1[2];
  int32_T c4_iv2[2];
  int32_T c4_iv3[2];
  int32_T c4_iv4[2];
  int32_T c4_b_Im_Depth_box;
  int32_T c4_b_i;
  int32_T c4_b_idx;
  int32_T c4_b_ii;
  int32_T c4_b_iindx;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_nx;
  int32_T c4_c_Im_Depth_box;
  int32_T c4_c_b;
  int32_T c4_c_i;
  int32_T c4_c_idx;
  int32_T c4_c_ii;
  int32_T c4_c_k;
  int32_T c4_c_loop_ub;
  int32_T c4_d_Im_Depth_box;
  int32_T c4_d_b;
  int32_T c4_d_idx;
  int32_T c4_d_loop_ub;
  int32_T c4_e_idx;
  int32_T c4_e_loop_ub;
  int32_T c4_end;
  int32_T c4_f_idx;
  int32_T c4_f_loop_ub;
  int32_T c4_first;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i7;
  int32_T c4_i70;
  int32_T c4_i71;
  int32_T c4_i72;
  int32_T c4_i73;
  int32_T c4_i74;
  int32_T c4_i75;
  int32_T c4_i76;
  int32_T c4_i77;
  int32_T c4_i78;
  int32_T c4_i79;
  int32_T c4_i8;
  int32_T c4_i80;
  int32_T c4_i81;
  int32_T c4_i82;
  int32_T c4_i83;
  int32_T c4_i84;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_idx;
  int32_T c4_iindx;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_k_loop_ub;
  int32_T c4_l_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_nx;
  int32_T c4_o_loop_ub;
  int32_T c4_p_loop_ub;
  int32_T c4_partialTrueCount;
  int32_T c4_q_loop_ub;
  int32_T c4_r_loop_ub;
  int32_T c4_s_loop_ub;
  int32_T c4_stat;
  int32_T c4_t_loop_ub;
  int32_T c4_trueCount;
  real32_T c4_b_bboxes[4];
  real32_T c4_c_bboxes;
  real32_T c4_d_bboxes;
  real32_T c4_e_bboxes;
  real32_T c4_f_bboxes;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_overflow;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_b;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_f_b;
  boolean_T c4_f_p;
  boolean_T c4_g_b;
  boolean_T c4_guard1 = false;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_i_st.prev = &c4_h_st;
  c4_i_st.tls = c4_h_st.tls;
  c4_j_st.prev = &c4_i_st;
  c4_j_st.tls = c4_i_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 4; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, (real_T)
                      (*chartInstance->c4_bboxes)[c4_i]);
  }

  for (c4_i1 = 0; c4_i1 < 2073600; c4_i1++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_b_Im_Depth)[c4_i1]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_f_emlrtRSI;
  for (c4_i2 = 0; c4_i2 < 4; c4_i2++) {
    c4_b_bboxes[c4_i2] = (*chartInstance->c4_bboxes)[c4_i2];
  }

  for (c4_i3 = 0; c4_i3 < 2073600; c4_i3++) {
    chartInstance->c4_Im_Depth[c4_i3] = (*chartInstance->c4_b_Im_Depth)[c4_i3];
  }

  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 14U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 14U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c4_covrtInstance,
        14U, 0U, 0U, (real_T)c4_b_bboxes[2], 0.0, -1, 4U, c4_b_bboxes[2] > 0.0F)))
  {
    c4_emxInit_real32_T(chartInstance, &c4_b_st, &c4_Im_Depth_box, 2,
                        &c4_b_emlrtRTEI);
    c4_c_bboxes = c4_b_bboxes[1];
    c4_d_bboxes = c4_b_bboxes[0];
    c4_i4 = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1];
    c4_Im_Depth_box->size[0] = (int32_T)muSingleScalarFloor(c4_b_bboxes[3]) + 1;
    c4_Im_Depth_box->size[1] = (int32_T)muSingleScalarFloor(c4_b_bboxes[2]) + 1;
    c4_emxEnsureCapacity_real32_T(chartInstance, &c4_b_st, c4_Im_Depth_box,
      c4_i4, &c4_emlrtRTEI);
    c4_loop_ub = (int32_T)muSingleScalarFloor(c4_b_bboxes[2]);
    for (c4_i5 = 0; c4_i5 <= c4_loop_ub; c4_i5++) {
      c4_b_loop_ub = (int32_T)muSingleScalarFloor(c4_b_bboxes[3]);
      for (c4_i8 = 0; c4_i8 <= c4_b_loop_ub; c4_i8++) {
        c4_d = c4_c_bboxes + (real32_T)c4_i8;
        if (c4_d != (real_T)(int32_T)muDoubleScalarFloor(c4_d)) {
          emlrtIntegerCheckR2012b(c4_d, &c4_c_emlrtDCI, &c4_b_st);
        }

        c4_i11 = (int32_T)(real32_T)c4_d;
        if ((c4_i11 < 1) || (c4_i11 > 1080)) {
          emlrtDynamicBoundsCheckR2012b(c4_i11, 1, 1080, &c4_c_emlrtBCI,
            &c4_b_st);
        }

        c4_d1 = c4_d_bboxes + (real32_T)c4_i5;
        if (c4_d1 != (real_T)(int32_T)muDoubleScalarFloor(c4_d1)) {
          emlrtIntegerCheckR2012b(c4_d1, &c4_d_emlrtDCI, &c4_b_st);
        }

        c4_i13 = (int32_T)(real32_T)c4_d1;
        if ((c4_i13 < 1) || (c4_i13 > 1920)) {
          emlrtDynamicBoundsCheckR2012b(c4_i13, 1, 1920, &c4_d_emlrtBCI,
            &c4_b_st);
        }

        c4_Im_Depth_box->data[c4_i8 + c4_Im_Depth_box->size[0] * c4_i5] =
          chartInstance->c4_Im_Depth[((int32_T)(real32_T)c4_i11 + 1080 *
          ((int32_T)(real32_T)c4_i13 - 1)) - 1];
      }
    }

    c4_i6 = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1];
    c4_i7 = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, &c4_b_st, c4_Im_Depth_box,
      c4_i7, &c4_b_emlrtRTEI);
    c4_i9 = c4_i6;
    c4_c_loop_ub = c4_i9 - 1;
    for (c4_i10 = 0; c4_i10 <= c4_c_loop_ub; c4_i10++) {
      c4_Im_Depth_box->data[c4_i10] /= 5.0F;
    }

    c4_emxInit_boolean_T(chartInstance, &c4_b_st, &c4_BW, 2, &c4_j_emlrtRTEI);
    c4_i12 = c4_BW->size[0] * c4_BW->size[1];
    c4_BW->size[0] = c4_Im_Depth_box->size[0];
    c4_BW->size[1] = c4_Im_Depth_box->size[1];
    c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_b_st, c4_BW, c4_i12,
      &c4_c_emlrtRTEI);
    c4_d_loop_ub = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1] - 1;
    for (c4_i14 = 0; c4_i14 <= c4_d_loop_ub; c4_i14++) {
      c4_BW->data[c4_i14] = muSingleScalarIsNaN(c4_Im_Depth_box->data[c4_i14]);
    }

    c4_end = c4__s32_s64_(chartInstance, (int64_T)c4_BW->size[0] * (int64_T)
                          c4_BW->size[1], 0, 1U, 53, 52);
    c4_trueCount = 0;
    c4_b_i = 0;
    while (c4_b_i <= c4__s32_minus__(chartInstance, c4_end, 1, 0, 1U, 53, 52)) {
      if (c4_BW->data[c4_b_i]) {
        c4_trueCount = c4__s32_add__(chartInstance, c4_trueCount, 1, 0, 1U, 53,
          52);
      }

      c4_b_i = c4__s32_add__(chartInstance, c4_b_i, 1, 0, 1U, 53, 52);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c4_emxInit_int32_T(chartInstance, &c4_b_st, &c4_ii, 1, &c4_w_emlrtRTEI);
    c4_i15 = c4_ii->size[0];
    c4_ii->size[0] = c4_trueCount;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_b_st, c4_ii, c4_i15,
      &c4_d_emlrtRTEI);
    c4_partialTrueCount = 0;
    c4_c_i = 0;
    while (c4_c_i <= c4__s32_minus__(chartInstance, c4_end, 1, 0, 1U, 53, 52)) {
      if (c4_BW->data[c4_c_i]) {
        c4_ii->data[c4_partialTrueCount] = c4__s32_add__(chartInstance, c4_c_i,
          1, 0, 1U, 53, 52);
        c4_partialTrueCount = c4__s32_add__(chartInstance, c4_partialTrueCount,
          1, 0, 1U, 53, 52);
      }

      c4_c_i = c4__s32_add__(chartInstance, c4_c_i, 1, 0, 1U, 53, 52);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c4_i16 = c4_ii->size[0];
    c4_b_Im_Depth_box = c4_Im_Depth_box->size[0];
    c4_c_Im_Depth_box = c4_Im_Depth_box->size[1];
    c4_d_Im_Depth_box = c4__s32_s64_(chartInstance, (int64_T)c4_b_Im_Depth_box *
      (int64_T)c4_c_Im_Depth_box, 0, 1U, 53, 52);
    c4_e_loop_ub = c4_i16 - 1;
    for (c4_i17 = 0; c4_i17 <= c4_e_loop_ub; c4_i17++) {
      c4_d2 = (real_T)c4_ii->data[c4_i17];
      if (c4_d2 != (real_T)(int32_T)muDoubleScalarFloor(c4_d2)) {
        emlrtIntegerCheckR2012b(c4_d2, &c4_e_emlrtDCI, &c4_b_st);
      }

      c4_i19 = (int32_T)muDoubleScalarFloor(c4_d2);
      if ((c4_i19 < 1) || (c4_i19 > c4_d_Im_Depth_box)) {
        emlrtDynamicBoundsCheckR2012b(c4_i19, 1, c4_d_Im_Depth_box,
          &c4_e_emlrtBCI, &c4_b_st);
      }

      c4_Im_Depth_box->data[c4_i19 - 1] = 0.0F;
    }

    c4_emxInit_real32_T(chartInstance, &c4_b_st, &c4_e_Im_Depth_box, 2,
                        &c4_e_emlrtRTEI);
    c4_i18 = c4_e_Im_Depth_box->size[0] * c4_e_Im_Depth_box->size[1];
    c4_e_Im_Depth_box->size[0] = c4_Im_Depth_box->size[0];
    c4_e_Im_Depth_box->size[1] = c4_Im_Depth_box->size[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, &c4_b_st, c4_e_Im_Depth_box,
      c4_i18, &c4_e_emlrtRTEI);
    c4_f_loop_ub = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1] - 1;
    for (c4_i20 = 0; c4_i20 <= c4_f_loop_ub; c4_i20++) {
      c4_e_Im_Depth_box->data[c4_i20] = c4_Im_Depth_box->data[c4_i20];
    }

    c4_c_st.site = &c4_emlrtRSI;
    c4_imhist(chartInstance, &c4_c_st, c4_e_Im_Depth_box, c4_counts);
    c4_c_st.site = &c4_b_emlrtRSI;
    c4_emxFree_real32_T(chartInstance, &c4_e_Im_Depth_box);
    for (c4_i21 = 0; c4_i21 < 254; c4_i21++) {
      c4_varargin_1[c4_i21] = c4_counts[c4_i21 + 1];
    }

    c4_d_st.site = &c4_x_emlrtRSI;
    c4_e_st.site = &c4_y_emlrtRSI;
    c4_f_st.site = &c4_ab_emlrtRSI;
    c4_g_st.site = &c4_bb_emlrtRSI;
    c4_d_x = c4_varargin_1[0];
    c4_e_x = c4_d_x;
    c4_b = muDoubleScalarIsNaN(c4_e_x);
    c4_p = !c4_b;
    if (c4_p) {
      c4_idx = 1;
    } else {
      c4_idx = 0;
      c4_k = 2;
      c4_exitg1 = false;
      while ((!c4_exitg1) && (c4_k < 255)) {
        c4_f_x = c4_varargin_1[c4_k - 1];
        c4_g_x = c4_f_x;
        c4_b_b = muDoubleScalarIsNaN(c4_g_x);
        c4_b_p = !c4_b_b;
        if (c4_b_p) {
          c4_idx = c4_k;
          c4_exitg1 = true;
        } else {
          c4_k++;
        }
      }
    }

    if (c4_idx == 0) {
      c4_idx = 1;
    } else {
      c4_h_st.site = &c4_cb_emlrtRSI;
      c4_first = c4_idx;
      c4_ex = c4_varargin_1[c4_first - 1];
      c4_c_idx = c4_first;
      c4_i22 = c4_first;
      c4_i_st.site = &c4_db_emlrtRSI;
      c4_overflow = false;
      if (c4_overflow) {
        c4_j_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_j_st);
      }

      for (c4_b_k = c4_i22 + 1; c4_b_k < 255; c4_b_k++) {
        if (c4_ex < c4_varargin_1[c4_b_k - 1]) {
          c4_ex = c4_varargin_1[c4_b_k - 1];
          c4_c_idx = c4_b_k;
        }
      }

      c4_idx = c4_c_idx;
    }

    c4_b_idx = c4_idx;
    c4_d_idx = c4_b_idx;
    c4_iindx = c4_d_idx;
    c4_posicion = (real_T)c4_iindx;
    c4_b_posicion = c4_posicion;
    c4_b_posicion /= 255.0;
    c4_i23 = c4_BW->size[0] * c4_BW->size[1];
    c4_BW->size[0] = c4_Im_Depth_box->size[0];
    c4_BW->size[1] = c4_Im_Depth_box->size[1];
    c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_b_st, c4_BW, c4_i23,
      &c4_f_emlrtRTEI);
    c4_c_posicion = c4_b_posicion + 0.01;
    c4_g_loop_ub = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1] - 1;
    for (c4_i24 = 0; c4_i24 <= c4_g_loop_ub; c4_i24++) {
      c4_BW->data[c4_i24] = ((real_T)c4_Im_Depth_box->data[c4_i24] <
        c4_c_posicion);
    }

    c4_emxInit_real32_T(chartInstance, &c4_b_st, &c4_Immask, 2, &c4_g_emlrtRTEI);
    for (c4_i25 = 0; c4_i25 < 2; c4_i25++) {
      c4_iv[c4_i25] = (*(int32_T (*)[2])c4_Im_Depth_box->size)[c4_i25];
    }

    for (c4_i26 = 0; c4_i26 < 2; c4_i26++) {
      c4_iv1[c4_i26] = (*(int32_T (*)[2])c4_BW->size)[c4_i26];
    }

    emlrtSizeEqCheckNDR2012b(&c4_iv[0], &c4_iv1[0], &c4_c_emlrtECI, &c4_b_st);
    c4_i27 = c4_Immask->size[0] * c4_Immask->size[1];
    c4_Immask->size[0] = c4_Im_Depth_box->size[0];
    c4_Immask->size[1] = c4_Im_Depth_box->size[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, &c4_b_st, c4_Immask, c4_i27,
      &c4_g_emlrtRTEI);
    c4_h_loop_ub = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1] - 1;
    for (c4_i28 = 0; c4_i28 <= c4_h_loop_ub; c4_i28++) {
      c4_Immask->data[c4_i28] = c4_Im_Depth_box->data[c4_i28] * (real32_T)
        c4_BW->data[c4_i28];
    }

    c4_i29 = c4_BW->size[0] * c4_BW->size[1];
    c4_BW->size[0] = c4_Immask->size[0];
    c4_BW->size[1] = c4_Immask->size[1];
    c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_b_st, c4_BW, c4_i29,
      &c4_h_emlrtRTEI);
    c4_d_posicion = c4_b_posicion - 0.01;
    c4_i_loop_ub = c4_Immask->size[0] * c4_Immask->size[1] - 1;
    for (c4_i30 = 0; c4_i30 <= c4_i_loop_ub; c4_i30++) {
      c4_BW->data[c4_i30] = ((real_T)c4_Immask->data[c4_i30] > c4_d_posicion);
    }

    for (c4_i31 = 0; c4_i31 < 2; c4_i31++) {
      c4_iv2[c4_i31] = (*(int32_T (*)[2])c4_Immask->size)[c4_i31];
    }

    for (c4_i32 = 0; c4_i32 < 2; c4_i32++) {
      c4_iv3[c4_i32] = (*(int32_T (*)[2])c4_BW->size)[c4_i32];
    }

    emlrtSizeEqCheckNDR2012b(&c4_iv2[0], &c4_iv3[0], &c4_b_emlrtECI, &c4_b_st);
    c4_i33 = c4_Immask->size[0] * c4_Immask->size[1];
    c4_i34 = c4_Immask->size[0] * c4_Immask->size[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, &c4_b_st, c4_Immask, c4_i34,
      &c4_i_emlrtRTEI);
    c4_i35 = c4_i33;
    c4_j_loop_ub = c4_i35 - 1;
    for (c4_i36 = 0; c4_i36 <= c4_j_loop_ub; c4_i36++) {
      c4_Immask->data[c4_i36] *= (real32_T)c4_BW->data[c4_i36];
    }

    c4_i37 = c4_BW->size[0] * c4_BW->size[1];
    c4_BW->size[0] = c4_Immask->size[0];
    c4_BW->size[1] = c4_Immask->size[1];
    c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_b_st, c4_BW, c4_i37,
      &c4_j_emlrtRTEI);
    c4_k_loop_ub = c4_Immask->size[0] * c4_Immask->size[1] - 1;
    for (c4_i38 = 0; c4_i38 <= c4_k_loop_ub; c4_i38++) {
      c4_BW->data[c4_i38] = (c4_Immask->data[c4_i38] > 0.0F);
    }

    c4_emxFree_real32_T(chartInstance, &c4_Immask);
    c4_emxInit_boolean_T(chartInstance, &c4_b_st, &c4_b_BW, 2, &c4_k_emlrtRTEI);
    c4_i39 = c4_b_BW->size[0] * c4_b_BW->size[1];
    c4_b_BW->size[0] = c4_BW->size[0];
    c4_b_BW->size[1] = c4_BW->size[1];
    c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_b_st, c4_b_BW, c4_i39,
      &c4_k_emlrtRTEI);
    c4_l_loop_ub = c4_BW->size[0] * c4_BW->size[1] - 1;
    for (c4_i40 = 0; c4_i40 <= c4_l_loop_ub; c4_i40++) {
      c4_b_BW->data[c4_i40] = c4_BW->data[c4_i40];
    }

    c4_emxInit_sPw6XcACqvsnFn0LPvB6yCC(chartInstance, &c4_b_st, &c4_stats, 1,
      &c4_t_emlrtRTEI);
    c4_c_st.site = &c4_c_emlrtRSI;
    c4_regionprops(chartInstance, &c4_c_st, c4_b_BW, c4_stats);
    c4_Centroid_x = 0.0;
    c4_Centroid_y = 0.0;
    c4_acum_area = 0.0;
    c4_d3 = (real_T)c4_stats->size[0];
    c4_i41 = (int32_T)c4_d3;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c4_d3, mxDOUBLE_CLASS, c4_i41,
      &c4_kd_emlrtRTEI, &c4_b_st);
    c4_stat = 0;
    c4_emxFree_boolean_T(chartInstance, &c4_b_BW);
    while (c4_stat <= c4_i41 - 1) {
      c4_b_stat = 1.0 + (real_T)c4_stat;
      covrtEmlForEval(chartInstance->c4_covrtInstance, 14U, 0, 0, 1);
      c4_i42 = c4_stats->size[0];
      if (c4_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c4_b_stat)) {
        emlrtIntegerCheckR2012b(c4_b_stat, &c4_emlrtDCI, &c4_b_st);
      }

      c4_i43 = (int32_T)c4_b_stat;
      if ((c4_i43 < 1) || (c4_i43 > c4_i42)) {
        emlrtDynamicBoundsCheckR2012b(c4_i43, 1, c4_i42, &c4_emlrtBCI, &c4_b_st);
      }

      c4_i44 = c4_i43 - 1;
      c4_i45 = c4_stats->size[0];
      if (c4_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c4_b_stat)) {
        emlrtIntegerCheckR2012b(c4_b_stat, &c4_f_emlrtDCI, &c4_b_st);
      }

      c4_i47 = (int32_T)c4_b_stat;
      if ((c4_i47 < 1) || (c4_i47 > c4_i45)) {
        emlrtDynamicBoundsCheckR2012b(c4_i47, 1, c4_i45, &c4_f_emlrtBCI,
          &c4_b_st);
      }

      c4_Centroid_x += c4_stats->data[c4_i44].Centroid[0] * c4_stats->
        data[c4_i47 - 1].Area;
      c4_i48 = c4_stats->size[0];
      if (c4_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c4_b_stat)) {
        emlrtIntegerCheckR2012b(c4_b_stat, &c4_b_emlrtDCI, &c4_b_st);
      }

      c4_i49 = (int32_T)c4_b_stat;
      if ((c4_i49 < 1) || (c4_i49 > c4_i48)) {
        emlrtDynamicBoundsCheckR2012b(c4_i49, 1, c4_i48, &c4_b_emlrtBCI,
          &c4_b_st);
      }

      c4_i50 = c4_i49 - 1;
      c4_i51 = c4_stats->size[0];
      if (c4_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c4_b_stat)) {
        emlrtIntegerCheckR2012b(c4_b_stat, &c4_g_emlrtDCI, &c4_b_st);
      }

      c4_i52 = (int32_T)c4_b_stat;
      if ((c4_i52 < 1) || (c4_i52 > c4_i51)) {
        emlrtDynamicBoundsCheckR2012b(c4_i52, 1, c4_i51, &c4_g_emlrtBCI,
          &c4_b_st);
      }

      c4_Centroid_y += c4_stats->data[c4_i50].Centroid[1] * c4_stats->
        data[c4_i52 - 1].Area;
      c4_i53 = c4_stats->size[0];
      if (c4_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c4_b_stat)) {
        emlrtIntegerCheckR2012b(c4_b_stat, &c4_h_emlrtDCI, &c4_b_st);
      }

      c4_i55 = (int32_T)c4_b_stat;
      if ((c4_i55 < 1) || (c4_i55 > c4_i53)) {
        emlrtDynamicBoundsCheckR2012b(c4_i55, 1, c4_i53, &c4_h_emlrtBCI,
          &c4_b_st);
      }

      c4_acum_area += c4_stats->data[c4_i55 - 1].Area;
      c4_stat++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c4_emxFree_sPw6XcACqvsnFn0LPvB6yCC(chartInstance, &c4_stats);
    c4_emxInit_real_T(chartInstance, &c4_b_st, &c4_puntos_y, 1, &c4_u_emlrtRTEI);
    covrtEmlForEval(chartInstance->c4_covrtInstance, 14U, 0, 0, 0);
    c4_centroide[0] = c4_Centroid_x / c4_acum_area;
    c4_centroide[1] = c4_Centroid_y / c4_acum_area;
    c4_c_st.site = &c4_d_emlrtRSI;
    c4_d_st.site = &c4_ci_emlrtRSI;
    c4_nx = c4_BW->size[0] * c4_BW->size[1];
    c4_e_st.site = &c4_di_emlrtRSI;
    c4_c_k = c4_nx;
    c4_b_nx = c4_nx;
    c4_e_idx = 0;
    c4_i46 = c4_ii->size[0];
    c4_ii->size[0] = c4_c_k;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_e_st, c4_ii, c4_i46,
      &c4_l_emlrtRTEI);
    c4_f_st.site = &c4_fi_emlrtRSI;
    c4_c_b = c4_b_nx;
    c4_d_b = c4_c_b;
    if (1 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_g_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_g_st);
    }

    c4_b_ii = 1;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_b_ii - 1 <= c4_b_nx - 1)) {
      c4_c_ii = c4_b_ii;
      if (c4_BW->data[c4_c_ii - 1]) {
        c4_e_idx++;
        c4_ii->data[c4_e_idx - 1] = c4_c_ii;
        if (c4_e_idx >= c4_c_k) {
          c4_exitg1 = true;
        } else {
          c4_b_ii++;
        }
      } else {
        c4_b_ii++;
      }
    }

    if (!(c4_e_idx <= c4_c_k)) {
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c4_e_st, &c4_r_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                  sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_e_st, NULL, "message", 1U, 1U, 14, c4_e_y)));
    }

    if (c4_c_k == 1) {
      if (c4_e_idx == 0) {
        c4_ii->size[0] = 0;
      }
    } else {
      c4_e_b = (1 > c4_e_idx);
      if (c4_e_b) {
        c4_i54 = 0;
      } else {
        c4_i54 = c4_e_idx;
      }

      c4_iv4[0] = 1;
      c4_iv4[1] = c4_i54;
      c4_f_st.site = &c4_gi_emlrtRSI;
      c4_indexShapeCheck(chartInstance, &c4_f_st, c4_ii->size[0], c4_iv4);
      c4_i56 = c4_ii->size[0];
      c4_ii->size[0] = c4_i54;
      c4_emxEnsureCapacity_int32_T(chartInstance, &c4_e_st, c4_ii, c4_i56,
        &c4_m_emlrtRTEI);
    }

    if ((real_T)c4_BW->size[0] == 1.0) {
      c4_c_p = true;
    } else {
      c4_c_p = false;
    }

    c4_d_p = c4_c_p;
    if (c4_d_p) {
      if ((real_T)c4_ii->size[0] == 1.0) {
        c4_e_p = true;
      } else {
        c4_e_p = false;
      }

      c4_f_p = c4_e_p;
      if ((!c4_f_p) && ((real_T)c4_BW->size[1] >= 2.0)) {
        c4_e_st.site = &c4_ei_emlrtRSI;
        c4_c_warning(chartInstance, &c4_e_st);
      }
    }

    c4_emxFree_boolean_T(chartInstance, &c4_BW);
    c4_i57 = c4_puntos_y->size[0];
    c4_puntos_y->size[0] = c4_ii->size[0];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_puntos_y, c4_i57,
      &c4_n_emlrtRTEI);
    c4_m_loop_ub = c4_ii->size[0] - 1;
    for (c4_i58 = 0; c4_i58 <= c4_m_loop_ub; c4_i58++) {
      c4_puntos_y->data[c4_i58] = (real_T)c4_ii->data[c4_i58];
    }

    c4_c_st.site = &c4_d_emlrtRSI;
    for (c4_i59 = 0; c4_i59 < 2; c4_i59++) {
      c4_siz[c4_i59] = (real_T)c4_Im_Depth_box->size[c4_i59];
    }

    c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_varargout_4, 1,
                       (emlrtRTEInfo *)NULL);
    c4_d_st.site = &c4_pd_emlrtRSI;
    c4_ind2sub_indexClass(chartInstance, &c4_d_st, c4_siz, c4_puntos_y, c4_ii,
                          c4_varargout_4);
    c4_i60 = c4_puntos_y->size[0];
    c4_puntos_y->size[0] = c4_ii->size[0];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_puntos_y, c4_i60,
      &c4_o_emlrtRTEI);
    c4_n_loop_ub = c4_ii->size[0] - 1;
    for (c4_i61 = 0; c4_i61 <= c4_n_loop_ub; c4_i61++) {
      c4_puntos_y->data[c4_i61] = (real_T)c4_ii->data[c4_i61];
    }

    c4_emxFree_int32_T(chartInstance, &c4_ii);
    c4_emxInit_real_T(chartInstance, &c4_c_st, &c4_puntos_x, 1, &c4_v_emlrtRTEI);
    c4_i62 = c4_puntos_x->size[0];
    c4_puntos_x->size[0] = c4_varargout_4->size[0];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_puntos_x, c4_i62,
      &c4_o_emlrtRTEI);
    c4_o_loop_ub = c4_varargout_4->size[0] - 1;
    for (c4_i63 = 0; c4_i63 <= c4_o_loop_ub; c4_i63++) {
      c4_puntos_x->data[c4_i63] = (real_T)c4_varargout_4->data[c4_i63];
    }

    c4_emxFree_int32_T(chartInstance, &c4_varargout_4);
    c4_h_x = c4_centroide[0];
    c4_f_b = muDoubleScalarIsNaN(c4_h_x);
    c4_emxInit_real_T(chartInstance, &c4_b_st, &c4_r, 1, (emlrtRTEInfo *)NULL);
    c4_emxInit_real_T(chartInstance, &c4_b_st, &c4_b_varargin_1, 1,
                      &c4_r_emlrtRTEI);
    c4_emxInit_real_T(chartInstance, &c4_b_st, &c4_b_puntos_x, 1,
                      &c4_p_emlrtRTEI);
    c4_emxInit_real_T(chartInstance, &c4_b_st, &c4_b_puntos_y, 1,
                      &c4_q_emlrtRTEI);
    c4_guard1 = false;
    if (!covrtEmlCondEval(chartInstance->c4_covrtInstance, 14U, 0, 0, c4_f_b)) {
      c4_i_x = c4_centroide[1];
      c4_g_b = muDoubleScalarIsNaN(c4_i_x);
      if (!covrtEmlCondEval(chartInstance->c4_covrtInstance, 14U, 0, 1, c4_g_b))
      {
        covrtEmlMcdcEval(chartInstance->c4_covrtInstance, 14U, 0, 0, true);
        covrtEmlIfEval(chartInstance->c4_covrtInstance, 14U, 0, 1, true);
        c4_b_centroide = c4_centroide[0];
        c4_i64 = c4_b_puntos_x->size[0];
        c4_b_puntos_x->size[0] = c4_puntos_x->size[0];
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_b_puntos_x,
          c4_i64, &c4_p_emlrtRTEI);
        c4_p_loop_ub = c4_puntos_x->size[0] - 1;
        for (c4_i65 = 0; c4_i65 <= c4_p_loop_ub; c4_i65++) {
          c4_b_puntos_x->data[c4_i65] = c4_puntos_x->data[c4_i65] -
            c4_b_centroide;
        }

        c4_c_st.site = &c4_e_emlrtRSI;
        c4_power(chartInstance, &c4_c_st, c4_b_puntos_x, c4_b_varargin_1);
        c4_c_centroide = c4_centroide[1];
        c4_i66 = c4_b_puntos_y->size[0];
        c4_b_puntos_y->size[0] = c4_puntos_y->size[0];
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_b_puntos_y,
          c4_i66, &c4_q_emlrtRTEI);
        c4_q_loop_ub = c4_puntos_y->size[0] - 1;
        for (c4_i67 = 0; c4_i67 <= c4_q_loop_ub; c4_i67++) {
          c4_b_puntos_y->data[c4_i67] = c4_puntos_y->data[c4_i67] -
            c4_c_centroide;
        }

        c4_c_st.site = &c4_e_emlrtRSI;
        c4_power(chartInstance, &c4_c_st, c4_b_puntos_y, c4_r);
        c4_i68 = c4_b_varargin_1->size[0];
        c4_i69 = c4_r->size[0];
        if (c4_i68 != c4_i69) {
          emlrtSizeEqCheck1DR2012b(c4_i68, c4_i69, &c4_emlrtECI, &c4_b_st);
        }

        c4_c_st.site = &c4_e_emlrtRSI;
        c4_i70 = c4_b_varargin_1->size[0];
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_b_varargin_1,
          c4_i70, &c4_r_emlrtRTEI);
        c4_r_loop_ub = c4_b_varargin_1->size[0] - 1;
        for (c4_i71 = 0; c4_i71 <= c4_r_loop_ub; c4_i71++) {
          c4_b_varargin_1->data[c4_i71] += c4_r->data[c4_i71];
        }

        c4_d_st.site = &c4_ii_emlrtRSI;
        c4_e_st.site = &c4_ji_emlrtRSI;
        c4_minimum(chartInstance, &c4_e_st, c4_b_varargin_1, &c4_b_ex, &c4_f_idx);
        c4_b_iindx = c4_f_idx;
        c4_e_posicion = (real_T)c4_b_iindx;
        c4_b_posicion = c4_e_posicion;
        c4_i72 = c4_puntos_x->size[0];
        if (c4_b_posicion != (real_T)(int32_T)muDoubleScalarFloor(c4_b_posicion))
        {
          emlrtIntegerCheckR2012b(c4_b_posicion, &c4_i_emlrtDCI, &c4_b_st);
        }

        c4_i73 = (int32_T)c4_b_posicion;
        if ((c4_i73 < 1) || (c4_i73 > c4_i72)) {
          emlrtDynamicBoundsCheckR2012b(c4_i73, 1, c4_i72, &c4_i_emlrtBCI,
            &c4_b_st);
        }

        c4_centroide[0] = c4_puntos_x->data[c4_i73 - 1];
        c4_i74 = c4_puntos_y->size[0];
        if (c4_b_posicion != (real_T)(int32_T)muDoubleScalarFloor(c4_b_posicion))
        {
          emlrtIntegerCheckR2012b(c4_b_posicion, &c4_j_emlrtDCI, &c4_b_st);
        }

        c4_i75 = (int32_T)c4_b_posicion;
        if ((c4_i75 < 1) || (c4_i75 > c4_i74)) {
          emlrtDynamicBoundsCheckR2012b(c4_i75, 1, c4_i74, &c4_j_emlrtBCI,
            &c4_b_st);
        }

        c4_centroide[1] = c4_puntos_y->data[c4_i75 - 1];
        c4_e_bboxes = c4_b_bboxes[1];
        c4_f_bboxes = c4_b_bboxes[0];
        c4_i76 = c4_Im_Depth_box->size[0] * c4_Im_Depth_box->size[1];
        c4_Im_Depth_box->size[0] = (int32_T)muSingleScalarFloor(c4_b_bboxes[3])
          + 1;
        c4_Im_Depth_box->size[1] = (int32_T)muSingleScalarFloor(c4_b_bboxes[2])
          + 1;
        c4_emxEnsureCapacity_real32_T(chartInstance, &c4_b_st, c4_Im_Depth_box,
          c4_i76, &c4_s_emlrtRTEI);
        c4_s_loop_ub = (int32_T)muSingleScalarFloor(c4_b_bboxes[2]);
        for (c4_i77 = 0; c4_i77 <= c4_s_loop_ub; c4_i77++) {
          c4_t_loop_ub = (int32_T)muSingleScalarFloor(c4_b_bboxes[3]);
          for (c4_i79 = 0; c4_i79 <= c4_t_loop_ub; c4_i79++) {
            c4_d4 = c4_e_bboxes + (real32_T)c4_i79;
            if (c4_d4 != (real_T)(int32_T)muDoubleScalarFloor(c4_d4)) {
              emlrtIntegerCheckR2012b(c4_d4, &c4_k_emlrtDCI, &c4_b_st);
            }

            c4_i82 = (int32_T)(real32_T)c4_d4;
            if ((c4_i82 < 1) || (c4_i82 > 1080)) {
              emlrtDynamicBoundsCheckR2012b(c4_i82, 1, 1080, &c4_k_emlrtBCI,
                &c4_b_st);
            }

            c4_d5 = c4_f_bboxes + (real32_T)c4_i77;
            if (c4_d5 != (real_T)(int32_T)muDoubleScalarFloor(c4_d5)) {
              emlrtIntegerCheckR2012b(c4_d5, &c4_l_emlrtDCI, &c4_b_st);
            }

            c4_i84 = (int32_T)(real32_T)c4_d5;
            if ((c4_i84 < 1) || (c4_i84 > 1920)) {
              emlrtDynamicBoundsCheckR2012b(c4_i84, 1, 1920, &c4_l_emlrtBCI,
                &c4_b_st);
            }

            c4_Im_Depth_box->data[c4_i79 + c4_Im_Depth_box->size[0] * c4_i77] =
              chartInstance->c4_Im_Depth[((int32_T)(real32_T)c4_i82 + 1080 *
              ((int32_T)(real32_T)c4_i84 - 1)) - 1];
          }
        }

        c4_i78 = c4_Im_Depth_box->size[0];
        if (c4_centroide[1] != (real_T)(int32_T)muDoubleScalarFloor
            (c4_centroide[1])) {
          emlrtIntegerCheckR2012b(c4_centroide[1], &c4_m_emlrtDCI, &c4_b_st);
        }

        c4_i80 = (int32_T)c4_centroide[1];
        if ((c4_i80 < 1) || (c4_i80 > c4_i78)) {
          emlrtDynamicBoundsCheckR2012b(c4_i80, 1, c4_i78, &c4_m_emlrtBCI,
            &c4_b_st);
        }

        c4_i81 = c4_Im_Depth_box->size[1];
        if (c4_centroide[0] != (real_T)(int32_T)muDoubleScalarFloor
            (c4_centroide[0])) {
          emlrtIntegerCheckR2012b(c4_centroide[0], &c4_m_emlrtDCI, &c4_b_st);
        }

        c4_i83 = (int32_T)c4_centroide[0];
        if ((c4_i83 < 1) || (c4_i83 > c4_i81)) {
          emlrtDynamicBoundsCheckR2012b(c4_i83, 1, c4_i81, &c4_m_emlrtBCI,
            &c4_b_st);
        }

        c4_b_x = c4_Im_Depth_box->data[(c4_i80 + c4_Im_Depth_box->size[0] *
          (c4_i83 - 1)) - 1];
        c4_b_cx = (real32_T)c4_centroide[0] + c4_b_bboxes[0];
        c4_b_cy = (real32_T)c4_centroide[1] + c4_b_bboxes[1];
        c4_b_y = (c4_b_cx / 1920.0 - 0.5) * c4_b_x * -1.6077;
      } else {
        c4_guard1 = true;
      }
    } else {
      c4_guard1 = true;
    }

    if (c4_guard1) {
      covrtEmlMcdcEval(chartInstance->c4_covrtInstance, 14U, 0, 0, false);
      covrtEmlIfEval(chartInstance->c4_covrtInstance, 14U, 0, 1, false);
      c4_b_x = rtNaN;
      c4_b_y = rtNaN;
      c4_b_cx = rtNaN;
      c4_b_cy = rtNaN;
    }

    c4_emxFree_real_T(chartInstance, &c4_b_puntos_y);
    c4_emxFree_real_T(chartInstance, &c4_b_puntos_x);
    c4_emxFree_real_T(chartInstance, &c4_b_varargin_1);
    c4_emxFree_real_T(chartInstance, &c4_r);
    c4_emxFree_real_T(chartInstance, &c4_puntos_x);
    c4_emxFree_real_T(chartInstance, &c4_puntos_y);
    c4_emxFree_real32_T(chartInstance, &c4_Im_Depth_box);
  } else {
    c4_b_x = rtNaN;
    c4_b_y = rtNaN;
    c4_b_cx = rtNaN;
    c4_b_cy = rtNaN;
  }

  c4_c_x = c4_b_x;
  c4_c_y = c4_b_y;
  c4_c_cx = c4_b_cx;
  c4_c_cy = c4_b_cy;
  *chartInstance->c4_x = c4_c_x;
  *chartInstance->c4_y = c4_c_y;
  *chartInstance->c4_cx = c4_c_cx;
  *chartInstance->c4_cy = c4_c_cy;
  c4_do_animation_call_c4_ver_1(chartInstance);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U, *chartInstance->c4_x);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 3U, *chartInstance->c4_y);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 4U, *chartInstance->c4_cx);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 5U, *chartInstance->c4_cy);
}

static void mdl_start_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance)
{
  static const int32_T c4_postfixPredicateTree[5] = { 0, -1, 1, -1, -3 };

  static const int32_T c4_condTxtEndIdx[2] = { 1317, 1341 };

  static const int32_T c4_condTxtStartIdx[2] = { 1298, 1322 };

  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    36U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 107);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance,
                  "D:/Documentos/8tvo_semestre/Robotica_movil/Proyecto/Proyecto_robotica_movil/Code_ros/calculo_depth_simulink.m",
                  14U, 0U, 1U, 0U, 2U, 0U, 0U, 0U, 1U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 14U, 0U, 0U,
                     "calculo_depth_simulink", 0, -1, 2200);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 14U, 0U, 0U, 72, 90, 2112,
                    2195);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 14U, 0U, 1U, 1294, 1342,
                    1898, 2001);
  covrtEmlForInitFcn(chartInstance->c4_covrtInstance, 14U, 0U, 0U, 734, 760,
                     1006);
  covrtEmlMCDCInitFcn(chartInstance->c4_covrtInstance, 14U, 0U, 0U, 1297, 1341,
                      2U, 0U, c4_condTxtStartIdx, c4_condTxtEndIdx, 5U,
                      c4_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c4_covrtInstance, 14U, 0U, 0U, 75, 89,
    -1, 4U);
}

static void mdl_cleanup_runtime_resources_c4_ver_1(SFc4_ver_1InstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void initSimStructsc4_ver_1(SFc4_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c4_ver_1_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  const char_T *c4_data[4] = {
    "789cc554cd4ec240101e0c122fa0271fc38327e38d803f244a4048345853eb76944df78774b7049ec217e140e23b78e6e6dd27b1505a96868a9188936c7667be"
    "d97edf7cc91672b5eb1c0094208a4621da8be11a85eb605edf81e548e3b915fbc8e8df857c72cfec7b9def440a8d031d25c2e198dc7425a7c211ba3dec21f8a8",
    "24eba33b439e29c336e5d83293fa34e3e706942453687aae749178ad8083df550b85cc4c123f1e8d79c19837bfc68f74a4fd48f7c57c835ff2c57e1eaee18b71"
    "e230123069bbd8d35d5b511e302abccde78e751432754488a2e285e1826fb2215f2f936f19bf3f7ba89e5a5549028e424b659de8beb4157254da47eb463e494d",
    "896373d9a7cc6af8728844cbe460fbcb0d15e9625853d66a3f8ff83a3ff77f385fd6bb2ac21ebc85c5d2e463d6b22d3eef7dfcb94dbe38fe8b6f5bef72e894ef"
    "3ac7c165a37c71dba935af9a41bbee558cff73860e43f2b73ac0c84d1d7ffdfd2fe0fa8750",
    "" };

  c4_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c4_data[0], 1640U, &c4_nameCaptureInfo);
  return c4_nameCaptureInfo;
}

static void c4_check_forloop_overflow_error(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp)
{
  static char_T c4_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c4_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c4_sp, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14, sf_mex_call
              (c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c4_sp, NULL,
    "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
}

static void c4_imhist(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack *
                      c4_sp, c4_emxArray_real32_T *c4_varargin_1, real_T
                      c4_yout[256])
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_c_i;
  real_T c4_colsAEtc;
  real_T c4_d;
  real_T c4_numCols;
  real_T c4_numCores;
  real_T c4_numRows;
  real_T c4_numelA;
  real_T c4_rowsA;
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_c;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  real32_T c4_a;
  real32_T c4_b_a;
  real32_T c4_b_x;
  real32_T c4_c_x;
  real32_T c4_idx;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_nanFlag;
  boolean_T c4_b_rngFlag;
  boolean_T c4_c_b;
  boolean_T c4_c_nanFlag;
  boolean_T c4_nanFlag;
  boolean_T c4_rngFlag;
  boolean_T c4_useParallel;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b = (c4_varargin_1->size[0] == 0);
  if (c4_b) {
    for (c4_i = 0; c4_i < 256; c4_i++) {
      c4_yout[c4_i] = 0.0;
    }
  } else {
    c4_st.site = &c4_q_emlrtRSI;
    c4_b_st.site = &c4_r_emlrtRSI;
    c4_numCores = 1.0;
    getnumcores(&c4_numCores);
    if (((real_T)(c4_varargin_1->size[0] * c4_varargin_1->size[1]) > 500000.0) &&
        (c4_numCores > 1.0)) {
      c4_useParallel = true;
    } else {
      c4_useParallel = false;
    }

    c4_rowsA = (real_T)c4_varargin_1->size[0];
    c4_colsAEtc = (real_T)(c4_varargin_1->size[0] * c4_varargin_1->size[1]) /
      (real_T)c4_varargin_1->size[0];
    if (c4_useParallel) {
      c4_b_st.site = &c4_s_emlrtRSI;
      c4_numelA = (real_T)(c4_varargin_1->size[0] * c4_varargin_1->size[1]);
      c4_numRows = c4_rowsA;
      c4_numCols = c4_colsAEtc;
      c4_b_nanFlag = false;
      c4_rngFlag = false;
      tbbhist_real32_scaled(&c4_varargin_1->data[0], c4_numelA, c4_numRows,
                            c4_numCols, &c4_yout[0], 256.0, 1.0, 256.0,
                            &c4_rngFlag, &c4_b_nanFlag);
      c4_b_rngFlag = c4_rngFlag;
      c4_c_nanFlag = c4_b_nanFlag;
    } else {
      c4_b_st.site = &c4_t_emlrtRSI;
      for (c4_i1 = 0; c4_i1 < 256; c4_i1++) {
        c4_yout[c4_i1] = 0.0;
      }

      c4_nanFlag = false;
      c4_d = (real_T)(c4_varargin_1->size[0] * c4_varargin_1->size[1]);
      c4_i2 = (int32_T)c4_d - 1;
      for (c4_b_i = 0; c4_b_i <= c4_i2; c4_b_i++) {
        c4_c_i = (real_T)c4_b_i + 1.0;
        c4_i3 = c4_varargin_1->size[0] * c4_varargin_1->size[1];
        c4_i4 = (int32_T)c4_c_i;
        if ((c4_i4 < 1) || (c4_i4 > c4_i3)) {
          emlrtDynamicBoundsCheckR2012b(c4_i4, 1, c4_i3, &c4_n_emlrtBCI,
            &c4_b_st);
        }

        c4_b_x = c4_varargin_1->data[c4_i4 - 1];
        c4_b_b = muSingleScalarIsNaN(c4_b_x);
        if (c4_b_b) {
          c4_nanFlag = true;
          c4_idx = 0.0F;
        } else {
          c4_i5 = c4_varargin_1->size[0] * c4_varargin_1->size[1];
          c4_i6 = (int32_T)c4_c_i;
          if ((c4_i6 < 1) || (c4_i6 > c4_i5)) {
            emlrtDynamicBoundsCheckR2012b(c4_i6, 1, c4_i5, &c4_o_emlrtBCI,
              &c4_b_st);
          }

          c4_idx = c4_varargin_1->data[c4_i6 - 1] * 255.0F + 0.5F;
        }

        if (c4_idx < 0.0F) {
          c4_yout[0]++;
        } else if (c4_idx > 255.0F) {
          c4_yout[255]++;
        } else {
          c4_i7 = c4_varargin_1->size[0] * c4_varargin_1->size[1];
          c4_i8 = (int32_T)c4_c_i;
          if ((c4_i8 < 1) || (c4_i8 > c4_i7)) {
            emlrtDynamicBoundsCheckR2012b(c4_i8, 1, c4_i7, &c4_p_emlrtBCI,
              &c4_b_st);
          }

          c4_c_x = c4_varargin_1->data[c4_i8 - 1];
          c4_c_b = muSingleScalarIsInf(c4_c_x);
          if (c4_c_b) {
            c4_yout[255]++;
          } else {
            c4_a = c4_idx;
            c4_c = (int32_T)c4_a;
            c4_b_a = c4_idx;
            c4_b_c = (int32_T)c4_b_a;
            c4_yout[c4_c] = c4_yout[c4_b_c] + 1.0;
          }
        }
      }

      c4_b_rngFlag = false;
      c4_c_nanFlag = c4_nanFlag;
    }

    if (c4_b_rngFlag) {
      c4_b_st.site = &c4_u_emlrtRSI;
      c4_warning(chartInstance, &c4_b_st);
    }

    if (c4_c_nanFlag) {
      c4_b_st.site = &c4_v_emlrtRSI;
      c4_b_warning(chartInstance, &c4_b_st);
    }
  }
}

static void c4_warning(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp)
{
  static char_T c4_msgID[25] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g',
    'e' };

  static char_T c4_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 25),
                false);
  c4_st.site = &c4_w_emlrtRSI;
  c4_b_feval(chartInstance, &c4_st, c4_b_y, c4_feval(chartInstance, &c4_st,
              c4_c_y, c4_d_y));
}

static void c4_b_warning(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp)
{
  static char_T c4_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c4_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c4_st.site = &c4_w_emlrtRSI;
  c4_d_feval(chartInstance, &c4_st, c4_b_y, c4_c_feval(chartInstance, &c4_st,
              c4_c_y, c4_d_y));
}

static void c4_regionprops(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_varargin_1,
  c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *c4_outstats)
{
  static char_T c4_cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  static char_T c4_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  c4_emxArray_boolean_T *c4_b_varargin_1;
  c4_emxArray_boolean_T *c4_tile;
  c4_emxArray_int32_T *c4_b_regionLengths;
  c4_emxArray_int32_T *c4_idxCount;
  c4_emxArray_int32_T *c4_regionLengths;
  c4_emxArray_real_T *c4_regionIndices;
  c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c4_stats;
  c4_sHtk0WM4OMtyqkehwQYcq2 c4_statsAlreadyComputed;
  c4_sPw6XcACqvsnFn0LPvB6yCC c4_s;
  c4_s_bxcgeNxEuVlgmMh5HwQaXB c4_statsOneObj;
  c4_s_vX9LV7M75v5ZNol5H5URkE c4_CC;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  real_T c4_imageSize[2];
  real_T c4_reqStats[2];
  real_T c4_b_numObjs;
  real_T c4_b_vIdx;
  real_T c4_c_k;
  real_T c4_c_numObjs;
  real_T c4_c_varargin_1;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d_k;
  real_T c4_d_numObjs;
  real_T c4_d_varargin_1;
  real_T c4_e_numObjs;
  real_T c4_f_k;
  real_T c4_numObjs;
  int32_T c4_b_outsize[2];
  int32_T c4_outsize[2];
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_stats;
  int32_T c4_c_loop_ub;
  int32_T c4_d_loop_ub;
  int32_T c4_dim;
  int32_T c4_e_k;
  int32_T c4_e_loop_ub;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i7;
  int32_T c4_i70;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_k_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_vIdx;
  boolean_T c4_b;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_boolean_T(chartInstance, c4_sp, &c4_b_varargin_1, 2,
                       &c4_x_emlrtRTEI);
  c4_i = c4_b_varargin_1->size[0] * c4_b_varargin_1->size[1];
  c4_b_varargin_1->size[0] = c4_varargin_1->size[0];
  c4_b_varargin_1->size[1] = c4_varargin_1->size[1];
  c4_st.site = &c4_li_emlrtRSI;
  c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_st, c4_b_varargin_1, c4_i,
    &c4_x_emlrtRTEI);
  c4_loop_ub = c4_varargin_1->size[0] * c4_varargin_1->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_varargin_1->data[c4_i1] = c4_varargin_1->data[c4_i1];
  }

  c4_emxInitStruct_s_vX9LV7M75v5ZNol(chartInstance, c4_sp, &c4_CC,
    &c4_ib_emlrtRTEI);
  c4_st.site = &c4_kb_emlrtRSI;
  c4_bwconncomp(chartInstance, &c4_st, c4_b_varargin_1, &c4_CC);
  c4_emxFree_boolean_T(chartInstance, &c4_b_varargin_1);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_imageSize[c4_i2] = c4_CC.ImageSize[c4_i2];
  }

  c4_emxInit_boolean_T1(chartInstance, c4_sp, &c4_tile, 1, &c4_y_emlrtRTEI);
  c4_numObjs = c4_CC.NumObjects;
  c4_st.site = &c4_jb_emlrtRSI;
  c4_b_numObjs = c4_numObjs;
  c4_b_st.site = &c4_tc_emlrtRSI;
  c4_c_numObjs = c4_b_numObjs;
  c4_reqStats[0] = 2.0;
  c4_reqStats[1] = 1.0;
  c4_c_st.site = &c4_uc_emlrtRSI;
  c4_c_varargin_1 = c4_c_numObjs;
  c4_d_st.site = &c4_vc_emlrtRSI;
  c4_assertValidSizeArg(chartInstance, &c4_d_st, c4_c_varargin_1);
  c4_i3 = c4_tile->size[0];
  c4_tile->size[0] = (int32_T)c4_c_varargin_1;
  c4_emxEnsureCapacity_boolean_T1(chartInstance, &c4_c_st, c4_tile, c4_i3,
    &c4_y_emlrtRTEI);
  c4_b_loop_ub = (int32_T)c4_c_varargin_1 - 1;
  for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
    c4_tile->data[c4_i4] = false;
  }

  c4_outsize[0] = c4_tile->size[0];
  if (!((real_T)c4_outsize[0] == (real_T)c4_tile->size[0])) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c4_c_st, &c4_b_emlrtMCI, "error", 0U, 1U, 14, c4_b_y);
  }

  for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
    c4_s.Centroid[c4_i5] = 0.0;
  }

  c4_s.Area = 0.0;
  c4_i6 = c4_outstats->size[0];
  c4_outstats->size[0] = c4_outsize[0];
  c4_emxEnsureCapacity_sPw6XcACqvsnF(chartInstance, &c4_c_st, c4_outstats, c4_i6,
    &c4_ab_emlrtRTEI);
  c4_c_loop_ub = c4_outsize[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
    c4_outstats->data[c4_i7] = c4_s;
  }

  c4_emxInitStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c4_c_st, &c4_statsOneObj,
    &c4_kb_emlrtRTEI);
  c4_st.site = &c4_ib_emlrtRSI;
  c4_d_numObjs = c4_numObjs;
  c4_statsAlreadyComputed.Area = false;
  c4_statsOneObj.Area = 0.0;
  c4_statsAlreadyComputed.Centroid = false;
  for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
    c4_statsOneObj.Centroid[c4_i8] = 0.0;
  }

  c4_statsAlreadyComputed.BoundingBox = false;
  for (c4_i9 = 0; c4_i9 < 4; c4_i9++) {
    c4_statsOneObj.BoundingBox[c4_i9] = 0.0;
  }

  c4_statsAlreadyComputed.MajorAxisLength = false;
  c4_statsOneObj.MajorAxisLength = 0.0;
  c4_statsAlreadyComputed.MinorAxisLength = false;
  c4_statsOneObj.MinorAxisLength = 0.0;
  c4_statsAlreadyComputed.Eccentricity = false;
  c4_statsOneObj.Eccentricity = 0.0;
  c4_statsAlreadyComputed.Orientation = false;
  c4_statsOneObj.Orientation = 0.0;
  c4_statsAlreadyComputed.Image = false;
  c4_statsOneObj.Image->size[0] = 0;
  c4_statsOneObj.Image->size[1] = 0;
  c4_statsAlreadyComputed.FilledImage = false;
  c4_statsOneObj.FilledImage->size[0] = 0;
  c4_statsOneObj.FilledImage->size[1] = 0;
  c4_statsAlreadyComputed.FilledArea = false;
  c4_statsOneObj.FilledArea = 0.0;
  c4_statsAlreadyComputed.EulerNumber = false;
  c4_statsOneObj.EulerNumber = 0.0;
  c4_statsAlreadyComputed.Extrema = false;
  for (c4_i10 = 0; c4_i10 < 16; c4_i10++) {
    c4_statsOneObj.Extrema[c4_i10] = 0.0;
  }

  c4_statsAlreadyComputed.EquivDiameter = false;
  c4_statsOneObj.EquivDiameter = 0.0;
  c4_statsAlreadyComputed.Extent = false;
  c4_statsOneObj.Extent = 0.0;
  c4_statsOneObj.PixelIdxList->size[0] = 0;
  c4_statsAlreadyComputed.PixelList = false;
  c4_statsOneObj.PixelList->size[0] = 0;
  c4_statsOneObj.PixelList->size[1] = 2;
  c4_statsAlreadyComputed.Perimeter = false;
  c4_statsOneObj.Perimeter = 0.0;
  c4_statsAlreadyComputed.Circularity = false;
  c4_statsOneObj.Circularity = 0.0;
  c4_statsAlreadyComputed.PixelValues = false;
  c4_statsOneObj.PixelValues->size[0] = 0;
  c4_statsAlreadyComputed.WeightedCentroid = false;
  for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
    c4_statsOneObj.WeightedCentroid[c4_i11] = 0.0;
  }

  c4_statsAlreadyComputed.MeanIntensity = false;
  c4_statsOneObj.MeanIntensity = 0.0;
  c4_statsAlreadyComputed.MinIntensity = false;
  c4_statsOneObj.MinIntensity = 0.0;
  c4_statsAlreadyComputed.MaxIntensity = false;
  c4_statsOneObj.MaxIntensity = 0.0;
  c4_statsAlreadyComputed.SubarrayIdx = false;
  c4_statsOneObj.SubarrayIdx->size[0] = 1;
  c4_statsOneObj.SubarrayIdx->size[1] = 0;
  for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
    c4_statsOneObj.SubarrayIdxLengths[c4_i12] = 0.0;
  }

  c4_b_st.site = &c4_wc_emlrtRSI;
  c4_d_varargin_1 = c4_d_numObjs;
  c4_c_st.site = &c4_vc_emlrtRSI;
  c4_assertValidSizeArg(chartInstance, &c4_c_st, c4_d_varargin_1);
  c4_i13 = c4_tile->size[0];
  c4_tile->size[0] = (int32_T)c4_d_varargin_1;
  c4_emxEnsureCapacity_boolean_T1(chartInstance, &c4_b_st, c4_tile, c4_i13,
    &c4_y_emlrtRTEI);
  c4_d_loop_ub = (int32_T)c4_d_varargin_1 - 1;
  for (c4_i14 = 0; c4_i14 <= c4_d_loop_ub; c4_i14++) {
    c4_tile->data[c4_i14] = false;
  }

  c4_b_outsize[0] = c4_tile->size[0];
  if (!((real_T)c4_b_outsize[0] == (real_T)c4_tile->size[0])) {
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c4_b_st, &c4_b_emlrtMCI, "error", 0U, 1U, 14, c4_c_y);
  }

  c4_emxFree_boolean_T(chartInstance, &c4_tile);
  c4_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, &c4_b_st, &c4_stats, 1,
    &c4_jb_emlrtRTEI);
  c4_i15 = c4_stats->size[0];
  c4_stats->size[0] = c4_b_outsize[0];
  c4_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, &c4_b_st, c4_stats, c4_i15,
    &c4_bb_emlrtRTEI);
  c4_e_loop_ub = c4_b_outsize[0] - 1;
  for (c4_i16 = 0; c4_i16 <= c4_e_loop_ub; c4_i16++) {
    c4_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c4_b_st, &c4_stats->
      data[c4_i16], &c4_statsOneObj, &c4_bb_emlrtRTEI);
  }

  c4_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c4_statsOneObj);
  c4_st.site = &c4_hb_emlrtRSI;
  c4_e_numObjs = c4_numObjs;
  c4_statsAlreadyComputed.PixelIdxList = true;
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_regionIndices, 1,
                    &c4_mb_emlrtRTEI);
  if (c4_e_numObjs != 0.0) {
    c4_i17 = c4_regionIndices->size[0];
    c4_regionIndices->size[0] = c4_CC.RegionIndices->size[0];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_regionIndices, c4_i17,
      &c4_cb_emlrtRTEI);
    c4_f_loop_ub = c4_CC.RegionIndices->size[0] - 1;
    for (c4_i18 = 0; c4_i18 <= c4_f_loop_ub; c4_i18++) {
      c4_regionIndices->data[c4_i18] = c4_CC.RegionIndices->data[c4_i18];
    }

    c4_emxInit_int32_T(chartInstance, &c4_st, &c4_regionLengths, 1,
                       &c4_lb_emlrtRTEI);
    c4_i19 = c4_regionLengths->size[0];
    c4_regionLengths->size[0] = c4_CC.RegionLengths->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_regionLengths, c4_i19,
      &c4_db_emlrtRTEI);
    c4_g_loop_ub = c4_CC.RegionLengths->size[0] - 1;
    for (c4_i21 = 0; c4_i21 <= c4_g_loop_ub; c4_i21++) {
      c4_regionLengths->data[c4_i21] = c4_CC.RegionLengths->data[c4_i21];
    }

    c4_b_st.site = &c4_xc_emlrtRSI;
    c4_c_st.site = &c4_nc_emlrtRSI;
    c4_dim = 2;
    if ((real_T)c4_regionLengths->size[0] != 1.0) {
      c4_dim = 1;
    }

    c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_b_regionLengths, 1,
                       &c4_fb_emlrtRTEI);
    c4_i27 = c4_b_regionLengths->size[0];
    c4_b_regionLengths->size[0] = c4_regionLengths->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_c_st, c4_b_regionLengths,
      c4_i27, &c4_fb_emlrtRTEI);
    c4_h_loop_ub = c4_regionLengths->size[0] - 1;
    for (c4_i31 = 0; c4_i31 <= c4_h_loop_ub; c4_i31++) {
      c4_b_regionLengths->data[c4_i31] = c4_regionLengths->data[c4_i31];
    }

    c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_idxCount, 1,
                       &c4_nb_emlrtRTEI);
    c4_d_st.site = &c4_oc_emlrtRSI;
    c4_useConstantDim(chartInstance, &c4_d_st, c4_b_regionLengths, c4_dim,
                      c4_regionLengths);
    c4_i35 = c4_idxCount->size[0];
    c4_idxCount->size[0] = 1 + c4_regionLengths->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_idxCount, c4_i35,
      &c4_gb_emlrtRTEI);
    c4_idxCount->data[0] = 0;
    c4_j_loop_ub = c4_regionLengths->size[0] - 1;
    c4_emxFree_int32_T(chartInstance, &c4_b_regionLengths);
    for (c4_i47 = 0; c4_i47 <= c4_j_loop_ub; c4_i47++) {
      c4_idxCount->data[c4_i47 + 1] = c4_regionLengths->data[c4_i47];
    }

    c4_emxFree_int32_T(chartInstance, &c4_regionLengths);
    c4_d2 = (real_T)c4_stats->size[0];
    c4_i52 = (int32_T)c4_d2 - 1;
    for (c4_e_k = 0; c4_e_k <= c4_i52; c4_e_k++) {
      c4_f_k = (real_T)c4_e_k + 1.0;
      c4_i56 = c4_idxCount->size[0];
      c4_i57 = (int32_T)c4_f_k;
      if ((c4_i57 < 1) || (c4_i57 > c4_i56)) {
        emlrtDynamicBoundsCheckR2012b(c4_i57, 1, c4_i56, &c4_q_emlrtBCI, &c4_st);
      }

      c4_i58 = c4_idxCount->data[c4_i57 - 1] + 1;
      c4_i59 = c4_idxCount->size[0];
      c4_i60 = (int32_T)(c4_f_k + 1.0);
      if ((c4_i60 < 1) || (c4_i60 > c4_i59)) {
        emlrtDynamicBoundsCheckR2012b(c4_i60, 1, c4_i59, &c4_r_emlrtBCI, &c4_st);
      }

      c4_i61 = c4_idxCount->data[c4_i60 - 1];
      c4_b = (c4_i58 > c4_i61);
      if (c4_b) {
        c4_i63 = 0;
        c4_i64 = -1;
      } else {
        c4_i62 = c4_regionIndices->size[0];
        if ((c4_i58 < 1) || (c4_i58 > c4_i62)) {
          emlrtDynamicBoundsCheckR2012b(c4_i58, 1, c4_i62, &c4_q_emlrtBCI,
            &c4_st);
        }

        c4_i63 = c4_i58 - 1;
        c4_i65 = c4_regionIndices->size[0];
        if ((c4_i61 < 1) || (c4_i61 > c4_i65)) {
          emlrtDynamicBoundsCheckR2012b(c4_i61, 1, c4_i65, &c4_r_emlrtBCI,
            &c4_st);
        }

        c4_i64 = c4_i61 - 1;
      }

      c4_b_stats = c4_stats->size[0];
      c4_i66 = (int32_T)c4_f_k;
      if ((c4_i66 < 1) || (c4_i66 > c4_b_stats)) {
        emlrtDynamicBoundsCheckR2012b(c4_i66, 1, c4_b_stats, &c4_ab_emlrtBCI,
          &c4_st);
      }

      c4_i67 = c4_i66 - 1;
      c4_i68 = c4_stats->data[c4_i67].PixelIdxList->size[0];
      c4_stats->data[c4_i67].PixelIdxList->size[0] = (c4_i64 - c4_i63) + 1;
      c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_stats->data[c4_i67].
        PixelIdxList, c4_i68, &c4_hb_emlrtRTEI);
      c4_k_loop_ub = c4_i64 - c4_i63;
      for (c4_i69 = 0; c4_i69 <= c4_k_loop_ub; c4_i69++) {
        c4_i70 = (int32_T)c4_f_k;
        if ((c4_i70 < 1) || (c4_i70 > c4_b_stats)) {
          emlrtDynamicBoundsCheckR2012b(c4_i70, 1, c4_b_stats, &c4_ab_emlrtBCI,
            &c4_st);
        }

        c4_stats->data[c4_i70 - 1].PixelIdxList->data[c4_i69] =
          c4_regionIndices->data[c4_i63 + c4_i69];
      }
    }

    c4_emxFree_int32_T(chartInstance, &c4_idxCount);
  }

  c4_emxFreeStruct_s_vX9LV7M75v5ZNol(chartInstance, &c4_CC);
  if (c4_reqStats[0] != (real_T)(int32_T)muDoubleScalarFloor(c4_reqStats[0])) {
    emlrtIntegerCheckR2012b(c4_reqStats[0], &c4_n_emlrtDCI, (void *)c4_sp);
  }

  c4_st.site = &c4_gb_emlrtRSI;
  c4_b_ComputeCentroid(chartInstance, &c4_st, c4_imageSize, c4_stats,
                       &c4_statsAlreadyComputed);
  if (c4_reqStats[1] != (real_T)(int32_T)muDoubleScalarFloor(c4_reqStats[1])) {
    emlrtIntegerCheckR2012b(c4_reqStats[1], &c4_n_emlrtDCI, (void *)c4_sp);
  }

  c4_st.site = &c4_fb_emlrtRSI;
  if (!c4_statsAlreadyComputed.Area) {
    c4_d = (real_T)c4_stats->size[0];
    c4_i20 = (int32_T)c4_d - 1;
    for (c4_k = 0; c4_k <= c4_i20; c4_k++) {
      c4_c_k = (real_T)c4_k + 1.0;
      c4_i23 = c4_regionIndices->size[0];
      c4_i24 = c4_stats->size[0];
      c4_i25 = (int32_T)c4_c_k;
      if ((c4_i25 < 1) || (c4_i25 > c4_i24)) {
        emlrtDynamicBoundsCheckR2012b(c4_i25, 1, c4_i24, &c4_bb_emlrtBCI, &c4_st);
      }

      c4_regionIndices->size[0] = c4_stats->data[c4_i25 - 1].PixelIdxList->size
        [0];
      c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_regionIndices,
        c4_i23, &c4_eb_emlrtRTEI);
      c4_i30 = c4_stats->size[0];
      c4_i33 = (int32_T)c4_c_k;
      if ((c4_i33 < 1) || (c4_i33 > c4_i30)) {
        emlrtDynamicBoundsCheckR2012b(c4_i33, 1, c4_i30, &c4_bb_emlrtBCI, &c4_st);
      }

      c4_i_loop_ub = c4_stats->data[c4_i33 - 1].PixelIdxList->size[0] - 1;
      for (c4_i34 = 0; c4_i34 <= c4_i_loop_ub; c4_i34++) {
        c4_i40 = c4_stats->size[0];
        c4_i43 = (int32_T)c4_c_k;
        if ((c4_i43 < 1) || (c4_i43 > c4_i40)) {
          emlrtDynamicBoundsCheckR2012b(c4_i43, 1, c4_i40, &c4_bb_emlrtBCI,
            &c4_st);
        }

        c4_regionIndices->data[c4_i34] = c4_stats->data[c4_i43 - 1].
          PixelIdxList->data[c4_i34];
      }

      c4_i39 = c4_stats->size[0];
      c4_i42 = (int32_T)c4_c_k;
      if ((c4_i42 < 1) || (c4_i42 > c4_i39)) {
        emlrtDynamicBoundsCheckR2012b(c4_i42, 1, c4_i39, &c4_w_emlrtBCI, &c4_st);
      }

      c4_stats->data[c4_i42 - 1].Area = (real_T)c4_regionIndices->size[0];
    }
  }

  c4_emxFree_real_T(chartInstance, &c4_regionIndices);
  c4_st.site = &c4_eb_emlrtRSI;
  c4_d1 = (real_T)c4_stats->size[0];
  c4_i22 = (int32_T)c4_d1 - 1;
  for (c4_b_k = 0; c4_b_k <= c4_i22; c4_b_k++) {
    c4_d_k = (real_T)c4_b_k + 1.0;
    c4_i26 = c4_stats->size[0];
    c4_i28 = (int32_T)c4_d_k;
    if ((c4_i28 < 1) || (c4_i28 > c4_i26)) {
      emlrtDynamicBoundsCheckR2012b(c4_i28, 1, c4_i26, &c4_s_emlrtBCI, &c4_st);
    }

    c4_i29 = c4_outstats->size[0];
    c4_i32 = (int32_T)c4_d_k;
    if ((c4_i32 < 1) || (c4_i32 > c4_i29)) {
      emlrtDynamicBoundsCheckR2012b(c4_i32, 1, c4_i29, &c4_t_emlrtBCI, &c4_st);
    }

    for (c4_vIdx = 0; c4_vIdx < 2; c4_vIdx++) {
      c4_b_vIdx = (real_T)c4_vIdx + 1.0;
      c4_i38 = c4_stats->size[0];
      c4_i41 = (int32_T)c4_d_k;
      if ((c4_i41 < 1) || (c4_i41 > c4_i38)) {
        emlrtDynamicBoundsCheckR2012b(c4_i41, 1, c4_i38, &c4_v_emlrtBCI, &c4_st);
      }

      c4_i46 = c4_i41 - 1;
      c4_i48 = c4_outstats->size[0];
      c4_i49 = (int32_T)c4_d_k;
      if ((c4_i49 < 1) || (c4_i49 > c4_i48)) {
        emlrtDynamicBoundsCheckR2012b(c4_i49, 1, c4_i48, &c4_u_emlrtBCI, &c4_st);
      }

      c4_i53 = c4_i49 - 1;
      c4_outstats->data[c4_i53].Centroid[(int32_T)c4_b_vIdx - 1] =
        c4_stats->data[c4_i46].Centroid[(int32_T)c4_b_vIdx - 1];
    }

    c4_i36 = c4_stats->size[0];
    c4_i37 = (int32_T)c4_d_k;
    if ((c4_i37 < 1) || (c4_i37 > c4_i36)) {
      emlrtDynamicBoundsCheckR2012b(c4_i37, 1, c4_i36, &c4_s_emlrtBCI, &c4_st);
    }

    c4_i44 = c4_outstats->size[0];
    c4_i45 = (int32_T)c4_d_k;
    if ((c4_i45 < 1) || (c4_i45 > c4_i44)) {
      emlrtDynamicBoundsCheckR2012b(c4_i45, 1, c4_i44, &c4_t_emlrtBCI, &c4_st);
    }

    c4_i50 = c4_stats->size[0];
    c4_i51 = (int32_T)c4_d_k;
    if ((c4_i51 < 1) || (c4_i51 > c4_i50)) {
      emlrtDynamicBoundsCheckR2012b(c4_i51, 1, c4_i50, &c4_x_emlrtBCI, &c4_st);
    }

    c4_i54 = c4_outstats->size[0];
    c4_i55 = (int32_T)c4_d_k;
    if ((c4_i55 < 1) || (c4_i55 > c4_i54)) {
      emlrtDynamicBoundsCheckR2012b(c4_i55, 1, c4_i54, &c4_y_emlrtBCI, &c4_st);
    }

    c4_outstats->data[c4_i55 - 1].Area = c4_stats->data[c4_i51 - 1].Area;
  }

  c4_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, &c4_stats);
}

static void c4_bwconncomp(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_varargin_1,
  c4_s_vX9LV7M75v5ZNol5H5URkE *c4_CC)
{
  c4_emxArray_int32_T *c4_b_regionLengths;
  c4_emxArray_int32_T *c4_b_x;
  c4_emxArray_int32_T *c4_c_x;
  c4_emxArray_int32_T *c4_endRow;
  c4_emxArray_int32_T *c4_idxCount;
  c4_emxArray_int32_T *c4_labelsRenumbered;
  c4_emxArray_int32_T *c4_regionLengths;
  c4_emxArray_int32_T *c4_startCol;
  c4_emxArray_int32_T *c4_startRow;
  c4_emxArray_real_T *c4_pixelIdxList;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  emlrtStack *c4_r;
  real_T c4_M;
  real_T c4_N;
  real_T c4_b_M;
  real_T c4_b_N;
  real_T c4_b_col;
  real_T c4_b_k;
  real_T c4_c_M;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d_col;
  real_T c4_g_b;
  real_T c4_numComponents;
  int32_T c4_iv[1];
  int32_T c4_a;
  int32_T c4_b;
  int32_T c4_b_a;
  int32_T c4_b_b;
  int32_T c4_b_c;
  int32_T c4_b_loop_ub;
  int32_T c4_b_node;
  int32_T c4_b_p;
  int32_T c4_b_root_k;
  int32_T c4_b_root_p;
  int32_T c4_c;
  int32_T c4_c_a;
  int32_T c4_c_b;
  int32_T c4_c_col;
  int32_T c4_c_k;
  int32_T c4_c_loop_ub;
  int32_T c4_c_p;
  int32_T c4_col;
  int32_T c4_column_offset;
  int32_T c4_currentColumn;
  int32_T c4_d_a;
  int32_T c4_d_b;
  int32_T c4_d_k;
  int32_T c4_d_loop_ub;
  int32_T c4_dim;
  int32_T c4_e_a;
  int32_T c4_e_b;
  int32_T c4_e_k;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg2;
  int32_T c4_f_b;
  int32_T c4_f_k;
  int32_T c4_f_loop_ub;
  int32_T c4_firstRunOnPreviousColumn;
  int32_T c4_firstRunOnThisColumn;
  int32_T c4_g_k;
  int32_T c4_g_loop_ub;
  int32_T c4_h_b;
  int32_T c4_h_k;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i100;
  int32_T c4_i101;
  int32_T c4_i102;
  int32_T c4_i103;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i7;
  int32_T c4_i70;
  int32_T c4_i71;
  int32_T c4_i72;
  int32_T c4_i73;
  int32_T c4_i74;
  int32_T c4_i75;
  int32_T c4_i76;
  int32_T c4_i77;
  int32_T c4_i78;
  int32_T c4_i79;
  int32_T c4_i8;
  int32_T c4_i80;
  int32_T c4_i81;
  int32_T c4_i82;
  int32_T c4_i83;
  int32_T c4_i84;
  int32_T c4_i85;
  int32_T c4_i86;
  int32_T c4_i87;
  int32_T c4_i88;
  int32_T c4_i89;
  int32_T c4_i9;
  int32_T c4_i90;
  int32_T c4_i91;
  int32_T c4_i92;
  int32_T c4_i93;
  int32_T c4_i94;
  int32_T c4_i95;
  int32_T c4_i96;
  int32_T c4_i97;
  int32_T c4_i98;
  int32_T c4_i99;
  int32_T c4_i_b;
  int32_T c4_i_k;
  int32_T c4_idx;
  int32_T c4_k;
  int32_T c4_lastRunOnPreviousColumn;
  int32_T c4_loop_ub;
  int32_T c4_nextLabel;
  int32_T c4_node;
  int32_T c4_numRuns;
  int32_T c4_p;
  int32_T c4_root_k;
  int32_T c4_root_p;
  int32_T c4_row;
  int32_T c4_rowidx;
  int32_T c4_runCounter;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_d_overflow;
  boolean_T c4_exitg1;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_rb_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_b_st.site = &c4_sb_emlrtRSI;
  c4_numRuns = 0;
  c4_N = (real_T)c4_varargin_1->size[1];
  c4_M = (real_T)c4_varargin_1->size[0];
  if (c4_M != 0.0) {
    c4_i = (int32_T)c4_N - 1;
    for (c4_col = 0; c4_col <= c4_i; c4_col++) {
      c4_b_col = (real_T)c4_col + 1.0;
      c4_i1 = c4_varargin_1->size[0];
      c4_i3 = 1;
      if ((c4_i3 < 1) || (c4_i3 > c4_i1)) {
        emlrtDynamicBoundsCheckR2012b(c4_i3, 1, c4_i1, &c4_cb_emlrtBCI, &c4_b_st);
      }

      c4_i4 = c4_varargin_1->size[1];
      c4_i5 = (int32_T)c4_b_col;
      if ((c4_i5 < 1) || (c4_i5 > c4_i4)) {
        emlrtDynamicBoundsCheckR2012b(c4_i5, 1, c4_i4, &c4_db_emlrtBCI, &c4_b_st);
      }

      if (c4_varargin_1->data[c4_varargin_1->size[0] * (c4_i5 - 1)]) {
        c4_numRuns++;
      }

      c4_i10 = (int32_T)(c4_M + -1.0) - 1;
      for (c4_k = 0; c4_k <= c4_i10; c4_k++) {
        c4_b_k = (real_T)c4_k + 2.0;
        c4_i12 = c4_varargin_1->size[0];
        c4_i13 = (int32_T)c4_b_k;
        if ((c4_i13 < 1) || (c4_i13 > c4_i12)) {
          emlrtDynamicBoundsCheckR2012b(c4_i13, 1, c4_i12, &c4_eb_emlrtBCI,
            &c4_b_st);
        }

        c4_i15 = c4_varargin_1->size[1];
        c4_i16 = (int32_T)c4_b_col;
        if ((c4_i16 < 1) || (c4_i16 > c4_i15)) {
          emlrtDynamicBoundsCheckR2012b(c4_i16, 1, c4_i15, &c4_eb_emlrtBCI,
            &c4_b_st);
        }

        if (c4_varargin_1->data[(c4_i13 + c4_varargin_1->size[0] * (c4_i16 - 1))
            - 1]) {
          c4_i18 = c4_varargin_1->size[0];
          c4_i21 = (int32_T)(c4_b_k - 1.0);
          if ((c4_i21 < 1) || (c4_i21 > c4_i18)) {
            emlrtDynamicBoundsCheckR2012b(c4_i21, 1, c4_i18, &c4_fb_emlrtBCI,
              &c4_b_st);
          }

          c4_i24 = c4_varargin_1->size[1];
          c4_i26 = (int32_T)c4_b_col;
          if ((c4_i26 < 1) || (c4_i26 > c4_i24)) {
            emlrtDynamicBoundsCheckR2012b(c4_i26, 1, c4_i24, &c4_fb_emlrtBCI,
              &c4_b_st);
          }

          if (!c4_varargin_1->data[(c4_i21 + c4_varargin_1->size[0] * (c4_i26 -
                1)) - 1]) {
            c4_numRuns++;
          }
        }
      }
    }
  }

  c4_emxInit_int32_T(chartInstance, &c4_st, &c4_regionLengths, 1,
                     &c4_dc_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, &c4_st, &c4_startRow, 1, &c4_fc_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, &c4_st, &c4_endRow, 1, &c4_gc_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, &c4_st, &c4_startCol, 1, &c4_hc_emlrtRTEI);
  if (c4_numRuns == 0) {
    c4_startRow->size[0] = 0;
    c4_endRow->size[0] = 0;
    c4_startCol->size[0] = 0;
    c4_regionLengths->size[0] = 0;
    c4_numRuns = 0;
  } else {
    c4_i2 = c4_startRow->size[0];
    c4_d = (real_T)c4_numRuns;
    if (!(c4_d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c4_d, &c4_o_emlrtDCI, &c4_st);
    }

    c4_startRow->size[0] = (int32_T)muDoubleScalarFloor(c4_d);
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_startRow, c4_i2,
      &c4_ob_emlrtRTEI);
    c4_i6 = c4_endRow->size[0];
    c4_endRow->size[0] = c4_numRuns;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_endRow, c4_i6,
      &c4_pb_emlrtRTEI);
    c4_i9 = c4_startCol->size[0];
    c4_startCol->size[0] = c4_numRuns;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_startCol, c4_i9,
      &c4_qb_emlrtRTEI);
    c4_b_st.site = &c4_tb_emlrtRSI;
    c4_b_N = (real_T)c4_varargin_1->size[1];
    c4_b_M = (real_T)c4_varargin_1->size[0];
    c4_runCounter = 1;
    c4_i14 = (int32_T)c4_b_N - 1;
    for (c4_c_col = 0; c4_c_col <= c4_i14; c4_c_col++) {
      c4_d_col = (real_T)c4_c_col + 1.0;
      c4_row = 1;
      while ((real_T)c4_row <= c4_b_M) {
        c4_exitg1 = false;
        while ((!c4_exitg1) && ((real_T)c4_row <= c4_b_M)) {
          c4_i23 = c4_varargin_1->size[0];
          if ((c4_row < 1) || (c4_row > c4_i23)) {
            emlrtDynamicBoundsCheckR2012b(c4_row, 1, c4_i23, &c4_gb_emlrtBCI,
              &c4_b_st);
          }

          c4_i27 = c4_varargin_1->size[1];
          c4_i31 = (int32_T)c4_d_col;
          if ((c4_i31 < 1) || (c4_i31 > c4_i27)) {
            emlrtDynamicBoundsCheckR2012b(c4_i31, 1, c4_i27, &c4_gb_emlrtBCI,
              &c4_b_st);
          }

          if (!c4_varargin_1->data[(c4_row + c4_varargin_1->size[0] * (c4_i31 -
                1)) - 1]) {
            c4_row++;
          } else {
            c4_exitg1 = true;
          }
        }

        if ((real_T)c4_row <= c4_b_M) {
          c4_i25 = c4_varargin_1->size[0];
          if ((c4_row < 1) || (c4_row > c4_i25)) {
            emlrtDynamicBoundsCheckR2012b(c4_row, 1, c4_i25, &c4_hb_emlrtBCI,
              &c4_b_st);
          }

          c4_i30 = c4_varargin_1->size[1];
          c4_i33 = (int32_T)c4_d_col;
          if ((c4_i33 < 1) || (c4_i33 > c4_i30)) {
            emlrtDynamicBoundsCheckR2012b(c4_i33, 1, c4_i30, &c4_hb_emlrtBCI,
              &c4_b_st);
          }

          if (c4_varargin_1->data[(c4_row + c4_varargin_1->size[0] * (c4_i33 - 1))
              - 1]) {
            c4_i37 = c4_startCol->size[0];
            if ((c4_runCounter < 1) || (c4_runCounter > c4_i37)) {
              emlrtDynamicBoundsCheckR2012b(c4_runCounter, 1, c4_i37,
                &c4_ib_emlrtBCI, &c4_b_st);
            }

            c4_startCol->data[c4_runCounter - 1] = (int32_T)c4_d_col;
            c4_i40 = c4_startRow->size[0];
            if ((c4_runCounter < 1) || (c4_runCounter > c4_i40)) {
              emlrtDynamicBoundsCheckR2012b(c4_runCounter, 1, c4_i40,
                &c4_kb_emlrtBCI, &c4_b_st);
            }

            c4_startRow->data[c4_runCounter - 1] = c4_row;
            c4_exitg1 = false;
            while ((!c4_exitg1) && ((real_T)c4_row <= c4_b_M)) {
              c4_i45 = c4_varargin_1->size[0];
              if ((c4_row < 1) || (c4_row > c4_i45)) {
                emlrtDynamicBoundsCheckR2012b(c4_row, 1, c4_i45, &c4_qb_emlrtBCI,
                  &c4_b_st);
              }

              c4_i49 = c4_varargin_1->size[1];
              c4_i52 = (int32_T)c4_d_col;
              if ((c4_i52 < 1) || (c4_i52 > c4_i49)) {
                emlrtDynamicBoundsCheckR2012b(c4_i52, 1, c4_i49, &c4_qb_emlrtBCI,
                  &c4_b_st);
              }

              if (c4_varargin_1->data[(c4_row + c4_varargin_1->size[0] * (c4_i52
                    - 1)) - 1]) {
                c4_row++;
              } else {
                c4_exitg1 = true;
              }
            }

            c4_i44 = c4_endRow->size[0];
            if ((c4_runCounter < 1) || (c4_runCounter > c4_i44)) {
              emlrtDynamicBoundsCheckR2012b(c4_runCounter, 1, c4_i44,
                &c4_sb_emlrtBCI, &c4_b_st);
            }

            c4_endRow->data[c4_runCounter - 1] = c4_row - 1;
            c4_runCounter++;
          }
        }
      }
    }

    c4_i17 = c4_regionLengths->size[0];
    c4_regionLengths->size[0] = c4_numRuns;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_regionLengths, c4_i17,
      &c4_rb_emlrtRTEI);
    c4_loop_ub = c4_numRuns - 1;
    for (c4_i19 = 0; c4_i19 <= c4_loop_ub; c4_i19++) {
      c4_regionLengths->data[c4_i19] = 0;
    }

    c4_e_k = 1;
    c4_currentColumn = 2;
    c4_nextLabel = 1;
    c4_firstRunOnPreviousColumn = -1;
    c4_lastRunOnPreviousColumn = 0;
    c4_firstRunOnThisColumn = 1;
    while (c4_e_k <= c4_numRuns) {
      c4_i35 = c4_startCol->size[0];
      if ((c4_e_k < 1) || (c4_e_k > c4_i35)) {
        emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i35, &c4_jb_emlrtBCI, &c4_st);
      }

      if (c4_startCol->data[c4_e_k - 1] == c4_currentColumn) {
        c4_firstRunOnPreviousColumn = c4_firstRunOnThisColumn;
        c4_firstRunOnThisColumn = c4_e_k;
        c4_lastRunOnPreviousColumn = c4_e_k;
        c4_i41 = c4_startCol->size[0];
        if ((c4_e_k < 1) || (c4_e_k > c4_i41)) {
          emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i41, &c4_rb_emlrtBCI,
            &c4_st);
        }

        c4_currentColumn = c4_startCol->data[c4_e_k - 1] + 1;
      } else {
        c4_i39 = c4_startCol->size[0];
        if ((c4_e_k < 1) || (c4_e_k > c4_i39)) {
          emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i39, &c4_mb_emlrtBCI,
            &c4_st);
        }

        if (c4_startCol->data[c4_e_k - 1] > c4_currentColumn) {
          c4_firstRunOnPreviousColumn = -1;
          c4_lastRunOnPreviousColumn = 0;
          c4_firstRunOnThisColumn = c4_e_k;
          c4_i42 = c4_startCol->size[0];
          if ((c4_e_k < 1) || (c4_e_k > c4_i42)) {
            emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i42, &c4_tb_emlrtBCI,
              &c4_st);
          }

          c4_currentColumn = c4_startCol->data[c4_e_k - 1] + 1;
        }
      }

      if (c4_firstRunOnPreviousColumn >= 0) {
        for (c4_p = c4_firstRunOnPreviousColumn; c4_p <
             c4_lastRunOnPreviousColumn; c4_p++) {
          c4_i47 = c4_endRow->size[0];
          if ((c4_e_k < 1) || (c4_e_k > c4_i47)) {
            emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i47, &c4_wb_emlrtBCI,
              &c4_st);
          }

          c4_i51 = c4_startRow->size[0];
          if ((c4_p < 1) || (c4_p > c4_i51)) {
            emlrtDynamicBoundsCheckR2012b(c4_p, 1, c4_i51, &c4_xb_emlrtBCI,
              &c4_st);
          }

          if (c4_endRow->data[c4_e_k - 1] >= c4_startRow->data[c4_p - 1] - 1) {
            c4_i55 = c4_startRow->size[0];
            if ((c4_e_k < 1) || (c4_e_k > c4_i55)) {
              emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i55, &c4_yb_emlrtBCI,
                &c4_st);
            }

            c4_i58 = c4_endRow->size[0];
            if ((c4_p < 1) || (c4_p > c4_i58)) {
              emlrtDynamicBoundsCheckR2012b(c4_p, 1, c4_i58, &c4_ac_emlrtBCI,
                &c4_st);
            }

            if (c4_startRow->data[c4_e_k - 1] <= c4_endRow->data[c4_p - 1] + 1)
            {
              c4_i60 = c4_regionLengths->size[0];
              if ((c4_e_k < 1) || (c4_e_k > c4_i60)) {
                emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i60, &c4_bc_emlrtBCI,
                  &c4_st);
              }

              if (c4_regionLengths->data[c4_e_k - 1] == 0) {
                c4_i62 = c4_regionLengths->size[0];
                if ((c4_p < 1) || (c4_p > c4_i62)) {
                  emlrtDynamicBoundsCheckR2012b(c4_p, 1, c4_i62, &c4_ec_emlrtBCI,
                    &c4_st);
                }

                c4_i65 = c4_regionLengths->size[0];
                if ((c4_e_k < 1) || (c4_e_k > c4_i65)) {
                  emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i65,
                    &c4_fc_emlrtBCI, &c4_st);
                }

                c4_regionLengths->data[c4_e_k - 1] = c4_regionLengths->data[c4_p
                  - 1];
                c4_nextLabel++;
              } else {
                c4_i61 = c4_regionLengths->size[0];
                if ((c4_e_k < 1) || (c4_e_k > c4_i61)) {
                  emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i61,
                    &c4_cc_emlrtBCI, &c4_st);
                }

                c4_i64 = c4_regionLengths->size[0];
                if ((c4_p < 1) || (c4_p > c4_i64)) {
                  emlrtDynamicBoundsCheckR2012b(c4_p, 1, c4_i64, &c4_dc_emlrtBCI,
                    &c4_st);
                }

                if (c4_regionLengths->data[c4_e_k - 1] != c4_regionLengths->
                    data[c4_p - 1]) {
                  c4_b_st.site = &c4_ub_emlrtRSI;
                  c4_g_k = c4_e_k;
                  c4_b_p = c4_p;
                  c4_c_st.site = &c4_vb_emlrtRSI;
                  c4_node = c4_g_k;
                  c4_root_k = c4_node;
                  do {
                    c4_exitg2 = 0;
                    c4_i68 = c4_regionLengths->size[0];
                    if ((c4_root_k < 1) || (c4_root_k > c4_i68)) {
                      emlrtDynamicBoundsCheckR2012b(c4_root_k, 1, c4_i68,
                        &c4_lc_emlrtBCI, &c4_c_st);
                    }

                    if (c4_root_k != c4_regionLengths->data[c4_root_k - 1]) {
                      c4_i70 = c4_regionLengths->size[0];
                      c4_i71 = c4_regionLengths->size[0];
                      if ((c4_root_k < 1) || (c4_root_k > c4_i71)) {
                        emlrtDynamicBoundsCheckR2012b(c4_root_k, 1, c4_i71,
                          &c4_mc_emlrtBCI, &c4_c_st);
                      }

                      c4_i73 = c4_regionLengths->data[c4_root_k - 1];
                      if ((c4_i73 < 1) || (c4_i73 > c4_i70)) {
                        emlrtDynamicBoundsCheckR2012b(c4_i73, 1, c4_i70,
                          &c4_mc_emlrtBCI, &c4_c_st);
                      }

                      c4_i74 = c4_regionLengths->size[0];
                      if ((c4_root_k < 1) || (c4_root_k > c4_i74)) {
                        emlrtDynamicBoundsCheckR2012b(c4_root_k, 1, c4_i74,
                          &c4_nc_emlrtBCI, &c4_c_st);
                      }

                      c4_regionLengths->data[c4_root_k - 1] =
                        c4_regionLengths->data[c4_i73 - 1];
                      c4_i77 = c4_regionLengths->size[0];
                      if ((c4_root_k < 1) || (c4_root_k > c4_i77)) {
                        emlrtDynamicBoundsCheckR2012b(c4_root_k, 1, c4_i77,
                          &c4_oc_emlrtBCI, &c4_c_st);
                      }

                      c4_root_k = c4_regionLengths->data[c4_root_k - 1];
                    } else {
                      c4_exitg2 = 1;
                    }
                  } while (c4_exitg2 == 0);

                  c4_c_st.site = &c4_wb_emlrtRSI;
                  c4_b_node = c4_b_p;
                  c4_root_p = c4_b_node;
                  do {
                    c4_exitg2 = 0;
                    c4_i75 = c4_regionLengths->size[0];
                    if ((c4_root_p < 1) || (c4_root_p > c4_i75)) {
                      emlrtDynamicBoundsCheckR2012b(c4_root_p, 1, c4_i75,
                        &c4_lc_emlrtBCI, &c4_c_st);
                    }

                    if (c4_root_p != c4_regionLengths->data[c4_root_p - 1]) {
                      c4_i78 = c4_regionLengths->size[0];
                      c4_i79 = c4_regionLengths->size[0];
                      if ((c4_root_p < 1) || (c4_root_p > c4_i79)) {
                        emlrtDynamicBoundsCheckR2012b(c4_root_p, 1, c4_i79,
                          &c4_mc_emlrtBCI, &c4_c_st);
                      }

                      c4_i81 = c4_regionLengths->data[c4_root_p - 1];
                      if ((c4_i81 < 1) || (c4_i81 > c4_i78)) {
                        emlrtDynamicBoundsCheckR2012b(c4_i81, 1, c4_i78,
                          &c4_mc_emlrtBCI, &c4_c_st);
                      }

                      c4_i82 = c4_regionLengths->size[0];
                      if ((c4_root_p < 1) || (c4_root_p > c4_i82)) {
                        emlrtDynamicBoundsCheckR2012b(c4_root_p, 1, c4_i82,
                          &c4_nc_emlrtBCI, &c4_c_st);
                      }

                      c4_regionLengths->data[c4_root_p - 1] =
                        c4_regionLengths->data[c4_i81 - 1];
                      c4_i85 = c4_regionLengths->size[0];
                      if ((c4_root_p < 1) || (c4_root_p > c4_i85)) {
                        emlrtDynamicBoundsCheckR2012b(c4_root_p, 1, c4_i85,
                          &c4_oc_emlrtBCI, &c4_c_st);
                      }

                      c4_root_p = c4_regionLengths->data[c4_root_p - 1];
                    } else {
                      c4_exitg2 = 1;
                    }
                  } while (c4_exitg2 == 0);

                  if (c4_root_k != c4_root_p) {
                    c4_c_st.site = &c4_xb_emlrtRSI;
                    c4_b_root_k = c4_root_k;
                    c4_b_root_p = c4_root_p;
                    c4_h_k = c4_g_k;
                    c4_c_p = c4_b_p;
                    if (c4_b_root_p < c4_b_root_k) {
                      c4_i84 = c4_regionLengths->size[0];
                      if ((c4_b_root_k < 1) || (c4_b_root_k > c4_i84)) {
                        emlrtDynamicBoundsCheckR2012b(c4_b_root_k, 1, c4_i84,
                          &c4_qc_emlrtBCI, &c4_c_st);
                      }

                      c4_regionLengths->data[c4_b_root_k - 1] = c4_b_root_p;
                      c4_i87 = c4_regionLengths->size[0];
                      if ((c4_h_k < 1) || (c4_h_k > c4_i87)) {
                        emlrtDynamicBoundsCheckR2012b(c4_h_k, 1, c4_i87,
                          &c4_sc_emlrtBCI, &c4_c_st);
                      }

                      c4_regionLengths->data[c4_h_k - 1] = c4_b_root_p;
                    } else {
                      c4_i83 = c4_regionLengths->size[0];
                      if ((c4_b_root_p < 1) || (c4_b_root_p > c4_i83)) {
                        emlrtDynamicBoundsCheckR2012b(c4_b_root_p, 1, c4_i83,
                          &c4_pc_emlrtBCI, &c4_c_st);
                      }

                      c4_regionLengths->data[c4_b_root_p - 1] = c4_b_root_k;
                      c4_i86 = c4_regionLengths->size[0];
                      if ((c4_c_p < 1) || (c4_c_p > c4_i86)) {
                        emlrtDynamicBoundsCheckR2012b(c4_c_p, 1, c4_i86,
                          &c4_rc_emlrtBCI, &c4_c_st);
                      }

                      c4_regionLengths->data[c4_c_p - 1] = c4_b_root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      c4_i43 = c4_regionLengths->size[0];
      if ((c4_e_k < 1) || (c4_e_k > c4_i43)) {
        emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i43, &c4_ub_emlrtBCI, &c4_st);
      }

      if (c4_regionLengths->data[c4_e_k - 1] == 0) {
        c4_i48 = c4_regionLengths->size[0];
        if ((c4_e_k < 1) || (c4_e_k > c4_i48)) {
          emlrtDynamicBoundsCheckR2012b(c4_e_k, 1, c4_i48, &c4_vb_emlrtBCI,
            &c4_st);
        }

        c4_regionLengths->data[c4_e_k - 1] = c4_nextLabel;
        c4_nextLabel++;
      }

      c4_e_k++;
    }
  }

  if (c4_numRuns == 0) {
    c4_CC->Connectivity = 8.0;
    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_CC->ImageSize[c4_i8] = (real_T)c4_varargin_1->size[c4_i8];
    }

    c4_CC->NumObjects = 0.0;
    c4_CC->RegionIndices->size[0] = 0;
    c4_i11 = c4_CC->RegionLengths->size[0];
    c4_CC->RegionLengths->size[0] = 1;
    c4_emxEnsureCapacity_int32_T(chartInstance, c4_sp, c4_CC->RegionLengths,
      c4_i11, &c4_tb_emlrtRTEI);
    c4_CC->RegionLengths->data[0] = 0;
  } else {
    c4_emxInit_int32_T(chartInstance, c4_sp, &c4_labelsRenumbered, 1,
                       &c4_ec_emlrtRTEI);
    c4_i7 = c4_labelsRenumbered->size[0];
    c4_labelsRenumbered->size[0] = c4_regionLengths->size[0];
    c4_st.site = &c4_ui_emlrtRSI;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_labelsRenumbered,
      c4_i7, &c4_sb_emlrtRTEI);
    c4_numComponents = 0.0;
    c4_st.site = &c4_qb_emlrtRSI;
    c4_b = c4_numRuns;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_b_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_numRuns; c4_c_k++) {
      c4_d_k = c4_c_k;
      c4_i22 = c4_regionLengths->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i22)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i22, &c4_lb_emlrtBCI, (void *)
          c4_sp);
      }

      if (c4_regionLengths->data[c4_d_k - 1] == c4_d_k) {
        c4_numComponents++;
        c4_i29 = c4_labelsRenumbered->size[0];
        if ((c4_d_k < 1) || (c4_d_k > c4_i29)) {
          emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i29, &c4_pb_emlrtBCI,
            (void *)c4_sp);
        }

        c4_labelsRenumbered->data[c4_d_k - 1] = (int32_T)c4_numComponents;
      }

      c4_i28 = c4_labelsRenumbered->size[0];
      c4_i32 = c4_regionLengths->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i32)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i32, &c4_nb_emlrtBCI, (void *)
          c4_sp);
      }

      c4_i36 = c4_regionLengths->data[c4_d_k - 1];
      if ((c4_i36 < 1) || (c4_i36 > c4_i28)) {
        emlrtDynamicBoundsCheckR2012b(c4_i36, 1, c4_i28, &c4_nb_emlrtBCI, (void *)
          c4_sp);
      }

      c4_i38 = c4_labelsRenumbered->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i38)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i38, &c4_ob_emlrtBCI, (void *)
          c4_sp);
      }

      c4_labelsRenumbered->data[c4_d_k - 1] = c4_labelsRenumbered->data[c4_i36 -
        1];
    }

    c4_i20 = c4_regionLengths->size[0];
    if (c4_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c4_numComponents)) {
      emlrtIntegerCheckR2012b(c4_numComponents, &c4_p_emlrtDCI, (void *)c4_sp);
    }

    c4_regionLengths->size[0] = (int32_T)c4_numComponents;
    c4_st.site = &c4_ti_emlrtRSI;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_regionLengths, c4_i20,
      &c4_ub_emlrtRTEI);
    if (c4_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c4_numComponents)) {
      emlrtIntegerCheckR2012b(c4_numComponents, &c4_p_emlrtDCI, (void *)c4_sp);
    }

    c4_b_loop_ub = (int32_T)c4_numComponents - 1;
    for (c4_i34 = 0; c4_i34 <= c4_b_loop_ub; c4_i34++) {
      c4_regionLengths->data[c4_i34] = 0;
    }

    c4_st.site = &c4_pb_emlrtRSI;
    c4_c_b = c4_numRuns;
    c4_d_b = c4_c_b;
    if (1 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_b_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_f_k = 1; c4_f_k - 1 < c4_numRuns; c4_f_k++) {
      c4_d_k = c4_f_k;
      c4_i46 = c4_labelsRenumbered->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i46)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i46, &c4_gc_emlrtBCI, (void *)
          c4_sp);
      }

      c4_idx = c4_labelsRenumbered->data[c4_d_k - 1];
      c4_i53 = c4_regionLengths->size[0];
      if ((c4_idx < 1) || (c4_idx > c4_i53)) {
        emlrtDynamicBoundsCheckR2012b(c4_idx, 1, c4_i53, &c4_hc_emlrtBCI, (void *)
          c4_sp);
      }

      c4_i54 = c4_endRow->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i54)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i54, &c4_ic_emlrtBCI, (void *)
          c4_sp);
      }

      c4_i57 = c4_startRow->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i57)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i57, &c4_jc_emlrtBCI, (void *)
          c4_sp);
      }

      c4_i59 = c4_regionLengths->size[0];
      if ((c4_idx < 1) || (c4_idx > c4_i59)) {
        emlrtDynamicBoundsCheckR2012b(c4_idx, 1, c4_i59, &c4_kc_emlrtBCI, (void *)
          c4_sp);
      }

      c4_regionLengths->data[c4_idx - 1] = ((c4_regionLengths->data[c4_idx - 1]
        + c4_endRow->data[c4_d_k - 1]) - c4_startRow->data[c4_d_k - 1]) + 1;
    }

    c4_emxInit_int32_T(chartInstance, c4_sp, &c4_b_regionLengths, 1,
                       &c4_vb_emlrtRTEI);
    c4_c_M = (real_T)c4_varargin_1->size[0];
    c4_st.site = &c4_ob_emlrtRSI;
    c4_r = &c4_st;
    c4_i50 = c4_b_regionLengths->size[0];
    c4_b_regionLengths->size[0] = c4_regionLengths->size[0];
    c4_b_st.site = &c4_si_emlrtRSI;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_b_st, c4_b_regionLengths,
      c4_i50, &c4_vb_emlrtRTEI);
    c4_c_loop_ub = c4_regionLengths->size[0] - 1;
    for (c4_i56 = 0; c4_i56 <= c4_c_loop_ub; c4_i56++) {
      c4_b_regionLengths->data[c4_i56] = c4_regionLengths->data[c4_i56];
    }

    c4_emxInit_real_T(chartInstance, &c4_st, &c4_pixelIdxList, 1,
                      &c4_cc_emlrtRTEI);
    c4_emxInit_int32_T(chartInstance, &c4_st, &c4_b_x, 1, &c4_xb_emlrtRTEI);
    c4_d1 = c4_sum(chartInstance, c4_r, c4_b_regionLengths);
    if (!(c4_d1 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c4_d1, &c4_r_emlrtDCI, &c4_st);
    }

    c4_d2 = c4_d1;
    if (c4_d2 != (real_T)(int32_T)muDoubleScalarFloor(c4_d2)) {
      emlrtIntegerCheckR2012b(c4_d2, &c4_q_emlrtDCI, &c4_st);
    }

    c4_iv[0] = (int32_T)c4_d2;
    c4_i63 = c4_pixelIdxList->size[0];
    c4_pixelIdxList->size[0] = c4_iv[0];
    c4_b_st.site = &c4_si_emlrtRSI;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_pixelIdxList, c4_i63,
      &c4_wb_emlrtRTEI);
    c4_b_st.site = &c4_nb_emlrtRSI;
    c4_i66 = c4_b_x->size[0];
    c4_b_x->size[0] = c4_regionLengths->size[0];
    c4_c_st.site = &c4_ri_emlrtRSI;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_c_st, c4_b_x, c4_i66,
      &c4_xb_emlrtRTEI);
    c4_d_loop_ub = c4_regionLengths->size[0] - 1;
    c4_emxFree_int32_T(chartInstance, &c4_b_regionLengths);
    for (c4_i67 = 0; c4_i67 <= c4_d_loop_ub; c4_i67++) {
      c4_b_x->data[c4_i67] = c4_regionLengths->data[c4_i67];
    }

    c4_c_st.site = &c4_nc_emlrtRSI;
    c4_dim = 2;
    if ((real_T)c4_b_x->size[0] != 1.0) {
      c4_dim = 1;
    }

    c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_c_x, 1, &c4_fb_emlrtRTEI);
    c4_i69 = c4_c_x->size[0];
    c4_c_x->size[0] = c4_b_x->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_c_st, c4_c_x, c4_i69,
      &c4_fb_emlrtRTEI);
    c4_e_loop_ub = c4_b_x->size[0] - 1;
    for (c4_i72 = 0; c4_i72 <= c4_e_loop_ub; c4_i72++) {
      c4_c_x->data[c4_i72] = c4_b_x->data[c4_i72];
    }

    c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_idxCount, 1,
                       &c4_yb_emlrtRTEI);
    c4_d_st.site = &c4_oc_emlrtRSI;
    c4_useConstantDim(chartInstance, &c4_d_st, c4_c_x, c4_dim, c4_b_x);
    c4_i76 = c4_idxCount->size[0];
    c4_idxCount->size[0] = 1 + c4_b_x->size[0];
    c4_b_st.site = &c4_ri_emlrtRSI;
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_b_st, c4_idxCount, c4_i76,
      &c4_yb_emlrtRTEI);
    c4_idxCount->data[0] = 0;
    c4_f_loop_ub = c4_b_x->size[0] - 1;
    c4_emxFree_int32_T(chartInstance, &c4_c_x);
    for (c4_i80 = 0; c4_i80 <= c4_f_loop_ub; c4_i80++) {
      c4_idxCount->data[c4_i80 + 1] = c4_b_x->data[c4_i80];
    }

    c4_emxFree_int32_T(chartInstance, &c4_b_x);
    c4_b_st.site = &c4_mb_emlrtRSI;
    c4_e_b = c4_numRuns;
    c4_f_b = c4_e_b;
    if (1 > c4_f_b) {
      c4_c_overflow = false;
    } else {
      c4_c_overflow = (c4_f_b > 2147483646);
    }

    if (c4_c_overflow) {
      c4_c_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_i_k = 1; c4_i_k - 1 < c4_numRuns; c4_i_k++) {
      c4_d_k = c4_i_k;
      c4_i88 = c4_startCol->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i88)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i88, &c4_tc_emlrtBCI, &c4_st);
      }

      c4_a = c4_startCol->data[c4_d_k - 1] - 1;
      c4_c = c4_a;
      c4_b_a = c4_c;
      c4_g_b = c4_c_M;
      c4_column_offset = c4_b_a * (int32_T)c4_g_b;
      c4_i91 = c4_labelsRenumbered->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i91)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i91, &c4_uc_emlrtBCI, &c4_st);
      }

      c4_idx = c4_labelsRenumbered->data[c4_d_k - 1];
      c4_i94 = c4_startRow->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i94)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i94, &c4_vc_emlrtBCI, &c4_st);
      }

      c4_i95 = c4_startRow->data[c4_d_k - 1];
      c4_i97 = c4_endRow->size[0];
      if ((c4_d_k < 1) || (c4_d_k > c4_i97)) {
        emlrtDynamicBoundsCheckR2012b(c4_d_k, 1, c4_i97, &c4_wc_emlrtBCI, &c4_st);
      }

      c4_i98 = c4_endRow->data[c4_d_k - 1];
      c4_b_st.site = &c4_lb_emlrtRSI;
      c4_c_a = c4_i95;
      c4_h_b = c4_i98;
      c4_d_a = c4_c_a;
      c4_i_b = c4_h_b;
      if (c4_d_a > c4_i_b) {
        c4_d_overflow = false;
      } else {
        c4_d_overflow = (c4_i_b > 2147483646);
      }

      if (c4_d_overflow) {
        c4_c_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      for (c4_rowidx = c4_i95; c4_rowidx <= c4_i98; c4_rowidx++) {
        c4_i99 = c4_idxCount->size[0];
        if ((c4_idx < 1) || (c4_idx > c4_i99)) {
          emlrtDynamicBoundsCheckR2012b(c4_idx, 1, c4_i99, &c4_xc_emlrtBCI,
            &c4_st);
        }

        c4_e_a = c4_idxCount->data[c4_idx - 1] + 1;
        c4_b_c = c4_e_a;
        c4_i100 = c4_idxCount->size[0];
        if ((c4_idx < 1) || (c4_idx > c4_i100)) {
          emlrtDynamicBoundsCheckR2012b(c4_idx, 1, c4_i100, &c4_yc_emlrtBCI,
            &c4_st);
        }

        c4_idxCount->data[c4_idx - 1] = c4_b_c;
        c4_i101 = c4_pixelIdxList->size[0];
        c4_i102 = c4_idxCount->size[0];
        if ((c4_idx < 1) || (c4_idx > c4_i102)) {
          emlrtDynamicBoundsCheckR2012b(c4_idx, 1, c4_i102, &c4_ad_emlrtBCI,
            &c4_st);
        }

        c4_i103 = c4_idxCount->data[c4_idx - 1];
        if ((c4_i103 < 1) || (c4_i103 > c4_i101)) {
          emlrtDynamicBoundsCheckR2012b(c4_i103, 1, c4_i101, &c4_ad_emlrtBCI,
            &c4_st);
        }

        c4_pixelIdxList->data[c4_i103 - 1] = (real_T)(c4_rowidx +
          c4_column_offset);
      }
    }

    c4_emxFree_int32_T(chartInstance, &c4_idxCount);
    c4_emxFree_int32_T(chartInstance, &c4_labelsRenumbered);
    c4_CC->Connectivity = 8.0;
    for (c4_i89 = 0; c4_i89 < 2; c4_i89++) {
      c4_CC->ImageSize[c4_i89] = (real_T)c4_varargin_1->size[c4_i89];
    }

    c4_CC->NumObjects = c4_numComponents;
    c4_i90 = c4_CC->RegionIndices->size[0];
    c4_CC->RegionIndices->size[0] = c4_pixelIdxList->size[0];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_CC->RegionIndices,
      c4_i90, &c4_ac_emlrtRTEI);
    c4_g_loop_ub = c4_pixelIdxList->size[0] - 1;
    for (c4_i92 = 0; c4_i92 <= c4_g_loop_ub; c4_i92++) {
      c4_CC->RegionIndices->data[c4_i92] = c4_pixelIdxList->data[c4_i92];
    }

    c4_emxFree_real_T(chartInstance, &c4_pixelIdxList);
    c4_i93 = c4_CC->RegionLengths->size[0];
    c4_CC->RegionLengths->size[0] = c4_regionLengths->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_CC->RegionLengths,
      c4_i93, &c4_bc_emlrtRTEI);
    c4_h_loop_ub = c4_regionLengths->size[0] - 1;
    for (c4_i96 = 0; c4_i96 <= c4_h_loop_ub; c4_i96++) {
      c4_CC->RegionLengths->data[c4_i96] = c4_regionLengths->data[c4_i96];
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_startCol);
  c4_emxFree_int32_T(chartInstance, &c4_endRow);
  c4_emxFree_int32_T(chartInstance, &c4_startRow);
  c4_emxFree_int32_T(chartInstance, &c4_regionLengths);
}

static real_T c4_sum(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c4_sp, c4_emxArray_int32_T *c4_b_x)
{
  c4_emxArray_int32_T *c4_c_x;
  c4_emxArray_int32_T *c4_d_x;
  c4_emxArray_int32_T *c4_e_x;
  c4_emxArray_int32_T *c4_f_x;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_st;
  real_T c4_b_y;
  real_T c4_s;
  int32_T c4_a;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_loop_ub;
  int32_T c4_b_vlen;
  int32_T c4_c_loop_ub;
  int32_T c4_c_vlen;
  int32_T c4_d_loop_ub;
  int32_T c4_d_vlen;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_ib;
  int32_T c4_inb;
  int32_T c4_lidx;
  int32_T c4_loop_ub;
  int32_T c4_nfb;
  int32_T c4_nleft;
  int32_T c4_vlen;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_yb_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_b_st.site = &c4_ac_emlrtRSI;
  c4_vlen = c4_b_x->size[0];
  c4_c_st.site = &c4_bc_emlrtRSI;
  c4_b_vlen = c4_vlen;
  c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_c_x, 1, &c4_lc_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_d_x, 1, &c4_jc_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_e_x, 1, &c4_kc_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, &c4_c_st, &c4_f_x, 1, &c4_ic_emlrtRTEI);
  if ((c4_b_x->size[0] == 0) || (c4_b_vlen == 0)) {
    c4_b_y = 0.0;
  } else {
    c4_d_st.site = &c4_cc_emlrtRSI;
    c4_c_vlen = c4_b_vlen;
    c4_e_st.site = &c4_dc_emlrtRSI;
    c4_d_vlen = c4_c_vlen;
    if (c4_d_vlen < 4096) {
      c4_i = c4_f_x->size[0];
      c4_f_x->size[0] = c4_b_x->size[0];
      c4_emxEnsureCapacity_int32_T(chartInstance, &c4_e_st, c4_f_x, c4_i,
        &c4_ic_emlrtRTEI);
      c4_loop_ub = c4_b_x->size[0] - 1;
      for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
        c4_f_x->data[c4_i1] = c4_b_x->data[c4_i1];
      }

      c4_f_st.site = &c4_ec_emlrtRSI;
      c4_b_y = c4_sumColumnB(chartInstance, &c4_f_st, c4_f_x, c4_d_vlen);
    } else {
      c4_a = c4_d_vlen;
      c4_nfb = c4_div_nzp_s32(chartInstance, c4_a, 4096, 0, 1U, 0, 0);
      c4_inb = c4_nfb << 12;
      c4_lidx = c4_inb;
      c4_nleft = c4_d_vlen - c4_inb;
      c4_i2 = c4_d_x->size[0];
      c4_d_x->size[0] = c4_b_x->size[0];
      c4_emxEnsureCapacity_int32_T(chartInstance, &c4_e_st, c4_d_x, c4_i2,
        &c4_jc_emlrtRTEI);
      c4_b_loop_ub = c4_b_x->size[0] - 1;
      for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
        c4_d_x->data[c4_i3] = c4_b_x->data[c4_i3];
      }

      c4_s = c4_sumColumnB4(chartInstance, c4_d_x, 1);
      c4_f_st.site = &c4_fc_emlrtRSI;
      c4_b = c4_nfb;
      c4_b_b = c4_b;
      if (2 > c4_b_b) {
        c4_overflow = false;
      } else {
        c4_overflow = (c4_b_b > 2147483646);
      }

      if (c4_overflow) {
        c4_g_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_g_st);
      }

      for (c4_ib = 1; c4_ib < c4_nfb; c4_ib++) {
        c4_i4 = c4_e_x->size[0];
        c4_e_x->size[0] = c4_b_x->size[0];
        c4_emxEnsureCapacity_int32_T(chartInstance, &c4_e_st, c4_e_x, c4_i4,
          &c4_kc_emlrtRTEI);
        c4_c_loop_ub = c4_b_x->size[0] - 1;
        for (c4_i6 = 0; c4_i6 <= c4_c_loop_ub; c4_i6++) {
          c4_e_x->data[c4_i6] = c4_b_x->data[c4_i6];
        }

        c4_s += c4_sumColumnB4(chartInstance, c4_e_x, 1 + (c4_ib << 12));
      }

      if (c4_nleft > 0) {
        c4_i5 = c4_c_x->size[0];
        c4_c_x->size[0] = c4_b_x->size[0];
        c4_emxEnsureCapacity_int32_T(chartInstance, &c4_e_st, c4_c_x, c4_i5,
          &c4_lc_emlrtRTEI);
        c4_d_loop_ub = c4_b_x->size[0] - 1;
        for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
          c4_c_x->data[c4_i7] = c4_b_x->data[c4_i7];
        }

        c4_f_st.site = &c4_gc_emlrtRSI;
        c4_s += c4_b_sumColumnB(chartInstance, &c4_f_st, c4_c_x, c4_nleft,
          c4_lidx + 1);
      }

      c4_b_y = c4_s;
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_f_x);
  c4_emxFree_int32_T(chartInstance, &c4_e_x);
  c4_emxFree_int32_T(chartInstance, &c4_d_x);
  c4_emxFree_int32_T(chartInstance, &c4_c_x);
  return c4_b_y;
}

static real_T c4_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T *c4_b_x, int32_T c4_vlen)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_y;
  real_T c4_c_y;
  real_T c4_d_y;
  int32_T c4_a;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_k;
  int32_T c4_b_vlen;
  int32_T c4_b_vstart;
  int32_T c4_c_b;
  int32_T c4_c_k;
  int32_T c4_c_vlen;
  int32_T c4_d_b;
  int32_T c4_d_k;
  int32_T c4_e_b;
  int32_T c4_e_k;
  int32_T c4_f_b;
  int32_T c4_f_k;
  int32_T c4_g_k;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i_k;
  int32_T c4_inb;
  int32_T c4_k;
  int32_T c4_lidx;
  int32_T c4_nfb;
  int32_T c4_nleft;
  int32_T c4_vstart;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  if (c4_vlen <= 1024) {
    c4_st.site = &c4_hc_emlrtRSI;
    c4_b_vlen = c4_vlen - 1;
    c4_b_y = (real_T)c4_b_x->data[0];
    c4_i = c4_b_vlen;
    c4_b_st.site = &c4_mc_emlrtRSI;
    c4_b = c4_i;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_c_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_i; c4_c_k++) {
      c4_d_k = c4_c_k;
      c4_b_y += (real_T)c4_b_x->data[c4_d_k];
    }
  } else {
    c4_a = c4_vlen;
    c4_nfb = c4_div_nzp_s32(chartInstance, c4_a, 1024, 0, 1U, 0, 0);
    c4_inb = c4_nfb << 10;
    c4_st.site = &c4_ic_emlrtRSI;
    c4_b_y = (real_T)c4_b_x->data[0];
    c4_b_st.site = &c4_mc_emlrtRSI;
    for (c4_k = 1; c4_k - 1 < 1023; c4_k++) {
      c4_b_k = c4_k;
      c4_b_y += (real_T)c4_b_x->data[c4_b_k];
    }

    c4_st.site = &c4_jc_emlrtRSI;
    c4_c_b = c4_nfb;
    c4_d_b = c4_c_b;
    if (2 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_b_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_e_k = 1; c4_e_k < c4_nfb; c4_e_k++) {
      c4_st.site = &c4_kc_emlrtRSI;
      c4_vstart = c4_e_k << 10;
      c4_c_y = (real_T)c4_b_x->data[c4_vstart];
      c4_b_st.site = &c4_mc_emlrtRSI;
      for (c4_f_k = 1; c4_f_k - 1 < 1023; c4_f_k++) {
        c4_g_k = c4_f_k;
        c4_c_y += (real_T)c4_b_x->data[c4_vstart + c4_g_k];
      }

      c4_b_y += c4_c_y;
    }

    if (c4_vlen > c4_inb) {
      c4_nleft = c4_vlen - c4_inb;
      c4_lidx = c4_inb;
      c4_st.site = &c4_lc_emlrtRSI;
      c4_c_vlen = c4_nleft - 1;
      c4_b_vstart = c4_lidx;
      c4_d_y = (real_T)c4_b_x->data[c4_b_vstart];
      c4_i1 = c4_c_vlen;
      c4_b_st.site = &c4_mc_emlrtRSI;
      c4_e_b = c4_i1;
      c4_f_b = c4_e_b;
      if (1 > c4_f_b) {
        c4_c_overflow = false;
      } else {
        c4_c_overflow = (c4_f_b > 2147483646);
      }

      if (c4_c_overflow) {
        c4_c_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      for (c4_h_k = 1; c4_h_k - 1 < c4_i1; c4_h_k++) {
        c4_i_k = c4_h_k;
        c4_d_y += (real_T)c4_b_x->data[c4_b_vstart + c4_i_k];
      }

      c4_b_y += c4_d_y;
    }
  }

  return c4_b_y;
}

static real_T c4_sumColumnB4(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_int32_T *c4_b_x, int32_T c4_vstart)
{
  real_T c4_psum1;
  real_T c4_psum2;
  real_T c4_psum3;
  real_T c4_psum4;
  int32_T c4_b_k;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_k;
  (void)chartInstance;
  c4_i2 = c4_vstart + 1023;
  c4_i3 = c4_vstart + 2047;
  c4_i4 = c4_vstart + 3071;
  c4_psum1 = (real_T)c4_b_x->data[c4_vstart - 1];
  c4_psum2 = (real_T)c4_b_x->data[c4_i2];
  c4_psum3 = (real_T)c4_b_x->data[c4_i3];
  c4_psum4 = (real_T)c4_b_x->data[c4_i4];
  for (c4_k = 0; c4_k < 1023; c4_k++) {
    c4_b_k = c4_k + 1;
    c4_psum1 += (real_T)c4_b_x->data[(c4_vstart + c4_b_k) - 1];
    c4_psum2 += (real_T)c4_b_x->data[c4_i2 + c4_b_k];
    c4_psum3 += (real_T)c4_b_x->data[c4_i3 + c4_b_k];
    c4_psum4 += (real_T)c4_b_x->data[c4_i4 + c4_b_k];
  }

  return (c4_psum1 + c4_psum2) + (c4_psum3 + c4_psum4);
}

static real_T c4_b_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T *c4_b_x, int32_T c4_vlen, int32_T
  c4_vstart)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_y;
  real_T c4_c_y;
  real_T c4_d_y;
  int32_T c4_a;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_k;
  int32_T c4_b_vlen;
  int32_T c4_b_vstart;
  int32_T c4_c_b;
  int32_T c4_c_k;
  int32_T c4_c_vlen;
  int32_T c4_c_vstart;
  int32_T c4_d_b;
  int32_T c4_d_k;
  int32_T c4_d_vstart;
  int32_T c4_e_b;
  int32_T c4_e_k;
  int32_T c4_e_vstart;
  int32_T c4_f_b;
  int32_T c4_f_k;
  int32_T c4_g_k;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i_k;
  int32_T c4_inb;
  int32_T c4_k;
  int32_T c4_lidx;
  int32_T c4_nfb;
  int32_T c4_nleft;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  if (c4_vlen <= 1024) {
    c4_st.site = &c4_hc_emlrtRSI;
    c4_b_vlen = c4_vlen - 1;
    c4_b_vstart = c4_vstart - 1;
    c4_b_y = (real_T)c4_b_x->data[c4_b_vstart];
    c4_i = c4_b_vlen;
    c4_b_st.site = &c4_mc_emlrtRSI;
    c4_b = c4_i;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_c_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_i; c4_c_k++) {
      c4_d_k = c4_c_k;
      c4_b_y += (real_T)c4_b_x->data[c4_b_vstart + c4_d_k];
    }
  } else {
    c4_a = c4_vlen;
    c4_nfb = c4_div_nzp_s32(chartInstance, c4_a, 1024, 0, 1U, 0, 0);
    c4_inb = c4_nfb << 10;
    c4_st.site = &c4_ic_emlrtRSI;
    c4_c_vstart = c4_vstart - 1;
    c4_b_y = (real_T)c4_b_x->data[c4_c_vstart];
    c4_b_st.site = &c4_mc_emlrtRSI;
    for (c4_k = 1; c4_k - 1 < 1023; c4_k++) {
      c4_b_k = c4_k;
      c4_b_y += (real_T)c4_b_x->data[c4_c_vstart + c4_b_k];
    }

    c4_st.site = &c4_jc_emlrtRSI;
    c4_c_b = c4_nfb;
    c4_d_b = c4_c_b;
    if (2 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_b_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_e_k = 1; c4_e_k < c4_nfb; c4_e_k++) {
      c4_st.site = &c4_kc_emlrtRSI;
      c4_d_vstart = (c4_vstart + (c4_e_k << 10)) - 1;
      c4_c_y = (real_T)c4_b_x->data[c4_d_vstart];
      c4_b_st.site = &c4_mc_emlrtRSI;
      for (c4_f_k = 1; c4_f_k - 1 < 1023; c4_f_k++) {
        c4_g_k = c4_f_k;
        c4_c_y += (real_T)c4_b_x->data[c4_d_vstart + c4_g_k];
      }

      c4_b_y += c4_c_y;
    }

    if (c4_vlen > c4_inb) {
      c4_nleft = c4_vlen - c4_inb;
      c4_lidx = c4_vstart + c4_inb;
      c4_st.site = &c4_lc_emlrtRSI;
      c4_c_vlen = c4_nleft - 1;
      c4_e_vstart = c4_lidx - 1;
      c4_d_y = (real_T)c4_b_x->data[c4_e_vstart];
      c4_i1 = c4_c_vlen;
      c4_b_st.site = &c4_mc_emlrtRSI;
      c4_e_b = c4_i1;
      c4_f_b = c4_e_b;
      if (1 > c4_f_b) {
        c4_c_overflow = false;
      } else {
        c4_c_overflow = (c4_f_b > 2147483646);
      }

      if (c4_c_overflow) {
        c4_c_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      for (c4_h_k = 1; c4_h_k - 1 < c4_i1; c4_h_k++) {
        c4_i_k = c4_h_k;
        c4_d_y += (real_T)c4_b_x->data[c4_e_vstart + c4_i_k];
      }

      c4_b_y += c4_d_y;
    }
  }

  return c4_b_y;
}

static void c4_useConstantDim(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T *c4_varargin_2, int32_T c4_varargin_3,
  c4_emxArray_int32_T *c4_varargout_1)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_k;
  int32_T c4_loop_ub;
  int32_T c4_nx;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  if (1 == c4_varargin_3) {
    c4_st.site = &c4_pc_emlrtRSI;
    c4_i1 = c4_varargout_1->size[0];
    c4_varargout_1->size[0] = c4_varargin_2->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_varargout_1, c4_i1,
      &c4_mc_emlrtRTEI);
    c4_b_loop_ub = c4_varargin_2->size[0] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
      c4_varargout_1->data[c4_i3] = c4_varargin_2->data[c4_i3];
    }

    c4_b_st.site = &c4_qc_emlrtRSI;
    if (c4_varargout_1->size[0] != 0) {
      c4_c_st.site = &c4_rc_emlrtRSI;
      c4_nx = c4_varargout_1->size[0] - 1;
      if (!((real_T)c4_varargout_1->size[0] == 1.0)) {
        c4_i4 = c4_nx;
        c4_d_st.site = &c4_sc_emlrtRSI;
        c4_b = c4_i4;
        c4_b_b = c4_b;
        if (1 > c4_b_b) {
          c4_overflow = false;
        } else {
          c4_overflow = (c4_b_b > 2147483646);
        }

        if (c4_overflow) {
          c4_e_st.site = &c4_p_emlrtRSI;
          c4_check_forloop_overflow_error(chartInstance, &c4_e_st);
        }

        for (c4_k = 1; c4_k - 1 < c4_i4; c4_k++) {
          c4_b_k = c4_k;
          c4_varargout_1->data[c4_b_k] += c4_varargout_1->data[c4_b_k - 1];
        }
      }
    }
  } else {
    c4_i = c4_varargout_1->size[0];
    c4_varargout_1->size[0] = c4_varargin_2->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, c4_sp, c4_varargout_1, c4_i,
      &c4_mc_emlrtRTEI);
    c4_loop_ub = c4_varargin_2->size[0] - 1;
    for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
      c4_varargout_1->data[c4_i2] = c4_varargin_2->data[c4_i2];
    }
  }
}

static void c4_assertValidSizeArg(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_varargin_1)
{
  static char_T c4_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c4_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  real_T c4_arg;
  real_T c4_b_arg;
  real_T c4_b_varargin_1;
  real_T c4_b_x;
  real_T c4_n;
  int32_T c4_b_u;
  int32_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_p;
  (void)chartInstance;
  c4_arg = c4_varargin_1;
  if (c4_arg != c4_arg) {
    c4_p = false;
  } else {
    c4_b_x = c4_arg;
    c4_b = muDoubleScalarIsInf(c4_b_x);
    if (c4_b) {
      c4_p = false;
    } else {
      c4_p = true;
    }
  }

  if (c4_p) {
    c4_b_arg = c4_varargin_1;
    if (c4_b_arg > 2.147483647E+9) {
      c4_b_p = false;
    } else {
      c4_b_p = true;
    }

    if (c4_b_p) {
      c4_b_b = true;
    } else {
      c4_b_b = false;
    }
  } else {
    c4_b_b = false;
  }

  if (!c4_b_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c4_u = MIN_int32_T;
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), false);
    c4_b_u = MAX_int32_T;
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_b_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(c4_sp, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 3U, 14, c4_c_y, 14, c4_d_y, 14, c4_g_y)));
  }

  c4_b_varargin_1 = c4_varargin_1;
  if (c4_b_varargin_1 <= 0.0) {
    c4_n = 0.0;
  } else {
    c4_n = c4_b_varargin_1;
  }

  if (!(c4_n <= 2.147483647E+9)) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c4_sp, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_f_y)));
  }
}

static void c4_ind2sub_indexClass(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_siz[2], c4_emxArray_real_T *c4_ndx,
  c4_emxArray_int32_T *c4_varargout_1, c4_emxArray_int32_T *c4_varargout_2)
{
  static char_T c4_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'd', '2', 's', 'u', 'b', '_', 'I', 'n', 'd', 'e',
    'x', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  c4_emxArray_int32_T *c4_vk;
  emlrtStack c4_st;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  real_T c4_b;
  real_T c4_b_k;
  real_T c4_d;
  int32_T c4_b_loop_ub;
  int32_T c4_b_y;
  int32_T c4_c_b;
  int32_T c4_c_loop_ub;
  int32_T c4_cpsiz;
  int32_T c4_d_b;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_hi;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_k;
  int32_T c4_loop_ub;
  int32_T c4_maxndx;
  boolean_T c4_b_b;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_i = c4_varargout_1->size[0];
  c4_varargout_1->size[0] = c4_ndx->size[0];
  c4_st.site = &c4_qi_emlrtRSI;
  c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_varargout_1, c4_i,
    &c4_nc_emlrtRTEI);
  c4_loop_ub = c4_ndx->size[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_varargout_1->data[c4_i1] = (int32_T)c4_ndx->data[c4_i1];
  }

  c4_cpsiz = (int32_T)c4_siz[0];
  c4_b = c4_siz[1];
  c4_b_y = (int32_T)c4_b;
  c4_maxndx = c4_cpsiz * c4_b_y;
  c4_hi = c4_maxndx;
  c4_d = (real_T)c4_varargout_1->size[0];
  c4_i2 = (int32_T)c4_d - 1;
  c4_k = 0;
  do {
    c4_exitg1 = 0;
    if (c4_k <= c4_i2) {
      c4_b_k = (real_T)c4_k + 1.0;
      if (c4_varargout_1->data[(int32_T)c4_b_k - 1] <= c4_hi) {
        c4_b_b = true;
      } else {
        c4_b_b = false;
      }

      if (!c4_b_b) {
        c4_p = false;
        c4_exitg1 = 1;
      } else {
        c4_k++;
      }
    } else {
      c4_p = true;
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  if (!c4_p) {
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c4_sp, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_d_y)));
  }

  c4_i3 = c4_varargout_1->size[0];
  c4_st.site = &c4_pi_emlrtRSI;
  c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_varargout_1, c4_i3,
    &c4_oc_emlrtRTEI);
  c4_b_loop_ub = c4_varargout_1->size[0] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
    c4_varargout_1->data[c4_i4]--;
  }

  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_vk, 1, &c4_pc_emlrtRTEI);
  c4_c_b = c4_cpsiz;
  c4_i5 = c4_vk->size[0];
  c4_vk->size[0] = c4_varargout_1->size[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_sp, c4_vk, c4_i5,
    &c4_pc_emlrtRTEI);
  c4_c_loop_ub = c4_varargout_1->size[0] - 1;
  for (c4_i6 = 0; c4_i6 <= c4_c_loop_ub; c4_i6++) {
    c4_vk->data[c4_i6] = c4_div_s32(chartInstance, c4_varargout_1->data[c4_i6],
      c4_c_b, 0, 1U, 0, 0);
  }

  c4_i7 = c4_varargout_2->size[0];
  c4_varargout_2->size[0] = c4_vk->size[0];
  c4_st.site = &c4_oi_emlrtRSI;
  c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_varargout_2, c4_i7,
    &c4_qc_emlrtRTEI);
  c4_d_loop_ub = c4_vk->size[0] - 1;
  for (c4_i8 = 0; c4_i8 <= c4_d_loop_ub; c4_i8++) {
    c4_varargout_2->data[c4_i8] = c4_vk->data[c4_i8] + 1;
  }

  c4_d_b = c4_cpsiz;
  c4_i9 = c4_vk->size[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_sp, c4_vk, c4_i9,
    &c4_rc_emlrtRTEI);
  c4_e_loop_ub = c4_vk->size[0] - 1;
  for (c4_i10 = 0; c4_i10 <= c4_e_loop_ub; c4_i10++) {
    c4_vk->data[c4_i10] *= c4_d_b;
  }

  c4_i11 = c4_varargout_1->size[0];
  c4_st.site = &c4_ni_emlrtRSI;
  c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_varargout_1, c4_i11,
    &c4_sc_emlrtRTEI);
  c4_f_loop_ub = c4_varargout_1->size[0] - 1;
  for (c4_i12 = 0; c4_i12 <= c4_f_loop_ub; c4_i12++) {
    c4_varargout_1->data[c4_i12] -= c4_vk->data[c4_i12];
  }

  c4_emxFree_int32_T(chartInstance, &c4_vk);
  c4_i13 = c4_varargout_1->size[0];
  c4_st.site = &c4_mi_emlrtRSI;
  c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_varargout_1, c4_i13,
    &c4_tc_emlrtRTEI);
  c4_g_loop_ub = c4_varargout_1->size[0] - 1;
  for (c4_i14 = 0; c4_i14 <= c4_g_loop_ub; c4_i14++) {
    c4_varargout_1->data[c4_i14]++;
  }
}

static void c4_ComputeCentroid(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_imageSize[2], c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c4_stats, c4_sHtk0WM4OMtyqkehwQYcq2 c4_statsAlreadyComputed,
  c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c4_b_stats, c4_sHtk0WM4OMtyqkehwQYcq2
  *c4_b_statsAlreadyComputed)
{
  real_T c4_b_imageSize[2];
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_loop_ub;
  c4_i = c4_b_stats->size[0];
  c4_b_stats->size[0] = c4_stats->size[0];
  c4_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, c4_sp, c4_b_stats, c4_i,
    &c4_uc_emlrtRTEI);
  c4_loop_ub = c4_stats->size[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, c4_sp, &c4_b_stats->
      data[c4_i1], &c4_stats->data[c4_i1], &c4_uc_emlrtRTEI);
  }

  *c4_b_statsAlreadyComputed = c4_statsAlreadyComputed;
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_b_imageSize[c4_i2] = c4_imageSize[c4_i2];
  }

  c4_b_ComputeCentroid(chartInstance, c4_sp, c4_b_imageSize, c4_b_stats,
                       c4_b_statsAlreadyComputed);
}

static real_T c4_c_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T *c4_b_x, int32_T c4_col, int32_T c4_vlen)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_y;
  real_T c4_c_y;
  real_T c4_d_y;
  int32_T c4_a;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_col;
  int32_T c4_b_i0;
  int32_T c4_b_k;
  int32_T c4_b_vlen;
  int32_T c4_b_vstart;
  int32_T c4_c_b;
  int32_T c4_c_col;
  int32_T c4_c_i0;
  int32_T c4_c_k;
  int32_T c4_c_vlen;
  int32_T c4_d_b;
  int32_T c4_d_col;
  int32_T c4_d_i0;
  int32_T c4_d_k;
  int32_T c4_e_b;
  int32_T c4_e_col;
  int32_T c4_e_k;
  int32_T c4_f_b;
  int32_T c4_f_k;
  int32_T c4_g_k;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i0;
  int32_T c4_i1;
  int32_T c4_i_k;
  int32_T c4_inb;
  int32_T c4_k;
  int32_T c4_lidx;
  int32_T c4_nfb;
  int32_T c4_nleft;
  int32_T c4_vstart;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  if (c4_vlen <= 1024) {
    c4_st.site = &c4_hc_emlrtRSI;
    c4_b_col = c4_col - 1;
    c4_b_vlen = c4_vlen - 1;
    c4_i0 = c4_b_col * c4_b_x->size[0];
    c4_b_y = c4_b_x->data[c4_i0];
    c4_i = c4_b_vlen;
    c4_b_st.site = &c4_mc_emlrtRSI;
    c4_b = c4_i;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_c_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_i; c4_c_k++) {
      c4_d_k = c4_c_k;
      c4_b_y += c4_b_x->data[c4_i0 + c4_d_k];
    }
  } else {
    c4_a = c4_vlen;
    c4_nfb = c4_div_nzp_s32(chartInstance, c4_a, 1024, 0, 1U, 0, 0);
    c4_inb = c4_nfb << 10;
    c4_st.site = &c4_ic_emlrtRSI;
    c4_c_col = c4_col - 1;
    c4_b_i0 = c4_c_col * c4_b_x->size[0];
    c4_b_y = c4_b_x->data[c4_b_i0];
    c4_b_st.site = &c4_mc_emlrtRSI;
    for (c4_k = 1; c4_k - 1 < 1023; c4_k++) {
      c4_b_k = c4_k;
      c4_b_y += c4_b_x->data[c4_b_i0 + c4_b_k];
    }

    c4_st.site = &c4_jc_emlrtRSI;
    c4_c_b = c4_nfb;
    c4_d_b = c4_c_b;
    if (2 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_b_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_e_k = 1; c4_e_k < c4_nfb; c4_e_k++) {
      c4_st.site = &c4_kc_emlrtRSI;
      c4_d_col = c4_col - 1;
      c4_vstart = c4_e_k << 10;
      c4_c_i0 = c4_vstart + c4_d_col * c4_b_x->size[0];
      c4_c_y = c4_b_x->data[c4_c_i0];
      c4_b_st.site = &c4_mc_emlrtRSI;
      for (c4_f_k = 1; c4_f_k - 1 < 1023; c4_f_k++) {
        c4_g_k = c4_f_k;
        c4_c_y += c4_b_x->data[c4_c_i0 + c4_g_k];
      }

      c4_b_y += c4_c_y;
    }

    if (c4_vlen > c4_inb) {
      c4_nleft = c4_vlen - c4_inb;
      c4_lidx = c4_inb;
      c4_st.site = &c4_lc_emlrtRSI;
      c4_e_col = c4_col - 1;
      c4_c_vlen = c4_nleft - 1;
      c4_b_vstart = c4_lidx + 1;
      c4_d_i0 = (c4_b_vstart + c4_e_col * c4_b_x->size[0]) - 1;
      c4_d_y = c4_b_x->data[c4_d_i0];
      c4_i1 = c4_c_vlen;
      c4_b_st.site = &c4_mc_emlrtRSI;
      c4_e_b = c4_i1;
      c4_f_b = c4_e_b;
      if (1 > c4_f_b) {
        c4_c_overflow = false;
      } else {
        c4_c_overflow = (c4_f_b > 2147483646);
      }

      if (c4_c_overflow) {
        c4_c_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      for (c4_h_k = 1; c4_h_k - 1 < c4_i1; c4_h_k++) {
        c4_i_k = c4_h_k;
        c4_d_y += c4_b_x->data[c4_d_i0 + c4_i_k];
      }

      c4_b_y += c4_d_y;
    }
  }

  return c4_b_y;
}

static real_T c4_b_sumColumnB4(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_real_T *c4_b_x, int32_T c4_col, int32_T c4_vstart)
{
  real_T c4_psum1;
  real_T c4_psum2;
  real_T c4_psum3;
  real_T c4_psum4;
  int32_T c4_b_k;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_k;
  (void)chartInstance;
  c4_i1 = (c4_vstart + (c4_col - 1) * c4_b_x->size[0]) - 1;
  c4_i2 = c4_i1 + 1024;
  c4_i3 = c4_i1 + 2048;
  c4_i4 = c4_i1 + 3072;
  c4_psum1 = c4_b_x->data[c4_i1];
  c4_psum2 = c4_b_x->data[c4_i2];
  c4_psum3 = c4_b_x->data[c4_i3];
  c4_psum4 = c4_b_x->data[c4_i4];
  for (c4_k = 0; c4_k < 1023; c4_k++) {
    c4_b_k = c4_k + 1;
    c4_psum1 += c4_b_x->data[c4_i1 + c4_b_k];
    c4_psum2 += c4_b_x->data[c4_i2 + c4_b_k];
    c4_psum3 += c4_b_x->data[c4_i3 + c4_b_k];
    c4_psum4 += c4_b_x->data[c4_i4 + c4_b_k];
  }

  return (c4_psum1 + c4_psum2) + (c4_psum3 + c4_psum4);
}

static real_T c4_d_sumColumnB(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T *c4_b_x, int32_T c4_col, int32_T c4_vlen,
  int32_T c4_vstart)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_y;
  real_T c4_c_y;
  real_T c4_d_y;
  int32_T c4_a;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_col;
  int32_T c4_b_i0;
  int32_T c4_b_k;
  int32_T c4_b_vlen;
  int32_T c4_b_vstart;
  int32_T c4_c_b;
  int32_T c4_c_col;
  int32_T c4_c_i0;
  int32_T c4_c_k;
  int32_T c4_c_vlen;
  int32_T c4_c_vstart;
  int32_T c4_d_b;
  int32_T c4_d_col;
  int32_T c4_d_i0;
  int32_T c4_d_k;
  int32_T c4_d_vstart;
  int32_T c4_e_b;
  int32_T c4_e_col;
  int32_T c4_e_k;
  int32_T c4_e_vstart;
  int32_T c4_f_b;
  int32_T c4_f_k;
  int32_T c4_g_k;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i0;
  int32_T c4_i1;
  int32_T c4_i_k;
  int32_T c4_inb;
  int32_T c4_k;
  int32_T c4_lidx;
  int32_T c4_nfb;
  int32_T c4_nleft;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  if (c4_vlen <= 1024) {
    c4_st.site = &c4_hc_emlrtRSI;
    c4_b_col = c4_col - 1;
    c4_b_vlen = c4_vlen - 1;
    c4_b_vstart = c4_vstart;
    c4_i0 = (c4_b_vstart + c4_b_col * c4_b_x->size[0]) - 1;
    c4_b_y = c4_b_x->data[c4_i0];
    c4_i = c4_b_vlen;
    c4_b_st.site = &c4_mc_emlrtRSI;
    c4_b = c4_i;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_c_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_i; c4_c_k++) {
      c4_d_k = c4_c_k;
      c4_b_y += c4_b_x->data[c4_i0 + c4_d_k];
    }
  } else {
    c4_a = c4_vlen;
    c4_nfb = c4_div_nzp_s32(chartInstance, c4_a, 1024, 0, 1U, 0, 0);
    c4_inb = c4_nfb << 10;
    c4_st.site = &c4_ic_emlrtRSI;
    c4_c_col = c4_col - 1;
    c4_c_vstart = c4_vstart;
    c4_b_i0 = (c4_c_vstart + c4_c_col * c4_b_x->size[0]) - 1;
    c4_b_y = c4_b_x->data[c4_b_i0];
    c4_b_st.site = &c4_mc_emlrtRSI;
    for (c4_k = 1; c4_k - 1 < 1023; c4_k++) {
      c4_b_k = c4_k;
      c4_b_y += c4_b_x->data[c4_b_i0 + c4_b_k];
    }

    c4_st.site = &c4_jc_emlrtRSI;
    c4_c_b = c4_nfb;
    c4_d_b = c4_c_b;
    if (2 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_b_st.site = &c4_p_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_e_k = 1; c4_e_k < c4_nfb; c4_e_k++) {
      c4_st.site = &c4_kc_emlrtRSI;
      c4_d_col = c4_col - 1;
      c4_d_vstart = c4_vstart + (c4_e_k << 10);
      c4_c_i0 = (c4_d_vstart + c4_d_col * c4_b_x->size[0]) - 1;
      c4_c_y = c4_b_x->data[c4_c_i0];
      c4_b_st.site = &c4_mc_emlrtRSI;
      for (c4_f_k = 1; c4_f_k - 1 < 1023; c4_f_k++) {
        c4_g_k = c4_f_k;
        c4_c_y += c4_b_x->data[c4_c_i0 + c4_g_k];
      }

      c4_b_y += c4_c_y;
    }

    if (c4_vlen > c4_inb) {
      c4_nleft = c4_vlen - c4_inb;
      c4_lidx = c4_vstart + c4_inb;
      c4_st.site = &c4_lc_emlrtRSI;
      c4_e_col = c4_col - 1;
      c4_c_vlen = c4_nleft - 1;
      c4_e_vstart = c4_lidx;
      c4_d_i0 = (c4_e_vstart + c4_e_col * c4_b_x->size[0]) - 1;
      c4_d_y = c4_b_x->data[c4_d_i0];
      c4_i1 = c4_c_vlen;
      c4_b_st.site = &c4_mc_emlrtRSI;
      c4_e_b = c4_i1;
      c4_f_b = c4_e_b;
      if (1 > c4_f_b) {
        c4_c_overflow = false;
      } else {
        c4_c_overflow = (c4_f_b > 2147483646);
      }

      if (c4_c_overflow) {
        c4_c_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      for (c4_h_k = 1; c4_h_k - 1 < c4_i1; c4_h_k++) {
        c4_i_k = c4_h_k;
        c4_d_y += c4_b_x->data[c4_d_i0 + c4_i_k];
      }

      c4_b_y += c4_d_y;
    }
  }

  return c4_b_y;
}

static void c4_power(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c4_sp, c4_emxArray_real_T *c4_a, c4_emxArray_real_T
                     *c4_b_y)
{
  static char_T c4_cv[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  c4_emxArray_real_T *c4_ztemp;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_e_y = NULL;
  real_T c4_dv[2];
  real_T c4_b_a;
  real_T c4_d_y;
  int32_T c4_iv[1];
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_k;
  int32_T c4_nx;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_ztemp, 1, &c4_ad_emlrtRTEI);
  c4_st.site = &c4_pg_emlrtRSI;
  c4_b_st.site = &c4_qg_emlrtRSI;
  c4_c_st.site = &c4_i_emlrtRSI;
  c4_d_st.site = &c4_k_emlrtRSI;
  c4_dv[0] = (real_T)c4_a->size[0];
  c4_i = c4_ztemp->size[0];
  c4_ztemp->size[0] = (int32_T)c4_dv[0];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_d_st, c4_ztemp, c4_i,
    &c4_vc_emlrtRTEI);
  c4_iv[0] = c4_ztemp->size[0];
  c4_i1 = c4_ztemp->size[0];
  c4_ztemp->size[0] = c4_iv[0];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_d_st, c4_ztemp, c4_i1,
    &c4_wc_emlrtRTEI);
  c4_iv[0] = c4_ztemp->size[0];
  c4_i2 = c4_ztemp->size[0];
  c4_ztemp->size[0] = c4_iv[0];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_d_st, c4_ztemp, c4_i2,
    &c4_xc_emlrtRTEI);
  c4_iv[0] = c4_ztemp->size[0];
  c4_i3 = c4_b_y->size[0];
  c4_b_y->size[0] = c4_iv[0];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_d_st, c4_b_y, c4_i3,
    &c4_yc_emlrtRTEI);
  c4_nx = c4_b_y->size[0];
  c4_e_st.site = &c4_o_emlrtRSI;
  c4_b = c4_nx;
  c4_b_b = c4_b;
  c4_emxFree_real_T(chartInstance, &c4_ztemp);
  if (1 > c4_b_b) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_b_b > 2147483646);
  }

  if (c4_overflow) {
    c4_f_st.site = &c4_p_emlrtRSI;
    c4_check_forloop_overflow_error(chartInstance, &c4_f_st);
  }

  for (c4_k = 1; c4_k - 1 < c4_nx; c4_k++) {
    c4_b_k = c4_k - 1;
    c4_b_a = c4_a->data[c4_b_k];
    c4_d_y = c4_b_a * c4_b_a;
    c4_b_y->data[c4_b_k] = c4_d_y;
  }

  c4_p = false;
  if (c4_p) {
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c4_st, &c4_o_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_e_y)));
  }
}

static void c4_indexShapeCheck(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, int32_T c4_matrixSize, int32_T c4_indexSize[2])
{
  static char_T c4_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  int32_T c4_size1;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_c;
  boolean_T c4_c;
  boolean_T c4_nonSingletonDimFound;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_size1 = c4_matrixSize;
  if (c4_size1 != 1) {
    c4_b = false;
  } else {
    c4_b = true;
  }

  if (c4_b) {
    c4_nonSingletonDimFound = false;
    if (c4_indexSize[1] != 1) {
      c4_nonSingletonDimFound = true;
    }

    c4_b_b = c4_nonSingletonDimFound;
    if (c4_b_b) {
      c4_c = true;
    } else {
      c4_c = false;
    }
  } else {
    c4_c = false;
  }

  c4_st.site = &c4_hi_emlrtRSI;
  c4_b_c = c4_c;
  if (c4_b_c) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c4_st, &c4_s_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_c_y)));
  }
}

static void c4_c_warning(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp)
{
  static char_T c4_msgID[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'F', 'i', 'n', 'd', 'V', 'e', 'c', 't', 'o', 'r',
    'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 'M', 'i', 's', 'm',
    'a', 't', 'c', 'h' };

  static char_T c4_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 43),
                false);
  c4_st.site = &c4_w_emlrtRSI;
  c4_f_feval(chartInstance, &c4_st, c4_b_y, c4_e_feval(chartInstance, &c4_st,
              c4_c_y, c4_d_y));
}

static void c4_minimum(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, c4_emxArray_real_T *c4_b_x, real_T *c4_ex, int32_T *c4_idx)
{
  static char_T c4_cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T c4_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  real_T c4_b_ex;
  real_T c4_c_ex;
  real_T c4_c_x;
  real_T c4_d_ex;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_h_x;
  int32_T c4_a;
  int32_T c4_b_a;
  int32_T c4_b_idx;
  int32_T c4_b_k;
  int32_T c4_b_last;
  int32_T c4_c;
  int32_T c4_c_a;
  int32_T c4_c_idx;
  int32_T c4_c_last;
  int32_T c4_d_idx;
  int32_T c4_e_b;
  int32_T c4_f_b;
  int32_T c4_first;
  int32_T c4_g_b;
  int32_T c4_h_b;
  int32_T c4_i;
  int32_T c4_k;
  int32_T c4_last;
  int32_T c4_nx;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_overflow;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_d_b;
  boolean_T c4_exitg1;
  boolean_T c4_guard1 = false;
  boolean_T c4_guard2 = false;
  boolean_T c4_i_b;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_ki_emlrtRSI;
  if ((c4_b_x->size[0] == 1) || ((real_T)c4_b_x->size[0] != 1.0)) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c4_st, &c4_i_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_d_y)));
  }

  if (!((real_T)c4_b_x->size[0] >= 1.0)) {
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c4_st, &c4_g_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_e_y)));
  }

  c4_b_st.site = &c4_bb_emlrtRSI;
  c4_last = c4_b_x->size[0] - 1;
  c4_a = c4_last;
  c4_c = c4_a + 1;
  c4_nx = c4_c;
  if (c4_nx <= 2) {
    if (c4_nx == 1) {
      c4_b_ex = c4_b_x->data[0];
      c4_b_idx = 1;
    } else {
      c4_guard1 = false;
      c4_guard2 = false;
      if (c4_b_x->data[0] > c4_b_x->data[c4_last]) {
        c4_guard2 = true;
      } else {
        c4_e_x = c4_b_x->data[0];
        c4_c_b = muDoubleScalarIsNaN(c4_e_x);
        if (c4_c_b) {
          c4_f_x = c4_b_x->data[c4_last];
          c4_d_b = muDoubleScalarIsNaN(c4_f_x);
          if (!c4_d_b) {
            c4_guard2 = true;
          } else {
            c4_guard1 = true;
          }
        } else {
          c4_guard1 = true;
        }
      }

      if (c4_guard2) {
        c4_b_ex = c4_b_x->data[c4_last];
        c4_b_idx = c4_last + 1;
      }

      if (c4_guard1) {
        c4_b_ex = c4_b_x->data[0];
        c4_b_idx = 1;
      }
    }
  } else {
    c4_c_st.site = &c4_je_emlrtRSI;
    c4_b_last = c4_last + 1;
    c4_c_x = c4_b_x->data[0];
    c4_d_x = c4_c_x;
    c4_b_b = muDoubleScalarIsNaN(c4_d_x);
    c4_p = !c4_b_b;
    if (c4_p) {
      c4_b_idx = 1;
    } else {
      c4_b_idx = 0;
      c4_d_st.site = &c4_ke_emlrtRSI;
      c4_e_b = c4_b_last;
      c4_f_b = c4_e_b;
      if (2 > c4_f_b) {
        c4_overflow = false;
      } else {
        c4_overflow = (c4_f_b > 2147483646);
      }

      if (c4_overflow) {
        c4_e_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_e_st);
      }

      c4_k = 2;
      c4_exitg1 = false;
      while ((!c4_exitg1) && (c4_k <= c4_b_last)) {
        c4_g_x = c4_b_x->data[c4_k - 1];
        c4_h_x = c4_g_x;
        c4_i_b = muDoubleScalarIsNaN(c4_h_x);
        c4_b_p = !c4_i_b;
        if (c4_b_p) {
          c4_b_idx = c4_k;
          c4_exitg1 = true;
        } else {
          c4_k++;
        }
      }
    }

    if (c4_b_idx == 0) {
      c4_b_ex = c4_b_x->data[0];
      c4_b_idx = 1;
    } else {
      c4_c_st.site = &c4_cb_emlrtRSI;
      c4_first = c4_b_idx;
      c4_c_last = c4_last + 1;
      c4_d_ex = c4_b_x->data[c4_first - 1];
      c4_d_idx = c4_first;
      c4_i = c4_first + 1;
      c4_d_st.site = &c4_db_emlrtRSI;
      c4_b_a = c4_i;
      c4_g_b = c4_c_last;
      c4_c_a = c4_b_a;
      c4_h_b = c4_g_b;
      if (c4_c_a > c4_h_b) {
        c4_b_overflow = false;
      } else {
        c4_b_overflow = (c4_h_b > 2147483646);
      }

      if (c4_b_overflow) {
        c4_e_st.site = &c4_p_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_e_st);
      }

      for (c4_b_k = c4_i; c4_b_k <= c4_c_last; c4_b_k++) {
        if (c4_d_ex > c4_b_x->data[c4_b_k - 1]) {
          c4_d_ex = c4_b_x->data[c4_b_k - 1];
          c4_d_idx = c4_b_k;
        }
      }

      c4_b_ex = c4_d_ex;
      c4_b_idx = c4_d_idx;
    }
  }

  c4_c_ex = c4_b_ex;
  c4_c_idx = c4_b_idx;
  *c4_ex = c4_c_ex;
  *c4_idx = c4_c_idx;
}

static real_T c4_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance, const
  mxArray *c4_b_cx, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_b_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_cx), &c4_thisId);
  sf_mex_destroy(&c4_b_cx);
  return c4_b_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_b_y;
  real_T c4_d;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_b_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_b_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_b_is_active_c4_ver_1, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_b_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_ver_1), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_ver_1);
  return c4_b_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_ver_1InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_b_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_b_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_b_y;
}

static void c4_chart_data_browse_helper(SFc4_ver_1InstanceStruct *chartInstance,
  int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T *c4_isValueTooBig)
{
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  *c4_mxData = NULL;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 6U:
    *c4_isValueTooBig = 1U;
    break;

   case 7U:
    c4_d = *chartInstance->c4_x;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_bboxes,
      1, 0U, 1U, 0U, 2, 1, 4), false);
    break;

   case 5U:
    c4_d1 = *chartInstance->c4_y;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c4_d2 = *chartInstance->c4_cx;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c4_d3 = *chartInstance->c4_cy;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c4_feval(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_ = NULL;
  (void)chartInstance;
  c4_ = NULL;
  sf_mex_assign(&c4_, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_;
}

static void c4_b_feval(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static const mxArray *c4_c_feval(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_ = NULL;
  (void)chartInstance;
  c4_ = NULL;
  sf_mex_assign(&c4_, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_;
}

static void c4_d_feval(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static const mxArray *c4_e_feval(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_ = NULL;
  (void)chartInstance;
  c4_ = NULL;
  sf_mex_assign(&c4_, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_;
}

static void c4_f_feval(SFc4_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static void c4_b_ComputeCentroid(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_imageSize[2], c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c4_stats, c4_sHtk0WM4OMtyqkehwQYcq2 *c4_statsAlreadyComputed)
{
  static char_T c4_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  c4_cell_wrap_10 c4_reshapes[2];
  c4_emxArray_int32_T *c4_varargout_3;
  c4_emxArray_int32_T *c4_varargout_4;
  c4_emxArray_real_T *c4_b_x;
  c4_emxArray_real_T *c4_c_x;
  c4_emxArray_real_T *c4_d_x;
  c4_emxArray_real_T *c4_e_x;
  c4_emxArray_real_T *c4_f_x;
  c4_emxArray_real_T *c4_j;
  c4_emxArray_real_T *c4_ndx;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_st;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  real_T c4_b_imageSize[2];
  real_T c4_b_y[2];
  real_T c4_c_k;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d_k;
  real_T c4_g_x;
  real_T c4_s;
  int32_T c4_sizes[2];
  int32_T c4_a;
  int32_T c4_b_b;
  int32_T c4_b_col;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_stats;
  int32_T c4_b_vlen;
  int32_T c4_c_b;
  int32_T c4_c_col;
  int32_T c4_c_loop_ub;
  int32_T c4_c_stats;
  int32_T c4_c_vlen;
  int32_T c4_col;
  int32_T c4_d_loop_ub;
  int32_T c4_d_stats;
  int32_T c4_d_vlen;
  int32_T c4_e_loop_ub;
  int32_T c4_e_stats;
  int32_T c4_expected;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i7;
  int32_T c4_i70;
  int32_T c4_i71;
  int32_T c4_i72;
  int32_T c4_i73;
  int32_T c4_i74;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_ib;
  int32_T c4_inb;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_k_loop_ub;
  int32_T c4_l_loop_ub;
  int32_T c4_lidx;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_nfb;
  int32_T c4_nleft;
  int32_T c4_o_loop_ub;
  int32_T c4_result;
  int32_T c4_vlen;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  if (!c4_statsAlreadyComputed->Centroid) {
    c4_statsAlreadyComputed->Centroid = true;
    c4_st.site = &c4_ef_emlrtRSI;
    if (!c4_statsAlreadyComputed->PixelList) {
      c4_statsAlreadyComputed->PixelList = true;
      c4_d1 = (real_T)c4_stats->size[0];
      c4_i1 = (int32_T)c4_d1 - 1;
      c4_b_k = 0;
      c4_emxInit_real_T(chartInstance, &c4_st, &c4_j, 1, &c4_id_emlrtRTEI);
      c4_emxInit_real_T(chartInstance, &c4_st, &c4_ndx, 1, &c4_dd_emlrtRTEI);
      c4_emxInit_int32_T(chartInstance, &c4_st, &c4_varargout_4, 1,
                         &c4_uc_emlrtRTEI);
      c4_emxInit_int32_T(chartInstance, &c4_st, &c4_varargout_3, 1,
                         &c4_uc_emlrtRTEI);
      c4_emxInitMatrix_cell_wrap_10(chartInstance, &c4_st, c4_reshapes,
        &c4_jd_emlrtRTEI);
      while (c4_b_k <= c4_i1) {
        c4_d_k = (real_T)c4_b_k + 1.0;
        c4_i2 = c4_ndx->size[0];
        c4_i4 = c4_stats->size[0];
        c4_i6 = (int32_T)c4_d_k;
        if ((c4_i6 < 1) || (c4_i6 > c4_i4)) {
          emlrtDynamicBoundsCheckR2012b(c4_i6, 1, c4_i4, &c4_fd_emlrtBCI, &c4_st);
        }

        c4_ndx->size[0] = c4_stats->data[c4_i6 - 1].PixelIdxList->size[0];
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_ndx, c4_i2,
          &c4_bd_emlrtRTEI);
        c4_i9 = c4_stats->size[0];
        c4_i10 = (int32_T)c4_d_k;
        if ((c4_i10 < 1) || (c4_i10 > c4_i9)) {
          emlrtDynamicBoundsCheckR2012b(c4_i10, 1, c4_i9, &c4_fd_emlrtBCI,
            &c4_st);
        }

        c4_loop_ub = c4_stats->data[c4_i10 - 1].PixelIdxList->size[0] - 1;
        for (c4_i13 = 0; c4_i13 <= c4_loop_ub; c4_i13++) {
          c4_i14 = c4_stats->size[0];
          c4_i17 = (int32_T)c4_d_k;
          if ((c4_i17 < 1) || (c4_i17 > c4_i14)) {
            emlrtDynamicBoundsCheckR2012b(c4_i17, 1, c4_i14, &c4_fd_emlrtBCI,
              &c4_st);
          }

          c4_ndx->data[c4_i13] = c4_stats->data[c4_i17 - 1].PixelIdxList->
            data[c4_i13];
        }

        if (c4_ndx->size[0] != 0) {
          c4_b_st.site = &c4_nd_emlrtRSI;
          c4_i20 = c4_ndx->size[0];
          c4_i22 = c4_stats->size[0];
          c4_i23 = (int32_T)c4_d_k;
          if ((c4_i23 < 1) || (c4_i23 > c4_i22)) {
            emlrtDynamicBoundsCheckR2012b(c4_i23, 1, c4_i22, &c4_gd_emlrtBCI,
              &c4_b_st);
          }

          c4_ndx->size[0] = c4_stats->data[c4_i23 - 1].PixelIdxList->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_ndx, c4_i20,
            &c4_dd_emlrtRTEI);
          c4_i29 = c4_stats->size[0];
          c4_i31 = (int32_T)c4_d_k;
          if ((c4_i31 < 1) || (c4_i31 > c4_i29)) {
            emlrtDynamicBoundsCheckR2012b(c4_i31, 1, c4_i29, &c4_gd_emlrtBCI,
              &c4_b_st);
          }

          c4_c_loop_ub = c4_stats->data[c4_i31 - 1].PixelIdxList->size[0] - 1;
          for (c4_i35 = 0; c4_i35 <= c4_c_loop_ub; c4_i35++) {
            c4_i38 = c4_stats->size[0];
            c4_i40 = (int32_T)c4_d_k;
            if ((c4_i40 < 1) || (c4_i40 > c4_i38)) {
              emlrtDynamicBoundsCheckR2012b(c4_i40, 1, c4_i38, &c4_gd_emlrtBCI,
                &c4_b_st);
            }

            c4_ndx->data[c4_i35] = c4_stats->data[c4_i40 - 1].PixelIdxList->
              data[c4_i35];
          }

          c4_c_st.site = &c4_pd_emlrtRSI;
          for (c4_i39 = 0; c4_i39 < 2; c4_i39++) {
            c4_b_imageSize[c4_i39] = c4_imageSize[c4_i39];
          }

          c4_ind2sub_indexClass(chartInstance, &c4_c_st, c4_b_imageSize, c4_ndx,
                                c4_varargout_3, c4_varargout_4);
          c4_i42 = c4_ndx->size[0];
          c4_ndx->size[0] = c4_varargout_3->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_ndx, c4_i42,
            &c4_o_emlrtRTEI);
          c4_d_loop_ub = c4_varargout_3->size[0] - 1;
          for (c4_i46 = 0; c4_i46 <= c4_d_loop_ub; c4_i46++) {
            c4_ndx->data[c4_i46] = (real_T)c4_varargout_3->data[c4_i46];
          }

          c4_i47 = c4_j->size[0];
          c4_j->size[0] = c4_varargout_4->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_j, c4_i47,
            &c4_o_emlrtRTEI);
          c4_f_loop_ub = c4_varargout_4->size[0] - 1;
          for (c4_i50 = 0; c4_i50 <= c4_f_loop_ub; c4_i50++) {
            c4_j->data[c4_i50] = (real_T)c4_varargout_4->data[c4_i50];
          }

          c4_b_st.site = &c4_od_emlrtRSI;
          c4_c_st.site = &c4_qd_emlrtRSI;
          c4_result = c4_j->size[0];
          c4_sizes[0] = c4_result;
          c4_d_st.site = &c4_rd_emlrtRSI;
          c4_expected = c4_sizes[0];
          if (c4_j->size[0] == c4_expected) {
            c4_b1 = true;
          } else {
            c4_b1 = false;
          }

          if (!c4_b1) {
            c4_c_y = NULL;
            sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            c4_d_y = NULL;
            sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            sf_mex_call(&c4_d_st, &c4_f_emlrtMCI, "error", 0U, 2U, 14, c4_c_y,
                        14, sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_d_st, NULL, "message", 1U, 1U, 14, c4_d_y)));
          }

          if (c4_ndx->size[0] == c4_expected) {
            c4_b1 = true;
          } else {
            c4_b1 = false;
          }

          if (!c4_b1) {
            c4_e_y = NULL;
            sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            c4_f_y = NULL;
            sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            sf_mex_call(&c4_d_st, &c4_f_emlrtMCI, "error", 0U, 2U, 14, c4_e_y,
                        14, sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_d_st, NULL, "message", 1U, 1U, 14, c4_f_y)));
          }

          c4_i53 = c4_reshapes[0].f1->size[0];
          c4_reshapes[0].f1->size[0] = c4_j->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_reshapes[0].f1,
            c4_i53, &c4_fd_emlrtRTEI);
          c4_h_loop_ub = c4_j->size[0] - 1;
          for (c4_i55 = 0; c4_i55 <= c4_h_loop_ub; c4_i55++) {
            c4_reshapes[0].f1->data[c4_i55] = c4_j->data[c4_i55];
          }

          c4_i58 = c4_reshapes[1].f1->size[0];
          c4_reshapes[1].f1->size[0] = c4_ndx->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_reshapes[1].f1,
            c4_i58, &c4_fd_emlrtRTEI);
          c4_k_loop_ub = c4_ndx->size[0] - 1;
          for (c4_i59 = 0; c4_i59 <= c4_k_loop_ub; c4_i59++) {
            c4_reshapes[1].f1->data[c4_i59] = c4_ndx->data[c4_i59];
          }

          c4_i60 = c4_ndx->size[0];
          c4_ndx->size[0] = c4_reshapes[0].f1->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_ndx, c4_i60,
            &c4_gd_emlrtRTEI);
          c4_l_loop_ub = c4_reshapes[0].f1->size[0] - 1;
          for (c4_i61 = 0; c4_i61 <= c4_l_loop_ub; c4_i61++) {
            c4_ndx->data[c4_i61] = c4_reshapes[0].f1->data[c4_i61];
          }

          c4_i62 = c4_j->size[0];
          c4_j->size[0] = c4_reshapes[1].f1->size[0];
          c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_j, c4_i62,
            &c4_gd_emlrtRTEI);
          c4_m_loop_ub = c4_reshapes[1].f1->size[0] - 1;
          for (c4_i63 = 0; c4_i63 <= c4_m_loop_ub; c4_i63++) {
            c4_j->data[c4_i63] = c4_reshapes[1].f1->data[c4_i63];
          }

          c4_e_stats = c4_stats->size[0];
          c4_i64 = (int32_T)c4_d_k;
          if ((c4_i64 < 1) || (c4_i64 > c4_e_stats)) {
            emlrtDynamicBoundsCheckR2012b(c4_i64, 1, c4_e_stats, &c4_ed_emlrtBCI,
              &c4_c_st);
          }

          c4_i65 = c4_i64 - 1;
          c4_i66 = c4_stats->data[c4_i65].PixelList->size[0] * c4_stats->
            data[c4_i65].PixelList->size[1];
          c4_stats->data[c4_i65].PixelList->size[0] = c4_ndx->size[0];
          c4_i67 = (int32_T)c4_d_k;
          if ((c4_i67 < 1) || (c4_i67 > c4_e_stats)) {
            emlrtDynamicBoundsCheckR2012b(c4_i67, 1, c4_e_stats, &c4_ed_emlrtBCI,
              &c4_c_st);
          }

          c4_i68 = c4_i67 - 1;
          c4_stats->data[c4_i68].PixelList->size[1] = 2;
          c4_emxEnsureCapacity_real_T1(chartInstance, &c4_c_st, c4_stats->
            data[c4_i68].PixelList, c4_i66, &c4_hd_emlrtRTEI);
          c4_n_loop_ub = c4_ndx->size[0] - 1;
          for (c4_i69 = 0; c4_i69 <= c4_n_loop_ub; c4_i69++) {
            c4_i70 = (int32_T)c4_d_k;
            if ((c4_i70 < 1) || (c4_i70 > c4_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c4_i70, 1, c4_e_stats,
                &c4_ed_emlrtBCI, &c4_c_st);
            }

            c4_i73 = (int32_T)c4_d_k;
            if ((c4_i73 < 1) || (c4_i73 > c4_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c4_i73, 1, c4_e_stats,
                &c4_ed_emlrtBCI, &c4_c_st);
            }

            c4_stats->data[c4_i70 - 1].PixelList->data[c4_i69] = c4_ndx->
              data[c4_i69];
          }

          c4_o_loop_ub = c4_j->size[0] - 1;
          for (c4_i71 = 0; c4_i71 <= c4_o_loop_ub; c4_i71++) {
            c4_i72 = (int32_T)c4_d_k;
            if ((c4_i72 < 1) || (c4_i72 > c4_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c4_i72, 1, c4_e_stats,
                &c4_ed_emlrtBCI, &c4_c_st);
            }

            c4_i74 = (int32_T)c4_d_k;
            if ((c4_i74 < 1) || (c4_i74 > c4_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c4_i74, 1, c4_e_stats,
                &c4_ed_emlrtBCI, &c4_c_st);
            }

            c4_stats->data[c4_i72 - 1].PixelList->data[c4_i71 + c4_stats->
              data[c4_i74 - 1].PixelList->size[0]] = c4_j->data[c4_i71];
          }
        } else {
          c4_i16 = c4_stats->size[0];
          c4_i19 = (int32_T)c4_d_k;
          if ((c4_i19 < 1) || (c4_i19 > c4_i16)) {
            emlrtDynamicBoundsCheckR2012b(c4_i19, 1, c4_i16, &c4_cd_emlrtBCI,
              &c4_st);
          }

          c4_i24 = c4_i19 - 1;
          c4_stats->data[c4_i24].PixelList->size[0] = 0;
          c4_i26 = c4_stats->size[0];
          c4_i28 = (int32_T)c4_d_k;
          if ((c4_i28 < 1) || (c4_i28 > c4_i26)) {
            emlrtDynamicBoundsCheckR2012b(c4_i28, 1, c4_i26, &c4_cd_emlrtBCI,
              &c4_st);
          }

          c4_i33 = c4_i28 - 1;
          c4_i34 = c4_stats->data[c4_i33].PixelList->size[0] * c4_stats->
            data[c4_i33].PixelList->size[1];
          c4_stats->data[c4_i33].PixelList->size[1] = 2;
          c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_stats->
            data[c4_i33].PixelList, c4_i34, &c4_ed_emlrtRTEI);
          c4_b_stats = c4_stats->size[0];
          c4_i37 = (int32_T)c4_d_k;
          if ((c4_i37 < 1) || (c4_i37 > c4_b_stats)) {
            emlrtDynamicBoundsCheckR2012b(c4_i37, 1, c4_b_stats, &c4_cd_emlrtBCI,
              &c4_st);
          }

          c4_c_stats = c4_stats->size[0];
          c4_i41 = (int32_T)c4_d_k;
          if ((c4_i41 < 1) || (c4_i41 > c4_c_stats)) {
            emlrtDynamicBoundsCheckR2012b(c4_i41, 1, c4_c_stats, &c4_cd_emlrtBCI,
              &c4_st);
          }
        }

        c4_b_k++;
      }

      c4_emxFreeMatrix_cell_wrap_10(chartInstance, c4_reshapes);
      c4_emxFree_int32_T(chartInstance, &c4_varargout_3);
      c4_emxFree_int32_T(chartInstance, &c4_varargout_4);
      c4_emxFree_real_T(chartInstance, &c4_ndx);
      c4_emxFree_real_T(chartInstance, &c4_j);
    }

    c4_d = (real_T)c4_stats->size[0];
    c4_i = (int32_T)c4_d - 1;
    c4_k = 0;
    c4_emxInit_real_T1(chartInstance, c4_sp, &c4_b_x, 2, &c4_cd_emlrtRTEI);
    c4_emxInit_real_T1(chartInstance, c4_sp, &c4_c_x, 2, &c4_lc_emlrtRTEI);
    c4_emxInit_real_T1(chartInstance, c4_sp, &c4_d_x, 2, &c4_jc_emlrtRTEI);
    c4_emxInit_real_T1(chartInstance, c4_sp, &c4_e_x, 2, &c4_kc_emlrtRTEI);
    c4_emxInit_real_T1(chartInstance, c4_sp, &c4_f_x, 2, &c4_ic_emlrtRTEI);
    while (c4_k <= c4_i) {
      c4_c_k = (real_T)c4_k + 1.0;
      c4_st.site = &c4_ff_emlrtRSI;
      c4_i3 = c4_stats->size[0];
      c4_i5 = (int32_T)c4_c_k;
      if ((c4_i5 < 1) || (c4_i5 > c4_i3)) {
        emlrtDynamicBoundsCheckR2012b(c4_i5, 1, c4_i3, &c4_bd_emlrtBCI, &c4_st);
      }

      c4_i7 = c4_i5 - 1;
      c4_i8 = c4_b_x->size[0] * c4_b_x->size[1];
      c4_b_x->size[0] = c4_stats->data[c4_i7].PixelList->size[0];
      c4_b_x->size[1] = 2;
      c4_b_st.site = &c4_vi_emlrtRSI;
      c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st, c4_b_x, c4_i8,
        &c4_cd_emlrtRTEI);
      c4_i11 = c4_stats->size[0];
      c4_i12 = (int32_T)c4_c_k;
      if ((c4_i12 < 1) || (c4_i12 > c4_i11)) {
        emlrtDynamicBoundsCheckR2012b(c4_i12, 1, c4_i11, &c4_bd_emlrtBCI, &c4_st);
      }

      c4_i15 = c4_i12 - 1;
      c4_i18 = c4_stats->size[0];
      c4_i21 = (int32_T)c4_c_k;
      if ((c4_i21 < 1) || (c4_i21 > c4_i18)) {
        emlrtDynamicBoundsCheckR2012b(c4_i21, 1, c4_i18, &c4_bd_emlrtBCI, &c4_st);
      }

      c4_i25 = c4_i21 - 1;
      c4_b_loop_ub = c4_stats->data[c4_i15].PixelList->size[0] * c4_stats->
        data[c4_i25].PixelList->size[1] - 1;
      for (c4_i27 = 0; c4_i27 <= c4_b_loop_ub; c4_i27++) {
        c4_i30 = c4_stats->size[0];
        c4_i32 = (int32_T)c4_c_k;
        if ((c4_i32 < 1) || (c4_i32 > c4_i30)) {
          emlrtDynamicBoundsCheckR2012b(c4_i32, 1, c4_i30, &c4_hd_emlrtBCI,
            &c4_st);
        }

        c4_b_x->data[c4_i27] = c4_stats->data[c4_i32 - 1].PixelList->data[c4_i27];
      }

      c4_b_st.site = &c4_gf_emlrtRSI;
      c4_vlen = c4_b_x->size[0];
      c4_c_st.site = &c4_bc_emlrtRSI;
      c4_b_vlen = c4_vlen;
      c4_b = (c4_b_x->size[0] == 0);
      if (c4_b || (c4_b_vlen == 0)) {
        for (c4_i36 = 0; c4_i36 < 2; c4_i36++) {
          c4_b_y[c4_i36] = 0.0;
        }
      } else {
        c4_d_st.site = &c4_cc_emlrtRSI;
        c4_c_vlen = c4_b_vlen;
        c4_e_st.site = &c4_dc_emlrtRSI;
        c4_d_vlen = c4_c_vlen;
        if (c4_d_vlen < 4096) {
          for (c4_col = 0; c4_col < 2; c4_col++) {
            c4_b_col = c4_col;
            c4_i45 = c4_f_x->size[0] * c4_f_x->size[1];
            c4_f_x->size[0] = c4_b_x->size[0];
            c4_f_x->size[1] = 2;
            c4_emxEnsureCapacity_real_T1(chartInstance, &c4_e_st, c4_f_x, c4_i45,
              &c4_ic_emlrtRTEI);
            c4_e_loop_ub = c4_b_x->size[0] * c4_b_x->size[1] - 1;
            for (c4_i49 = 0; c4_i49 <= c4_e_loop_ub; c4_i49++) {
              c4_f_x->data[c4_i49] = c4_b_x->data[c4_i49];
            }

            c4_f_st.site = &c4_ec_emlrtRSI;
            c4_b_y[c4_b_col] = c4_c_sumColumnB(chartInstance, &c4_f_st, c4_f_x,
              c4_b_col + 1, c4_d_vlen);
          }
        } else {
          c4_a = c4_d_vlen;
          c4_nfb = c4_div_nzp_s32(chartInstance, c4_a, 4096, 0, 1U, 0, 0);
          c4_inb = c4_nfb << 12;
          c4_lidx = c4_inb;
          c4_nleft = c4_d_vlen - c4_inb;
          for (c4_c_col = 0; c4_c_col < 2; c4_c_col++) {
            c4_b_col = c4_c_col + 1;
            c4_i48 = c4_d_x->size[0] * c4_d_x->size[1];
            c4_d_x->size[0] = c4_b_x->size[0];
            c4_d_x->size[1] = 2;
            c4_emxEnsureCapacity_real_T1(chartInstance, &c4_e_st, c4_d_x, c4_i48,
              &c4_jc_emlrtRTEI);
            c4_g_loop_ub = c4_b_x->size[0] * c4_b_x->size[1] - 1;
            for (c4_i51 = 0; c4_i51 <= c4_g_loop_ub; c4_i51++) {
              c4_d_x->data[c4_i51] = c4_b_x->data[c4_i51];
            }

            c4_s = c4_b_sumColumnB4(chartInstance, c4_d_x, c4_b_col, 1);
            c4_f_st.site = &c4_fc_emlrtRSI;
            c4_b_b = c4_nfb;
            c4_c_b = c4_b_b;
            if (2 > c4_c_b) {
              c4_overflow = false;
            } else {
              c4_overflow = (c4_c_b > 2147483646);
            }

            if (c4_overflow) {
              c4_g_st.site = &c4_p_emlrtRSI;
              c4_check_forloop_overflow_error(chartInstance, &c4_g_st);
            }

            for (c4_ib = 1; c4_ib < c4_nfb; c4_ib++) {
              c4_i52 = c4_e_x->size[0] * c4_e_x->size[1];
              c4_e_x->size[0] = c4_b_x->size[0];
              c4_e_x->size[1] = 2;
              c4_emxEnsureCapacity_real_T1(chartInstance, &c4_e_st, c4_e_x,
                c4_i52, &c4_kc_emlrtRTEI);
              c4_i_loop_ub = c4_b_x->size[0] * c4_b_x->size[1] - 1;
              for (c4_i56 = 0; c4_i56 <= c4_i_loop_ub; c4_i56++) {
                c4_e_x->data[c4_i56] = c4_b_x->data[c4_i56];
              }

              c4_s += c4_b_sumColumnB4(chartInstance, c4_e_x, c4_b_col, 1 +
                (c4_ib << 12));
            }

            if (c4_nleft > 0) {
              c4_i54 = c4_c_x->size[0] * c4_c_x->size[1];
              c4_c_x->size[0] = c4_b_x->size[0];
              c4_c_x->size[1] = 2;
              c4_emxEnsureCapacity_real_T1(chartInstance, &c4_e_st, c4_c_x,
                c4_i54, &c4_lc_emlrtRTEI);
              c4_j_loop_ub = c4_b_x->size[0] * c4_b_x->size[1] - 1;
              for (c4_i57 = 0; c4_i57 <= c4_j_loop_ub; c4_i57++) {
                c4_c_x->data[c4_i57] = c4_b_x->data[c4_i57];
              }

              c4_f_st.site = &c4_gc_emlrtRSI;
              c4_s += c4_d_sumColumnB(chartInstance, &c4_f_st, c4_c_x, c4_b_col,
                c4_nleft, c4_lidx + 1);
            }

            c4_b_y[c4_b_col - 1] = c4_s;
          }
        }
      }

      c4_g_x = (real_T)c4_b_x->size[0];
      c4_d_stats = c4_stats->size[0];
      for (c4_i43 = 0; c4_i43 < 2; c4_i43++) {
        c4_i44 = (int32_T)c4_c_k;
        if ((c4_i44 < 1) || (c4_i44 > c4_d_stats)) {
          emlrtDynamicBoundsCheckR2012b(c4_i44, 1, c4_d_stats, &c4_dd_emlrtBCI,
            &c4_st);
        }

        c4_stats->data[c4_i44 - 1].Centroid[c4_i43] = c4_b_y[c4_i43] / c4_g_x;
      }

      c4_k++;
    }

    c4_emxFree_real_T(chartInstance, &c4_f_x);
    c4_emxFree_real_T(chartInstance, &c4_e_x);
    c4_emxFree_real_T(chartInstance, &c4_d_x);
    c4_emxFree_real_T(chartInstance, &c4_c_x);
    c4_emxFree_real_T(chartInstance, &c4_b_x);
  }
}

static void c4_emxEnsureCapacity_real32_T(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real32_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_boolean_T(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(boolean_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (boolean_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_int32_T(SFc4_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(int32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(int32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (int32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_real_T(SFc4_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_real32_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real32_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real32_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_real32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_boolean_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_boolean_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c4_emxArray_boolean_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (boolean_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_sPw6XcACqvsnFn0LPvB6yCC(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_sPw6XcACqvsnFn0LPvB6yC
  **c4_pEmxArray, int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *)emlrtMallocMex(sizeof
    (c4_emxArray_sPw6XcACqvsnFn0LPvB6yC));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (c4_sPw6XcACqvsnFn0LPvB6yCC *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_int32_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_int32_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_int32_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_int32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (int32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_real32_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_real32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real32_T *)NULL;
  }
}

static void c4_emxFree_boolean_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_boolean_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_boolean_T *)NULL) {
    if (((*c4_pEmxArray)->data != (boolean_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_boolean_T *)NULL;
  }
}

static void c4_emxFree_sPw6XcACqvsnFn0LPvB6yCC(SFc4_ver_1InstanceStruct
  *chartInstance, c4_emxArray_sPw6XcACqvsnFn0LPvB6yC **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *)NULL) {
    if (((*c4_pEmxArray)->data != (c4_sPw6XcACqvsnFn0LPvB6yCC *)NULL) &&
        (*c4_pEmxArray)->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_sPw6XcACqvsnFn0LPvB6yC *)NULL;
  }
}

static void c4_emxFree_real_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_real_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real_T *)NULL;
  }
}

static void c4_emxFree_int32_T(SFc4_ver_1InstanceStruct *chartInstance,
  c4_emxArray_int32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_int32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (int32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_int32_T *)NULL;
  }
}

static void c4_emxEnsureCapacity_boolean_T1(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(boolean_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (boolean_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_sPw6XcACqvsnF(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_sPw6XcACqvsnFn0LPvB6yC
  *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof
      (c4_sPw6XcACqvsnFn0LPvB6yCC));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(c4_sPw6XcACqvsnFn0LPvB6yCC) *
             (uint32_T)c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (c4_sPw6XcACqvsnFn0LPvB6yCC *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxFreeStruct_s_bxcgeNxEuVlgmMh(SFc4_ver_1InstanceStruct
  *chartInstance, c4_s_bxcgeNxEuVlgmMh5HwQaXB *c4_pStruct)
{
  c4_emxFree_boolean_T(chartInstance, &c4_pStruct->Image);
  c4_emxFree_boolean_T(chartInstance, &c4_pStruct->FilledImage);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->PixelIdxList);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->PixelList);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->PixelValues);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->SubarrayIdx);
}

static void c4_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(SFc4_ver_1InstanceStruct
  *chartInstance, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c4_emxArray, int32_T
  c4_fromIndex, int32_T c4_toIndex)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c4_emxArray->data[c4_i]);
  }
}

static void c4_emxInitStruct_s_bxcgeNxEuVlgmMh(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_bxcgeNxEuVlgmMh5HwQaXB
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_boolean_T(chartInstance, c4_sp, &c4_pStruct->Image, 2,
                       c4_srcLocation);
  c4_emxInit_boolean_T(chartInstance, c4_sp, &c4_pStruct->FilledImage, 2,
                       c4_srcLocation);
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_pStruct->PixelIdxList, 1,
                    c4_srcLocation);
  c4_emxInit_real_T1(chartInstance, c4_sp, &c4_pStruct->PixelList, 2,
                     c4_srcLocation);
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_pStruct->PixelValues, 1,
                    c4_srcLocation);
  c4_emxInit_real_T1(chartInstance, c4_sp, &c4_pStruct->SubarrayIdx, 2,
                     c4_srcLocation);
}

static void c4_emxInit_real_T1(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c4_emxArray, int32_T c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo
  *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxInitStruct_s_bxcgeNxEuVlgmMh(chartInstance, c4_sp, &c4_emxArray->
      data[c4_i], c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_s_bxcgeNxEuVl(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof
      (c4_s_bxcgeNxEuVlgmMh5HwQaXB));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(c4_s_bxcgeNxEuVlgmMh5HwQaXB) *
             (uint32_T)c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (c4_s_bxcgeNxEuVlgmMh5HwQaXB *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }

  if (c4_oldNumel > c4_newNumel) {
    c4_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, c4_emxArray, c4_newNumel,
      c4_oldNumel);
  } else if (c4_oldNumel < c4_newNumel) {
    c4_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(chartInstance, c4_sp, c4_emxArray,
      c4_oldNumel, c4_newNumel, c4_srcLocation);
  }
}

static void c4_emxCopyStruct_s_bxcgeNxEuVlgmMh(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_bxcgeNxEuVlgmMh5HwQaXB *c4_dst,
  const c4_s_bxcgeNxEuVlgmMh5HwQaXB *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  c4_dst->Area = c4_src->Area;
  c4_emxCopyMatrix_real_T(chartInstance, c4_dst->Centroid, c4_src->Centroid);
  c4_emxCopyMatrix_real_T1(chartInstance, c4_dst->BoundingBox,
    c4_src->BoundingBox);
  c4_dst->MajorAxisLength = c4_src->MajorAxisLength;
  c4_dst->MinorAxisLength = c4_src->MinorAxisLength;
  c4_dst->Eccentricity = c4_src->Eccentricity;
  c4_dst->Orientation = c4_src->Orientation;
  c4_emxCopy_boolean_T(chartInstance, c4_sp, &c4_dst->Image, &c4_src->Image,
                       c4_srcLocation);
  c4_emxCopy_boolean_T(chartInstance, c4_sp, &c4_dst->FilledImage,
                       &c4_src->FilledImage, c4_srcLocation);
  c4_dst->FilledArea = c4_src->FilledArea;
  c4_dst->EulerNumber = c4_src->EulerNumber;
  c4_emxCopyMatrix_real_T2(chartInstance, c4_dst->Extrema, c4_src->Extrema);
  c4_dst->EquivDiameter = c4_src->EquivDiameter;
  c4_dst->Extent = c4_src->Extent;
  c4_emxCopy_real_T(chartInstance, c4_sp, &c4_dst->PixelIdxList,
                    &c4_src->PixelIdxList, c4_srcLocation);
  c4_emxCopy_real_T1(chartInstance, c4_sp, &c4_dst->PixelList,
                     &c4_src->PixelList, c4_srcLocation);
  c4_dst->Perimeter = c4_src->Perimeter;
  c4_dst->Circularity = c4_src->Circularity;
  c4_emxCopy_real_T(chartInstance, c4_sp, &c4_dst->PixelValues,
                    &c4_src->PixelValues, c4_srcLocation);
  c4_emxCopyMatrix_real_T(chartInstance, c4_dst->WeightedCentroid,
    c4_src->WeightedCentroid);
  c4_dst->MeanIntensity = c4_src->MeanIntensity;
  c4_dst->MinIntensity = c4_src->MinIntensity;
  c4_dst->MaxIntensity = c4_src->MaxIntensity;
  c4_emxCopy_real_T1(chartInstance, c4_sp, &c4_dst->SubarrayIdx,
                     &c4_src->SubarrayIdx, c4_srcLocation);
  c4_emxCopyMatrix_real_T(chartInstance, c4_dst->SubarrayIdxLengths,
    c4_src->SubarrayIdxLengths);
}

static void c4_emxCopyMatrix_real_T(SFc4_ver_1InstanceStruct *chartInstance,
  real_T c4_dst[2], const real_T c4_src[2])
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_dst[c4_i] = c4_src[c4_i];
  }
}

static void c4_emxCopyMatrix_real_T1(SFc4_ver_1InstanceStruct *chartInstance,
  real_T c4_dst[4], const real_T c4_src[4])
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 4; c4_i++) {
    c4_dst[c4_i] = c4_src[c4_i];
  }
}

static void c4_emxCopy_boolean_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_dst, c4_emxArray_boolean_T *
  const *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_boolean_T(chartInstance, c4_sp, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxCopyMatrix_real_T2(SFc4_ver_1InstanceStruct *chartInstance,
  real_T c4_dst[16], const real_T c4_src[16])
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 16; c4_i++) {
    c4_dst[c4_i] = c4_src[c4_i];
  }
}

static void c4_emxCopy_real_T(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_dst, c4_emxArray_real_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_real_T(chartInstance, c4_sp, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxCopy_real_T1(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_real_T **c4_dst, c4_emxArray_real_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_real_T1(chartInstance, c4_sp, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxEnsureCapacity_real_T1(SFc4_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInitStruct_s_vX9LV7M75v5ZNol(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_vX9LV7M75v5ZNol5H5URkE
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_pStruct->RegionIndices, 1,
                    c4_srcLocation);
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_pStruct->RegionLengths, 1,
                     c4_srcLocation);
}

static void c4_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  **c4_pEmxArray, int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)emlrtMallocMex(sizeof
    (c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (c4_s_bxcgeNxEuVlgmMh5HwQaXB *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_boolean_T1(SFc4_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_boolean_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c4_emxArray_boolean_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (boolean_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFreeStruct_s_vX9LV7M75v5ZNol(SFc4_ver_1InstanceStruct
  *chartInstance, c4_s_vX9LV7M75v5ZNol5H5URkE *c4_pStruct)
{
  c4_emxFree_real_T(chartInstance, &c4_pStruct->RegionIndices);
  c4_emxFree_int32_T(chartInstance, &c4_pStruct->RegionLengths);
}

static void c4_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(SFc4_ver_1InstanceStruct
  *chartInstance, c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa **c4_pEmxArray)
{
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_numEl;
  if (*c4_pEmxArray != (c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)NULL) {
    if ((*c4_pEmxArray)->data != (c4_s_bxcgeNxEuVlgmMh5HwQaXB *)NULL) {
      c4_numEl = 1;
      for (c4_i = 0; c4_i < (*c4_pEmxArray)->numDimensions; c4_i++) {
        c4_numEl *= (*c4_pEmxArray)->size[c4_i];
      }

      for (c4_b_i = 0; c4_b_i < c4_numEl; c4_b_i++) {
        c4_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &(*c4_pEmxArray)->
          data[c4_b_i]);
      }

      if ((*c4_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c4_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)NULL;
  }
}

static void c4_emxInitMatrix_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_10 c4_pMatrix[2], const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_emxInitStruct_cell_wrap_10(chartInstance, c4_sp, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxInitStruct_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_10 *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_pStruct->f1, 1, c4_srcLocation);
}

static void c4_emxFreeMatrix_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, c4_cell_wrap_10 c4_pMatrix[2])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_emxFreeStruct_cell_wrap_10(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_emxFreeStruct_cell_wrap_10(SFc4_ver_1InstanceStruct
  *chartInstance, c4_cell_wrap_10 *c4_pStruct)
{
  c4_emxFree_real_T(chartInstance, &c4_pStruct->f1);
}

static int32_T c4_div_nzp_s32(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_numerator, int32_T c4_denominator, int32_T c4_EMLOvCount_src_loc, uint32_T
  c4_ssid_src_loc, int32_T c4_offset_src_loc, int32_T c4_length_src_loc)
{
  int32_T c4_quotient;
  uint32_T c4_absDenominator;
  uint32_T c4_absNumerator;
  uint32_T c4_tempAbsQuotient;
  boolean_T c4_quotientNeedsNegation;
  (void)chartInstance;
  (void)c4_EMLOvCount_src_loc;
  (void)c4_ssid_src_loc;
  (void)c4_offset_src_loc;
  (void)c4_length_src_loc;
  if (c4_numerator < 0) {
    c4_absNumerator = ~(uint32_T)c4_numerator + 1U;
  } else {
    c4_absNumerator = (uint32_T)c4_numerator;
  }

  if (c4_denominator < 0) {
    c4_absDenominator = ~(uint32_T)c4_denominator + 1U;
  } else {
    c4_absDenominator = (uint32_T)c4_denominator;
  }

  c4_quotientNeedsNegation = ((c4_numerator < 0) != (c4_denominator < 0));
  c4_tempAbsQuotient = c4_absNumerator / c4_absDenominator;
  if (c4_quotientNeedsNegation) {
    c4_quotient = -(int32_T)c4_tempAbsQuotient;
  } else {
    c4_quotient = (int32_T)c4_tempAbsQuotient;
  }

  return c4_quotient;
}

static int32_T c4_div_s32(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_numerator, int32_T c4_denominator, int32_T c4_EMLOvCount_src_loc, uint32_T
  c4_ssid_src_loc, int32_T c4_offset_src_loc, int32_T c4_length_src_loc)
{
  int32_T c4_quotient;
  uint32_T c4_absDenominator;
  uint32_T c4_absNumerator;
  uint32_T c4_tempAbsQuotient;
  boolean_T c4_quotientNeedsNegation;
  (void)c4_EMLOvCount_src_loc;
  if (c4_denominator == 0) {
    if (c4_numerator >= 0) {
      c4_quotient = MAX_int32_T;
    } else {
      c4_quotient = MIN_int32_T;
    }

    sf_data_divide_by_zero_error(chartInstance->S, c4_ssid_src_loc,
      c4_offset_src_loc, c4_length_src_loc);
  } else {
    if (c4_numerator < 0) {
      c4_absNumerator = ~(uint32_T)c4_numerator + 1U;
    } else {
      c4_absNumerator = (uint32_T)c4_numerator;
    }

    if (c4_denominator < 0) {
      c4_absDenominator = ~(uint32_T)c4_denominator + 1U;
    } else {
      c4_absDenominator = (uint32_T)c4_denominator;
    }

    c4_quotientNeedsNegation = ((c4_numerator < 0) != (c4_denominator < 0));
    c4_tempAbsQuotient = c4_absNumerator / c4_absDenominator;
    if (c4_quotientNeedsNegation) {
      c4_quotient = -(int32_T)c4_tempAbsQuotient;
    } else {
      c4_quotient = (int32_T)c4_tempAbsQuotient;
    }
  }

  return c4_quotient;
}

static int32_T c4__s32_minus__(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_b, int32_T c4_c, int32_T c4_EMLOvCount_src_loc, uint32_T c4_ssid_src_loc,
  int32_T c4_offset_src_loc, int32_T c4_length_src_loc)
{
  int32_T c4_a;
  (void)c4_EMLOvCount_src_loc;
  c4_a = c4_b - c4_c;
  if (((c4_b ^ c4_a) & (c4_b ^ c4_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c4_ssid_src_loc, c4_offset_src_loc,
      c4_length_src_loc);
  }

  return c4_a;
}

static int32_T c4__s32_add__(SFc4_ver_1InstanceStruct *chartInstance, int32_T
  c4_b, int32_T c4_c, int32_T c4_EMLOvCount_src_loc, uint32_T c4_ssid_src_loc,
  int32_T c4_offset_src_loc, int32_T c4_length_src_loc)
{
  int32_T c4_a;
  (void)c4_EMLOvCount_src_loc;
  c4_a = c4_b + c4_c;
  if (((c4_a ^ c4_b) & (c4_a ^ c4_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c4_ssid_src_loc, c4_offset_src_loc,
      c4_length_src_loc);
  }

  return c4_a;
}

static int32_T c4__s32_s64_(SFc4_ver_1InstanceStruct *chartInstance, int64_T
  c4_b, int32_T c4_EMLOvCount_src_loc, uint32_T c4_ssid_src_loc, int32_T
  c4_offset_src_loc, int32_T c4_length_src_loc)
{
  int32_T c4_a;
  (void)c4_EMLOvCount_src_loc;
  c4_a = (int32_T)c4_b;
  if ((int64_T)c4_a != c4_b) {
    sf_data_overflow_error(chartInstance->S, c4_ssid_src_loc, c4_offset_src_loc,
      c4_length_src_loc);
  }

  return c4_a;
}

static void init_dsm_address_info(SFc4_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_ver_1InstanceStruct *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_b_Im_Depth = (real32_T (*)[2073600])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c4_x = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c4_bboxes = (real32_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_y = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    2);
  chartInstance->c4_cx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c4_cy = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_ver_1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2669052449U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3608065038U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3307385576U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2504169593U);
}

mxArray *sf_c4_ver_1_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,4);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.TbbhistBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.Bwlookup_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c4_ver_1_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("getnumcores");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_ver_1_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_ver_1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA2YGFgYAPSHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/ggPYf0j6WbDoZ0LSLwDkJVdAwgUWPgPnfiXy3F"
    "85WNwvQ5T7GVHcz8hQwTBY3C9ClvsrqeZ+SPolXz/Efg8C7hdCcT+En1kcn5hcklmWGp9sEl+WW"
    "hRviDAPBACr3yEI"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_ver_1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sKAF5f4WH4vMz91sVFoTNTE";
}

static void sf_opaque_initialize_c4_ver_1(void *chartInstanceVar)
{
  initialize_params_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
  initialize_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_ver_1(void *chartInstanceVar)
{
  enable_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_ver_1(void *chartInstanceVar)
{
  disable_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_ver_1(void *chartInstanceVar)
{
  sf_gateway_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_ver_1(SimStruct* S)
{
  return get_sim_state_c4_ver_1((SFc4_ver_1InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_ver_1(SimStruct* S, const mxArray *st)
{
  set_sim_state_c4_ver_1((SFc4_ver_1InstanceStruct*)sf_get_chart_instance_ptr(S),
    st);
}

static void sf_opaque_cleanup_runtime_resources_c4_ver_1(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_ver_1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ver_1_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_ver_1((SFc4_ver_1InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_ver_1(void *chartInstanceVar)
{
  mdl_start_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c4_ver_1(void *chartInstanceVar)
{
  mdl_terminate_c4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_ver_1((SFc4_ver_1InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_ver_1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_ver_1((SFc4_ver_1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc4_ver_1((SFc4_ver_1InstanceStruct*)sf_get_chart_instance_ptr
      (S));
  }
}

const char* sf_c4_ver_1_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtV91u40QUtqPsikqwqlYrcbOIFTdwyUpFghvYNonZiGZb4bR7WU3HJ/GQ8YyZHzdBXHIJD8J",
    "T8A5c7SVvAOIJOGO7aeLYSZuyS0FMNXHH850z3/mZM2PP7w88bA+wp4887z4+38Le8op2rxz7C7",
    "143/Y+LMc/oZCwyTFRJNHe2iZIAl+DltwaJkVfjGQtjIkRKBAUsalUpkmbZonlTEwCK6jTp1/Gj",
    "MZhLC2PDlCWREeCz1Bbas0x6ukyBdQEAJGJlbTjOOBkPGeszEUnBjrRNllnggYT2tTR0gPLDUs5",
    "9KZA+0Ibgoz1FbfQEAMdM20001mqw0ugTFLOiKi1NiY6hBQdbOAkjfD3yBo0qgqjMVHmAGKSgT5",
    "kk1ynFFDVyTROnDNBjFSM8F7CO05wldsxRz4DGQFf4xDkdqCATFLJhGmOfxigpT1Bzjl04dyOm7",
    "WF8K11wT9lcAGq0W+jjsxAkTEcicZFc4f0pnm05lmyCjMsgVOi9inGT0PUmL2YOTokGCcYokQTD",
    "HIj+3qoWIbubdRmk77LzE1bxiZFsPUmWK6tl8G6KMy1BVR0COe6ETaU6SFkwHOtXWLIelihtR6n",
    "NYuGEh3s0rt5N1jBMPAlrCNFxGrDlVUAed15gYVlGUmtNjLpYPJ2Dw9Xp1dhfWFAjQiFuiqgCNO",
    "APsvd26wtYtrFHoHIyuT06sBFhmxCeXpkRfdCqgn6ZE0RuTLBRbQRmOgxxhJ3wonGTbMO5mK5CU",
    "cJjSFyBYZxGOC2QWyNT7Qrbfu47zJmZl3QVLG0JqoWdx2WoZ5LqFkKJ2Ii5IUIlEzCssYX7gXAb",
    "CNKMDE+wPqlZgGuXhcKd5597F2dZ29f4zy7lKs+P1rQ49fo8Rae1XV3Wsv4VmXdFv75fiH3bEHu",
    "nco67Yqcw+1i/z599d4PX/46/PnP338c/7Lzzab1/ZX1/fx/J/db+2bn/4Ny/Piy0M43TraSrw7",
    "7fIFXu0b/uwv6d8ux/mo/+GS09/L5Xjb47rOn+jSQwxfDXuHnDXzvVfhevn/iKj5mWZ6fivaj8m",
    "LixsQWx7XT/+kC3/sb/LFTvi/aH1/cTv7Js2oc6/zVWvJXy6PT5bz95/h/sB3/2V3h//ha/P0l/",
    "r439e4K/0db8Z/9bfyL/N1e/nr14mGlXjzM74VnxJ02cEb3zvB6ePZ0tZ5vWx9vKue9Ybl/C8//",
    "/fL67bvOfae1pVz7lverNyV3W/tueu+7a/h19d+r4HfvsB23vY+/bvwr72b35vfL8efzT+NOzHh",
    "U85VUTuMnz6hu9j+Qp38BPQm4VA==",
    ""
  };

  static char newstr [1305] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_ver_1(SimStruct *S)
{
  const char* newstr = sf_c4_ver_1_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(500723836U));
  ssSetChecksum1(S,(1423067012U));
  ssSetChecksum2(S,(2364535465U));
  ssSetChecksum3(S,(1779023719U));
}

static void mdlRTW_c4_ver_1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_ver_1(SimStruct *S)
{
  SFc4_ver_1InstanceStruct *chartInstance;
  chartInstance = (SFc4_ver_1InstanceStruct *)utMalloc(sizeof
    (SFc4_ver_1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_ver_1InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_ver_1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c4_ver_1;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_ver_1;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c4_ver_1;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_ver_1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_ver_1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_ver_1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c4_ver_1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c4_ver_1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c4_ver_1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_ver_1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_ver_1;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_ver_1(chartInstance);
}

void c4_ver_1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_ver_1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_ver_1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_ver_1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_ver_1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
