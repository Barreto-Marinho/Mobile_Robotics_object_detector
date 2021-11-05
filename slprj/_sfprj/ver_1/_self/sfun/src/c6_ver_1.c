/* Include files */

#include "ver_1_sfun.h"
#include "c6_ver_1.h"
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
static emlrtMCInfo c6_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c6_b_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c6_c_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c6_d_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c6_e_emlrtMCI = { 38,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c6_f_emlrtMCI = { 271,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c6_g_emlrtMCI = { 124,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c6_h_emlrtMCI = { 417,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtMCInfo c6_i_emlrtMCI = { 26,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c6_j_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c6_k_emlrtMCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c6_l_emlrtMCI = { 23,/* lineNo */
  1,                                   /* colNo */
  "imreconstruct",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pName */
};

static emlrtMCInfo c6_m_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c6_n_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c6_o_emlrtMCI = { 83,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c6_p_emlrtMCI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtMCInfo c6_q_emlrtMCI = { 81,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c6_r_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c6_s_emlrtMCI = { 121,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtRSInfo c6_emlrtRSI = { 13, /* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c6_b_emlrtRSI = { 15,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c6_c_emlrtRSI = { 25,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c6_d_emlrtRSI = { 38,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c6_e_emlrtRSI = { 42,/* lineNo */
  "calculo_depth_simulink",            /* fcnName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pathName */
};

static emlrtRSInfo c6_f_emlrtRSI = { 3,/* lineNo */
  "Detection object/MATLAB Function2", /* fcnName */
  "#ver_1:157"                         /* pathName */
};

static emlrtRSInfo c6_g_emlrtRSI = { 76,/* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo c6_h_emlrtRSI = { 259,/* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo c6_i_emlrtRSI = { 52,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c6_j_emlrtRSI = { 45,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c6_k_emlrtRSI = { 66,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c6_l_emlrtRSI = { 17,/* lineNo */
  "scalexpAlloc",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pathName */
};

static emlrtRSInfo c6_m_emlrtRSI = { 20,/* lineNo */
  "scalexpAllocNoCheck",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pathName */
};

static emlrtRSInfo c6_n_emlrtRSI = { 127,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c6_o_emlrtRSI = { 200,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo c6_p_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c6_q_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_r_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_s_emlrtRSI = { 311,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_t_emlrtRSI = { 323,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_u_emlrtRSI = { 452,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_v_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c6_w_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c6_x_emlrtRSI = { 17,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c6_y_emlrtRSI = { 38,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ab_emlrtRSI = { 77,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_bb_emlrtRSI = { 161,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_cb_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c6_db_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c6_eb_emlrtRSI = { 197,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_fb_emlrtRSI = { 87,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_gb_emlrtRSI = { 99,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_hb_emlrtRSI = { 78,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ib_emlrtRSI = { 75,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_jb_emlrtRSI = { 73,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_kb_emlrtRSI = { 32,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_lb_emlrtRSI = { 79,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_mb_emlrtRSI = { 71,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_nb_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_ob_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_pb_emlrtRSI = { 57,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_qb_emlrtRSI = { 44,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_rb_emlrtRSI = { 23,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_sb_emlrtRSI = { 33,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_tb_emlrtRSI = { 51,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_ub_emlrtRSI = { 114,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_vb_emlrtRSI = { 149,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_wb_emlrtRSI = { 150,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_xb_emlrtRSI = { 153,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c6_yb_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c6_ac_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c6_bc_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c6_cc_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c6_dc_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_ec_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_fc_emlrtRSI = { 53,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_gc_emlrtRSI = { 57,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_hc_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_ic_emlrtRSI = { 182,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_jc_emlrtRSI = { 183,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_kc_emlrtRSI = { 184,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_lc_emlrtRSI = { 189,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_mc_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c6_nc_emlrtRSI = { 14,/* lineNo */
  "cumsum",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"/* pathName */
};

static emlrtRSInfo c6_oc_emlrtRSI = { 16,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_pc_emlrtRSI = { 32,/* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo c6_qc_emlrtRSI = { 99,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_rc_emlrtRSI = { 125,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_sc_emlrtRSI = { 290,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c6_tc_emlrtRSI = { 1293,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_uc_emlrtRSI = { 1468,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_vc_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c6_wc_emlrtRSI = { 1840,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_xc_emlrtRSI = { 295,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_yc_emlrtRSI = { 351,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ad_emlrtRSI = { 362,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_bd_emlrtRSI = { 698,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_cd_emlrtRSI = { 712,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_dd_emlrtRSI = { 713,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ed_emlrtRSI = { 715,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_fd_emlrtRSI = { 716,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_gd_emlrtRSI = { 722,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_hd_emlrtRSI = { 723,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_id_emlrtRSI = { 565,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_jd_emlrtRSI = { 581,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_kd_emlrtRSI = { 536,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ld_emlrtRSI = { 546,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_md_emlrtRSI = { 547,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_nd_emlrtRSI = { 770,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_od_emlrtRSI = { 772,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_pd_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_qd_emlrtRSI = { 22,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c6_rd_emlrtRSI = { 96,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c6_sd_emlrtRSI = { 15,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c6_td_emlrtRSI = { 46,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ud_emlrtRSI = { 92,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_vd_emlrtRSI = { 197,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_wd_emlrtRSI = { 288,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_xd_emlrtRSI = { 356,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_yd_emlrtRSI = { 438,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ae_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c6_be_emlrtRSI = { 44,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ce_emlrtRSI = { 79,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_de_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_ee_emlrtRSI = { 117,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_fe_emlrtRSI = { 311,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_ge_emlrtRSI = { 320,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c6_he_emlrtRSI = { 175,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ie_emlrtRSI = { 871,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_je_emlrtRSI = { 54,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c6_ke_emlrtRSI = { 103,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c6_le_emlrtRSI = { 185,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_me_emlrtRSI = { 867,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ne_emlrtRSI = { 194,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c6_oe_emlrtRSI = { 193,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c6_pe_emlrtRSI = { 190,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c6_qe_emlrtRSI = { 181,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c6_re_emlrtRSI = { 177,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c6_se_emlrtRSI = { 176,/* lineNo */
  "imfill",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imfill.m"/* pathName */
};

static emlrtRSInfo c6_te_emlrtRSI = { 66,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c6_ue_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c6_ve_emlrtRSI = { 405,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c6_we_emlrtRSI = { 420,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c6_xe_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c6_ye_emlrtRSI = { 15,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c6_af_emlrtRSI = { 138,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c6_bf_emlrtRSI = { 198,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c6_cf_emlrtRSI = { 375,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_df_emlrtRSI = { 379,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ef_emlrtRSI = { 420,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ff_emlrtRSI = { 424,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_gf_emlrtRSI = { 49,/* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo c6_hf_emlrtRSI = { 437,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_if_emlrtRSI = { 441,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_jf_emlrtRSI = { 56,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c6_kf_emlrtRSI = { 58,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c6_lf_emlrtRSI = { 60,/* lineNo */
  "bweuler",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\bweuler.m"/* pathName */
};

static emlrtRSInfo c6_mf_emlrtRSI = { 145,/* lineNo */
  "bwlookup",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtRSInfo c6_nf_emlrtRSI = { 334,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_of_emlrtRSI = { 339,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_pf_emlrtRSI = { 458,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_qf_emlrtRSI = { 469,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_rf_emlrtRSI = { 470,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_sf_emlrtRSI = { 471,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_tf_emlrtRSI = { 472,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_uf_emlrtRSI = { 485,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_vf_emlrtRSI = { 486,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_wf_emlrtRSI = { 492,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_xf_emlrtRSI = { 493,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_yf_emlrtRSI = { 503,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ag_emlrtRSI = { 504,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_bg_emlrtRSI = { 510,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_cg_emlrtRSI = { 511,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_dg_emlrtRSI = { 606,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_eg_emlrtRSI = { 608,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_fg_emlrtRSI = { 635,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_gg_emlrtRSI = { 636,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_hg_emlrtRSI = { 637,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ig_emlrtRSI = { 640,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_jg_emlrtRSI = { 641,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_kg_emlrtRSI = { 642,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_lg_emlrtRSI = { 643,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_mg_emlrtRSI = { 644,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ng_emlrtRSI = { 649,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_og_emlrtRSI = { 653,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_pg_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c6_qg_emlrtRSI = { 80,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c6_rg_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo c6_sg_emlrtRSI = { 673,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_tg_emlrtRSI = { 675,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ug_emlrtRSI = { 798,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_vg_emlrtRSI = { 803,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_wg_emlrtRSI = { 814,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_xg_emlrtRSI = { 842,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_yg_emlrtRSI = { 855,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ah_emlrtRSI = { 859,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_bh_emlrtRSI = { 1049,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ch_emlrtRSI = { 1054,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_dh_emlrtRSI = { 955,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_eh_emlrtRSI = { 974,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_fh_emlrtRSI = { 976,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_gh_emlrtRSI = { 980,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_hh_emlrtRSI = { 1860,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ih_emlrtRSI = { 1861,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_jh_emlrtRSI = { 1874,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_kh_emlrtRSI = { 1875,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_lh_emlrtRSI = { 1880,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_mh_emlrtRSI = { 1881,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_nh_emlrtRSI = { 1121,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_oh_emlrtRSI = { 1135,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ph_emlrtRSI = { 1138,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_qh_emlrtRSI = { 1143,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_rh_emlrtRSI = { 1152,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_sh_emlrtRSI = { 1167,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_th_emlrtRSI = { 1171,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_uh_emlrtRSI = { 1182,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_vh_emlrtRSI = { 1187,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_wh_emlrtRSI = { 1199,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_xh_emlrtRSI = { 1204,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_yh_emlrtRSI = { 392,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ai_emlrtRSI = { 402,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_bi_emlrtRSI = { 408,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_ci_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_di_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_ei_emlrtRSI = { 158,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_fi_emlrtRSI = { 382,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_gi_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c6_hi_emlrtRSI = { 43,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c6_ii_emlrtRSI = { 17,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c6_ji_emlrtRSI = { 40,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c6_ki_emlrtRSI = { 90,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRTEInfo c6_emlrtRTEI = { 6,/* lineNo */
  24,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_b_emlrtRTEI = { 6,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_c_emlrtRTEI = { 10,/* lineNo */
  22,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_d_emlrtRTEI = { 3,/* lineNo */
  5,                                   /* colNo */
  "Detection object/MATLAB Function2", /* fName */
  "#ver_1:157"                         /* pName */
};

static emlrtRTEInfo c6_e_emlrtRTEI = { 13,/* lineNo */
  29,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_f_emlrtRTEI = { 19,/* lineNo */
  33,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_g_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_h_emlrtRTEI = { 20,/* lineNo */
  27,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_i_emlrtRTEI = { 20,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_j_emlrtRTEI = { 22,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_k_emlrtRTEI = { 25,/* lineNo */
  29,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_l_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_m_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_n_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_o_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_p_emlrtRTEI = { 42,/* lineNo */
  32,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_q_emlrtRTEI = { 42,/* lineNo */
  62,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_r_emlrtRTEI = { 42,/* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_s_emlrtRTEI = { 46,/* lineNo */
  13,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_t_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_u_emlrtRTEI = { 38,/* lineNo */
  10,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_v_emlrtRTEI = { 38,/* lineNo */
  19,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_w_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c6_x_emlrtRTEI = { 32,/* lineNo */
  25,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_y_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c6_ab_emlrtRTEI = { 1468,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_bb_emlrtRTEI = { 1840,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_cb_emlrtRTEI = { 291,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_db_emlrtRTEI = { 292,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_eb_emlrtRTEI = { 318,/* lineNo */
  30,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_fb_emlrtRTEI = { 17,/* lineNo */
  25,                                  /* colNo */
  "cumop",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pName */
};

static emlrtRTEInfo c6_gb_emlrtRTEI = { 295,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_hb_emlrtRTEI = { 298,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ib_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_jb_emlrtRTEI = { 75,/* lineNo */
  2,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_kb_emlrtRTEI = { 1719,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_lb_emlrtRTEI = { 220,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_mb_emlrtRTEI = { 233,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_nb_emlrtRTEI = { 234,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ob_emlrtRTEI = { 48,/* lineNo */
  27,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_pb_emlrtRTEI = { 49,/* lineNo */
  25,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_qb_emlrtRTEI = { 50,/* lineNo */
  28,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_rb_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_sb_emlrtRTEI = { 39,/* lineNo */
  35,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_tb_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ub_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_vb_emlrtRTEI = { 69,/* lineNo */
  41,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_wb_emlrtRTEI = { 69,/* lineNo */
  31,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_xb_emlrtRTEI = { 70,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_yb_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ac_emlrtRTEI = { 89,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_bc_emlrtRTEI = { 90,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_cc_emlrtRTEI = { 11,/* lineNo */
  6,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_dc_emlrtRTEI = { 11,/* lineNo */
  19,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_ec_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c6_fc_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_gc_emlrtRTEI = { 51,/* lineNo */
  57,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_hc_emlrtRTEI = { 51,/* lineNo */
  64,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c6_ic_emlrtRTEI = { 42,/* lineNo */
  42,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c6_jc_emlrtRTEI = { 51,/* lineNo */
  36,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c6_kc_emlrtRTEI = { 54,/* lineNo */
  44,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c6_lc_emlrtRTEI = { 57,/* lineNo */
  43,                                  /* colNo */
  "sumMatrixIncludeNaN",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pName */
};

static emlrtRTEInfo c6_mc_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "useConstantDim",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pName */
};

static emlrtRTEInfo c6_nc_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_oc_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_pc_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_qc_emlrtRTEI = { 43,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_rc_emlrtRTEI = { 44,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_sc_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_tc_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c6_uc_emlrtRTEI = { 414,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_vc_emlrtRTEI = { 38,/* lineNo */
  32,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c6_wc_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c6_xc_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c6_yc_emlrtRTEI = { 127,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo c6_ad_emlrtRTEI = { 36,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c6_bd_emlrtRTEI = { 769,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_cd_emlrtRTEI = { 424,/* lineNo */
  34,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_dd_emlrtRTEI = { 770,/* lineNo */
  41,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_ed_emlrtRTEI = { 774,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_fd_emlrtRTEI = { 104,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c6_gd_emlrtRTEI = { 111,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c6_hd_emlrtRTEI = { 772,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_id_emlrtRTEI = { 770,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c6_jd_emlrtRTEI = { 99,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtECInfo c6_emlrtECI = { -1, /* nDims */
  42,                                  /* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtRTEInfo c6_kd_emlrtRTEI = { 30,/* lineNo */
  20,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtECInfo c6_b_emlrtECI = { 2,/* nDims */
  20,                                  /* lineNo */
  18,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtECInfo c6_c_emlrtECI = { 2,/* nDims */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m"/* pName */
};

static emlrtBCInfo c6_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  31,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_emlrtDCI = { 31, /* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  31,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_b_emlrtDCI = { 32,/* lineNo */
  31,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_c_emlrtBCI = { 1,/* iFirst */
  1080,                                /* iLast */
  6,                                   /* lineNo */
  33,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_c_emlrtDCI = { 6,/* lineNo */
  33,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_d_emlrtBCI = { 1,/* iFirst */
  1920,                                /* iLast */
  6,                                   /* lineNo */
  69,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_d_emlrtDCI = { 6,/* lineNo */
  69,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  9,                                   /* colNo */
  "Im_Depth_box",                      /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_e_emlrtDCI = { 10,/* lineNo */
  9,                                   /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  49,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_f_emlrtDCI = { 31,/* lineNo */
  49,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  49,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_g_emlrtDCI = { 32,/* lineNo */
  49,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  25,                                  /* colNo */
  "stats",                             /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_h_emlrtDCI = { 33,/* lineNo */
  25,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  32,                                  /* colNo */
  "puntos_x",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_i_emlrtDCI = { 44,/* lineNo */
  32,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  51,                                  /* colNo */
  "puntos_y",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_j_emlrtDCI = { 44,/* lineNo */
  51,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_k_emlrtBCI = { 1,/* iFirst */
  1080,                                /* iLast */
  46,                                  /* lineNo */
  37,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_k_emlrtDCI = { 46,/* lineNo */
  37,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_l_emlrtBCI = { 1,/* iFirst */
  1920,                                /* iLast */
  46,                                  /* lineNo */
  73,                                  /* colNo */
  "Im_Depth",                          /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_l_emlrtDCI = { 46,/* lineNo */
  73,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  28,                                  /* colNo */
  "Im_Depth_box",                      /* aName */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_m_emlrtDCI = { 47,/* lineNo */
  28,                                  /* colNo */
  "calculo_depth_simulink",            /* fName */
  "D:\\Documentos\\8tvo_semestre\\Robotica_movil\\Proyecto\\Proyecto_robotica_movil\\Code_ros\\calculo_depth_simulink.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  604,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  614,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  623,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_n_emlrtDCI = { 84,/* lineNo */
  12,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  65,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1896,                                /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1898,                                /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1899,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_o_emlrtDCI = { 48,/* lineNo */
  33,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c6_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_eb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ib_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_p_emlrtDCI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c6_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_lb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ec_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c6_q_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c6_r_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c6_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_jc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  67,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_lc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_mc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_nc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_oc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_pc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_sc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_tc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_vc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_wc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_xc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_yc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ad_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_bd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_cd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  774,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_dd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_ed_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  772,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_fd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  769,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_gd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  770,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c6_hd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c6_li_emlrtRSI = { 32,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c6_mi_emlrtRSI = { 46,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_ni_emlrtRSI = { 44,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_oi_emlrtRSI = { 43,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_pi_emlrtRSI = { 40,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_qi_emlrtRSI = { 30,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c6_ri_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_si_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_ti_emlrtRSI = { 55,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_ui_emlrtRSI = { 39,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c6_vi_emlrtRSI = { 424,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

/* Function Declarations */
static void initialize_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void initialize_params_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void enable_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void disable_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void c6_update_jit_animation_state_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance);
static void c6_do_animation_call_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance);
static void set_sim_state_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_st);
static void sf_gateway_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void mdl_start_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void mdl_terminate_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance);
static void initSimStructsc6_ver_1(SFc6_ver_1InstanceStruct *chartInstance);
static void c6_check_forloop_overflow_error(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp);
static void c6_imhist(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack *
                      c6_sp, c6_emxArray_real32_T *c6_varargin_1, real_T
                      c6_yout[256]);
static void c6_warning(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp);
static void c6_b_warning(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp);
static void c6_regionprops(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_varargin_1,
  c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *c6_outstats);
static void c6_bwconncomp(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_varargin_1,
  c6_s_vX9LV7M75v5ZNol5H5URkE *c6_CC);
static real_T c6_sum(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c6_sp, c6_emxArray_int32_T *c6_b_x);
static real_T c6_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T *c6_b_x, int32_T c6_vlen);
static real_T c6_sumColumnB4(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_int32_T *c6_b_x, int32_T c6_vstart);
static real_T c6_b_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T *c6_b_x, int32_T c6_vlen, int32_T
  c6_vstart);
static void c6_useConstantDim(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T *c6_varargin_2, int32_T c6_varargin_3,
  c6_emxArray_int32_T *c6_varargout_1);
static void c6_assertValidSizeArg(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_varargin_1);
static void c6_ind2sub_indexClass(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_siz[2], c6_emxArray_real_T *c6_ndx,
  c6_emxArray_int32_T *c6_varargout_1, c6_emxArray_int32_T *c6_varargout_2);
static void c6_ComputeCentroid(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_imageSize[2], c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed,
  c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c6_b_stats, c6_sHtk0WM4OMtyqkehwQYcq2
  *c6_b_statsAlreadyComputed);
static real_T c6_c_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T *c6_b_x, int32_T c6_col, int32_T c6_vlen);
static real_T c6_b_sumColumnB4(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_real_T *c6_b_x, int32_T c6_col, int32_T c6_vstart);
static real_T c6_d_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T *c6_b_x, int32_T c6_col, int32_T c6_vlen,
  int32_T c6_vstart);
static void c6_power(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c6_sp, c6_emxArray_real_T *c6_a, c6_emxArray_real_T
                     *c6_b_y);
static void c6_indexShapeCheck(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, int32_T c6_matrixSize, int32_T c6_indexSize[2]);
static void c6_c_warning(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp);
static void c6_minimum(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, c6_emxArray_real_T *c6_b_x, real_T *c6_ex, int32_T *c6_idx);
static real_T c6_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance, const
  mxArray *c6_b_cx, const char_T *c6_identifier);
static real_T c6_b_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static uint8_T c6_c_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_ver_1, const char_T *c6_identifier);
static uint8_T c6_d_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_chart_data_browse_helper(SFc6_ver_1InstanceStruct *chartInstance,
  int32_T c6_ssIdNumber, const mxArray **c6_mxData, uint8_T *c6_isValueTooBig);
static const mxArray *c6_feval(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1);
static void c6_b_feval(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1);
static const mxArray *c6_c_feval(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1);
static void c6_d_feval(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1);
static const mxArray *c6_e_feval(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1);
static void c6_f_feval(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1);
static void c6_b_ComputeCentroid(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_imageSize[2], c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 *c6_statsAlreadyComputed);
static void c6_emxEnsureCapacity_real32_T(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_boolean_T(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_int32_T(SFc6_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_emxArray, int32_T c6_oldNumel,
  const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_real_T(SFc6_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray, int32_T c6_oldNumel,
  const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_real32_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real32_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_boolean_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_sPw6XcACqvsnFn0LPvB6yCC(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_sPw6XcACqvsnFn0LPvB6yC
  **c6_pEmxArray, int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_real_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray, int32_T c6_numDimensions,
  const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_int32_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFree_real32_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_real32_T **c6_pEmxArray);
static void c6_emxFree_boolean_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_boolean_T **c6_pEmxArray);
static void c6_emxFree_sPw6XcACqvsnFn0LPvB6yCC(SFc6_ver_1InstanceStruct
  *chartInstance, c6_emxArray_sPw6XcACqvsnFn0LPvB6yC **c6_pEmxArray);
static void c6_emxFree_real_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_real_T **c6_pEmxArray);
static void c6_emxFree_int32_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_int32_T **c6_pEmxArray);
static void c6_emxEnsureCapacity_boolean_T1(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_sPw6XcACqvsnF(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_sPw6XcACqvsnFn0LPvB6yC
  *c6_emxArray, int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFreeStruct_s_bxcgeNxEuVlgmMh(SFc6_ver_1InstanceStruct
  *chartInstance, c6_s_bxcgeNxEuVlgmMh5HwQaXB *c6_pStruct);
static void c6_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(SFc6_ver_1InstanceStruct
  *chartInstance, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c6_emxArray, int32_T
  c6_fromIndex, int32_T c6_toIndex);
static void c6_emxInitStruct_s_bxcgeNxEuVlgmMh(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_s_bxcgeNxEuVlgmMh5HwQaXB
  *c6_pStruct, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_real_T1(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray, int32_T c6_numDimensions,
  const emlrtRTEInfo *c6_srcLocation);
static void c6_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c6_emxArray, int32_T c6_fromIndex, int32_T c6_toIndex, const emlrtRTEInfo
  *c6_srcLocation);
static void c6_emxEnsureCapacity_s_bxcgeNxEuVl(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c6_emxArray, int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopyStruct_s_bxcgeNxEuVlgmMh(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_s_bxcgeNxEuVlgmMh5HwQaXB *c6_dst,
  const c6_s_bxcgeNxEuVlgmMh5HwQaXB *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopyMatrix_real_T(SFc6_ver_1InstanceStruct *chartInstance,
  real_T c6_dst[2], const real_T c6_src[2]);
static void c6_emxCopyMatrix_real_T1(SFc6_ver_1InstanceStruct *chartInstance,
  real_T c6_dst[4], const real_T c6_src[4]);
static void c6_emxCopy_boolean_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_dst, c6_emxArray_boolean_T *
  const *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopyMatrix_real_T2(SFc6_ver_1InstanceStruct *chartInstance,
  real_T c6_dst[16], const real_T c6_src[16]);
static void c6_emxCopy_real_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst, c6_emxArray_real_T * const
  *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxCopy_real_T1(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst, c6_emxArray_real_T * const
  *c6_src, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxEnsureCapacity_real_T1(SFc6_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray, int32_T c6_oldNumel,
  const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInitStruct_s_vX9LV7M75v5ZNol(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_s_vX9LV7M75v5ZNol5H5URkE
  *c6_pStruct, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  **c6_pEmxArray, int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxInit_boolean_T1(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation);
static void c6_emxFreeStruct_s_vX9LV7M75v5ZNol(SFc6_ver_1InstanceStruct
  *chartInstance, c6_s_vX9LV7M75v5ZNol5H5URkE *c6_pStruct);
static void c6_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(SFc6_ver_1InstanceStruct
  *chartInstance, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa **c6_pEmxArray);
static void c6_emxInitMatrix_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_10 c6_pMatrix[2], const
  emlrtRTEInfo *c6_srcLocation);
static void c6_emxInitStruct_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_10 *c6_pStruct, const
  emlrtRTEInfo *c6_srcLocation);
static void c6_emxFreeMatrix_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, c6_cell_wrap_10 c6_pMatrix[2]);
static void c6_emxFreeStruct_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, c6_cell_wrap_10 *c6_pStruct);
static int32_T c6_div_nzp_s32(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_numerator, int32_T c6_denominator, int32_T c6_EMLOvCount_src_loc, uint32_T
  c6_ssid_src_loc, int32_T c6_offset_src_loc, int32_T c6_length_src_loc);
static int32_T c6_div_s32(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_numerator, int32_T c6_denominator, int32_T c6_EMLOvCount_src_loc, uint32_T
  c6_ssid_src_loc, int32_T c6_offset_src_loc, int32_T c6_length_src_loc);
static int32_T c6__s32_minus__(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_b, int32_T c6_c, int32_T c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc,
  int32_T c6_offset_src_loc, int32_T c6_length_src_loc);
static int32_T c6__s32_add__(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_b, int32_T c6_c, int32_T c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc,
  int32_T c6_offset_src_loc, int32_T c6_length_src_loc);
static int32_T c6__s32_s64_(SFc6_ver_1InstanceStruct *chartInstance, int64_T
  c6_b, int32_T c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc, int32_T
  c6_offset_src_loc, int32_T c6_length_src_loc);
static void init_dsm_address_info(SFc6_ver_1InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc6_ver_1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  emlrtStack c6_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c6_st.tls = chartInstance->c6_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c6_st, (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_is_active_c6_ver_1 = 0U;
}

static void initialize_params_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_jit_animation_state_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c6_do_animation_call_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance)
{
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_g_y = NULL;
  const mxArray *c6_st;
  c6_st = NULL;
  c6_st = NULL;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_createcellmatrix(5, 1), false);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", chartInstance->c6_cx, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_b_y, 0, c6_c_y);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", chartInstance->c6_cy, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_b_y, 1, c6_d_y);
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", chartInstance->c6_x, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_b_y, 2, c6_e_y);
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", chartInstance->c6_y, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_b_y, 3, c6_f_y);
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y",
    &chartInstance->c6_is_active_c6_ver_1, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_b_y, 4, c6_g_y);
  sf_mex_assign(&c6_st, c6_b_y, false);
  return c6_st;
}

static void set_sim_state_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_st)
{
  const mxArray *c6_u;
  chartInstance->c6_doneDoubleBufferReInit = true;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_cx = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "cx");
  *chartInstance->c6_cy = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 1)), "cy");
  *chartInstance->c6_x = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 2)), "x");
  *chartInstance->c6_y = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 3)), "y");
  chartInstance->c6_is_active_c6_ver_1 = c6_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 4)), "is_active_c6_ver_1");
  sf_mex_destroy(&c6_u);
  sf_mex_destroy(&c6_st);
}

static void sf_gateway_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  static char_T c6_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  c6_emxArray_boolean_T *c6_BW;
  c6_emxArray_boolean_T *c6_b_BW;
  c6_emxArray_int32_T *c6_ii;
  c6_emxArray_int32_T *c6_varargout_4;
  c6_emxArray_real32_T *c6_Im_Depth_box;
  c6_emxArray_real32_T *c6_Immask;
  c6_emxArray_real32_T *c6_e_Im_Depth_box;
  c6_emxArray_real_T *c6_b_puntos_x;
  c6_emxArray_real_T *c6_b_puntos_y;
  c6_emxArray_real_T *c6_b_varargin_1;
  c6_emxArray_real_T *c6_puntos_x;
  c6_emxArray_real_T *c6_puntos_y;
  c6_emxArray_real_T *c6_r;
  c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *c6_stats;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_g_st;
  emlrtStack c6_h_st;
  emlrtStack c6_i_st;
  emlrtStack c6_j_st;
  emlrtStack c6_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  real_T c6_counts[256];
  real_T c6_varargin_1[254];
  real_T c6_centroide[2];
  real_T c6_siz[2];
  real_T c6_Centroid_x;
  real_T c6_Centroid_y;
  real_T c6_acum_area;
  real_T c6_b_centroide;
  real_T c6_b_cx;
  real_T c6_b_cy;
  real_T c6_b_ex;
  real_T c6_b_posicion;
  real_T c6_b_stat;
  real_T c6_b_x;
  real_T c6_b_y;
  real_T c6_c_centroide;
  real_T c6_c_cx;
  real_T c6_c_cy;
  real_T c6_c_posicion;
  real_T c6_c_x;
  real_T c6_c_y;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d3;
  real_T c6_d4;
  real_T c6_d5;
  real_T c6_d_posicion;
  real_T c6_d_x;
  real_T c6_e_posicion;
  real_T c6_e_x;
  real_T c6_ex;
  real_T c6_f_x;
  real_T c6_g_x;
  real_T c6_h_x;
  real_T c6_i_x;
  real_T c6_posicion;
  int32_T c6_iv[2];
  int32_T c6_iv1[2];
  int32_T c6_iv2[2];
  int32_T c6_iv3[2];
  int32_T c6_iv4[2];
  int32_T c6_b_Im_Depth_box;
  int32_T c6_b_i;
  int32_T c6_b_idx;
  int32_T c6_b_ii;
  int32_T c6_b_iindx;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_b_nx;
  int32_T c6_c_Im_Depth_box;
  int32_T c6_c_b;
  int32_T c6_c_i;
  int32_T c6_c_idx;
  int32_T c6_c_ii;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_d_Im_Depth_box;
  int32_T c6_d_b;
  int32_T c6_d_idx;
  int32_T c6_d_loop_ub;
  int32_T c6_e_idx;
  int32_T c6_e_loop_ub;
  int32_T c6_end;
  int32_T c6_f_idx;
  int32_T c6_f_loop_ub;
  int32_T c6_first;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i9;
  int32_T c6_i_loop_ub;
  int32_T c6_idx;
  int32_T c6_iindx;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_l_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_m_loop_ub;
  int32_T c6_n_loop_ub;
  int32_T c6_nx;
  int32_T c6_o_loop_ub;
  int32_T c6_p_loop_ub;
  int32_T c6_partialTrueCount;
  int32_T c6_q_loop_ub;
  int32_T c6_r_loop_ub;
  int32_T c6_s_loop_ub;
  int32_T c6_stat;
  int32_T c6_t_loop_ub;
  int32_T c6_trueCount;
  real32_T c6_b_bboxes[4];
  real32_T c6_c_bboxes;
  real32_T c6_d_bboxes;
  real32_T c6_e_bboxes;
  real32_T c6_f_bboxes;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_overflow;
  boolean_T c6_b_p;
  boolean_T c6_c_p;
  boolean_T c6_d_p;
  boolean_T c6_e_b;
  boolean_T c6_e_p;
  boolean_T c6_exitg1;
  boolean_T c6_f_b;
  boolean_T c6_f_p;
  boolean_T c6_g_b;
  boolean_T c6_guard1 = false;
  boolean_T c6_overflow;
  boolean_T c6_p;
  c6_st.tls = chartInstance->c6_fEmlrtCtx;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_g_st.prev = &c6_f_st;
  c6_g_st.tls = c6_f_st.tls;
  c6_h_st.prev = &c6_g_st;
  c6_h_st.tls = c6_g_st.tls;
  c6_i_st.prev = &c6_h_st;
  c6_i_st.tls = c6_h_st.tls;
  c6_j_st.prev = &c6_i_st;
  c6_j_st.tls = c6_i_st.tls;
  chartInstance->c6_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c6_i = 0; c6_i < 4; c6_i++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 1U, (real_T)
                      (*chartInstance->c6_bboxes)[c6_i]);
  }

  for (c6_i1 = 0; c6_i1 < 2073600; c6_i1++) {
    covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 0U, (real_T)
                      (*chartInstance->c6_b_Im_Depth)[c6_i1]);
  }

  chartInstance->c6_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c6_covrtInstance, 4U, 0, 0);
  c6_b_st.site = &c6_f_emlrtRSI;
  for (c6_i2 = 0; c6_i2 < 4; c6_i2++) {
    c6_b_bboxes[c6_i2] = (*chartInstance->c6_bboxes)[c6_i2];
  }

  for (c6_i3 = 0; c6_i3 < 2073600; c6_i3++) {
    chartInstance->c6_Im_Depth[c6_i3] = (*chartInstance->c6_b_Im_Depth)[c6_i3];
  }

  covrtEmlFcnEval(chartInstance->c6_covrtInstance, 14U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 14U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        14U, 0U, 0U, (real_T)c6_b_bboxes[2], 0.0, -1, 4U, c6_b_bboxes[2] > 0.0F)))
  {
    c6_emxInit_real32_T(chartInstance, &c6_b_st, &c6_Im_Depth_box, 2,
                        &c6_b_emlrtRTEI);
    c6_c_bboxes = c6_b_bboxes[1];
    c6_d_bboxes = c6_b_bboxes[0];
    c6_i4 = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1];
    c6_Im_Depth_box->size[0] = (int32_T)muSingleScalarFloor(c6_b_bboxes[3]) + 1;
    c6_Im_Depth_box->size[1] = (int32_T)muSingleScalarFloor(c6_b_bboxes[2]) + 1;
    c6_emxEnsureCapacity_real32_T(chartInstance, &c6_b_st, c6_Im_Depth_box,
      c6_i4, &c6_emlrtRTEI);
    c6_loop_ub = (int32_T)muSingleScalarFloor(c6_b_bboxes[2]);
    for (c6_i5 = 0; c6_i5 <= c6_loop_ub; c6_i5++) {
      c6_b_loop_ub = (int32_T)muSingleScalarFloor(c6_b_bboxes[3]);
      for (c6_i8 = 0; c6_i8 <= c6_b_loop_ub; c6_i8++) {
        c6_d = c6_c_bboxes + (real32_T)c6_i8;
        if (c6_d != (real_T)(int32_T)muDoubleScalarFloor(c6_d)) {
          emlrtIntegerCheckR2012b(c6_d, &c6_c_emlrtDCI, &c6_b_st);
        }

        c6_i11 = (int32_T)(real32_T)c6_d;
        if ((c6_i11 < 1) || (c6_i11 > 1080)) {
          emlrtDynamicBoundsCheckR2012b(c6_i11, 1, 1080, &c6_c_emlrtBCI,
            &c6_b_st);
        }

        c6_d1 = c6_d_bboxes + (real32_T)c6_i5;
        if (c6_d1 != (real_T)(int32_T)muDoubleScalarFloor(c6_d1)) {
          emlrtIntegerCheckR2012b(c6_d1, &c6_d_emlrtDCI, &c6_b_st);
        }

        c6_i13 = (int32_T)(real32_T)c6_d1;
        if ((c6_i13 < 1) || (c6_i13 > 1920)) {
          emlrtDynamicBoundsCheckR2012b(c6_i13, 1, 1920, &c6_d_emlrtBCI,
            &c6_b_st);
        }

        c6_Im_Depth_box->data[c6_i8 + c6_Im_Depth_box->size[0] * c6_i5] =
          chartInstance->c6_Im_Depth[((int32_T)(real32_T)c6_i11 + 1080 *
          ((int32_T)(real32_T)c6_i13 - 1)) - 1];
      }
    }

    c6_i6 = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1];
    c6_i7 = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1];
    c6_emxEnsureCapacity_real32_T(chartInstance, &c6_b_st, c6_Im_Depth_box,
      c6_i7, &c6_b_emlrtRTEI);
    c6_i9 = c6_i6;
    c6_c_loop_ub = c6_i9 - 1;
    for (c6_i10 = 0; c6_i10 <= c6_c_loop_ub; c6_i10++) {
      c6_Im_Depth_box->data[c6_i10] /= 5.0F;
    }

    c6_emxInit_boolean_T(chartInstance, &c6_b_st, &c6_BW, 2, &c6_j_emlrtRTEI);
    c6_i12 = c6_BW->size[0] * c6_BW->size[1];
    c6_BW->size[0] = c6_Im_Depth_box->size[0];
    c6_BW->size[1] = c6_Im_Depth_box->size[1];
    c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_b_st, c6_BW, c6_i12,
      &c6_c_emlrtRTEI);
    c6_d_loop_ub = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1] - 1;
    for (c6_i14 = 0; c6_i14 <= c6_d_loop_ub; c6_i14++) {
      c6_BW->data[c6_i14] = muSingleScalarIsNaN(c6_Im_Depth_box->data[c6_i14]);
    }

    c6_end = c6__s32_s64_(chartInstance, (int64_T)c6_BW->size[0] * (int64_T)
                          c6_BW->size[1], 0, 1U, 53, 52);
    c6_trueCount = 0;
    c6_b_i = 0;
    while (c6_b_i <= c6__s32_minus__(chartInstance, c6_end, 1, 0, 1U, 53, 52)) {
      if (c6_BW->data[c6_b_i]) {
        c6_trueCount = c6__s32_add__(chartInstance, c6_trueCount, 1, 0, 1U, 53,
          52);
      }

      c6_b_i = c6__s32_add__(chartInstance, c6_b_i, 1, 0, 1U, 53, 52);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c6_emxInit_int32_T(chartInstance, &c6_b_st, &c6_ii, 1, &c6_w_emlrtRTEI);
    c6_i15 = c6_ii->size[0];
    c6_ii->size[0] = c6_trueCount;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_ii, c6_i15,
      &c6_d_emlrtRTEI);
    c6_partialTrueCount = 0;
    c6_c_i = 0;
    while (c6_c_i <= c6__s32_minus__(chartInstance, c6_end, 1, 0, 1U, 53, 52)) {
      if (c6_BW->data[c6_c_i]) {
        c6_ii->data[c6_partialTrueCount] = c6__s32_add__(chartInstance, c6_c_i,
          1, 0, 1U, 53, 52);
        c6_partialTrueCount = c6__s32_add__(chartInstance, c6_partialTrueCount,
          1, 0, 1U, 53, 52);
      }

      c6_c_i = c6__s32_add__(chartInstance, c6_c_i, 1, 0, 1U, 53, 52);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c6_i16 = c6_ii->size[0];
    c6_b_Im_Depth_box = c6_Im_Depth_box->size[0];
    c6_c_Im_Depth_box = c6_Im_Depth_box->size[1];
    c6_d_Im_Depth_box = c6__s32_s64_(chartInstance, (int64_T)c6_b_Im_Depth_box *
      (int64_T)c6_c_Im_Depth_box, 0, 1U, 53, 52);
    c6_e_loop_ub = c6_i16 - 1;
    for (c6_i17 = 0; c6_i17 <= c6_e_loop_ub; c6_i17++) {
      c6_d2 = (real_T)c6_ii->data[c6_i17];
      if (c6_d2 != (real_T)(int32_T)muDoubleScalarFloor(c6_d2)) {
        emlrtIntegerCheckR2012b(c6_d2, &c6_e_emlrtDCI, &c6_b_st);
      }

      c6_i19 = (int32_T)muDoubleScalarFloor(c6_d2);
      if ((c6_i19 < 1) || (c6_i19 > c6_d_Im_Depth_box)) {
        emlrtDynamicBoundsCheckR2012b(c6_i19, 1, c6_d_Im_Depth_box,
          &c6_e_emlrtBCI, &c6_b_st);
      }

      c6_Im_Depth_box->data[c6_i19 - 1] = 0.0F;
    }

    c6_emxInit_real32_T(chartInstance, &c6_b_st, &c6_e_Im_Depth_box, 2,
                        &c6_e_emlrtRTEI);
    c6_i18 = c6_e_Im_Depth_box->size[0] * c6_e_Im_Depth_box->size[1];
    c6_e_Im_Depth_box->size[0] = c6_Im_Depth_box->size[0];
    c6_e_Im_Depth_box->size[1] = c6_Im_Depth_box->size[1];
    c6_emxEnsureCapacity_real32_T(chartInstance, &c6_b_st, c6_e_Im_Depth_box,
      c6_i18, &c6_e_emlrtRTEI);
    c6_f_loop_ub = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1] - 1;
    for (c6_i20 = 0; c6_i20 <= c6_f_loop_ub; c6_i20++) {
      c6_e_Im_Depth_box->data[c6_i20] = c6_Im_Depth_box->data[c6_i20];
    }

    c6_c_st.site = &c6_emlrtRSI;
    c6_imhist(chartInstance, &c6_c_st, c6_e_Im_Depth_box, c6_counts);
    c6_c_st.site = &c6_b_emlrtRSI;
    c6_emxFree_real32_T(chartInstance, &c6_e_Im_Depth_box);
    for (c6_i21 = 0; c6_i21 < 254; c6_i21++) {
      c6_varargin_1[c6_i21] = c6_counts[c6_i21 + 1];
    }

    c6_d_st.site = &c6_x_emlrtRSI;
    c6_e_st.site = &c6_y_emlrtRSI;
    c6_f_st.site = &c6_ab_emlrtRSI;
    c6_g_st.site = &c6_bb_emlrtRSI;
    c6_d_x = c6_varargin_1[0];
    c6_e_x = c6_d_x;
    c6_b = muDoubleScalarIsNaN(c6_e_x);
    c6_p = !c6_b;
    if (c6_p) {
      c6_idx = 1;
    } else {
      c6_idx = 0;
      c6_k = 2;
      c6_exitg1 = false;
      while ((!c6_exitg1) && (c6_k < 255)) {
        c6_f_x = c6_varargin_1[c6_k - 1];
        c6_g_x = c6_f_x;
        c6_b_b = muDoubleScalarIsNaN(c6_g_x);
        c6_b_p = !c6_b_b;
        if (c6_b_p) {
          c6_idx = c6_k;
          c6_exitg1 = true;
        } else {
          c6_k++;
        }
      }
    }

    if (c6_idx == 0) {
      c6_idx = 1;
    } else {
      c6_h_st.site = &c6_cb_emlrtRSI;
      c6_first = c6_idx;
      c6_ex = c6_varargin_1[c6_first - 1];
      c6_c_idx = c6_first;
      c6_i22 = c6_first;
      c6_i_st.site = &c6_db_emlrtRSI;
      c6_overflow = false;
      if (c6_overflow) {
        c6_j_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_j_st);
      }

      for (c6_b_k = c6_i22 + 1; c6_b_k < 255; c6_b_k++) {
        if (c6_ex < c6_varargin_1[c6_b_k - 1]) {
          c6_ex = c6_varargin_1[c6_b_k - 1];
          c6_c_idx = c6_b_k;
        }
      }

      c6_idx = c6_c_idx;
    }

    c6_b_idx = c6_idx;
    c6_d_idx = c6_b_idx;
    c6_iindx = c6_d_idx;
    c6_posicion = (real_T)c6_iindx;
    c6_b_posicion = c6_posicion;
    c6_b_posicion /= 255.0;
    c6_i23 = c6_BW->size[0] * c6_BW->size[1];
    c6_BW->size[0] = c6_Im_Depth_box->size[0];
    c6_BW->size[1] = c6_Im_Depth_box->size[1];
    c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_b_st, c6_BW, c6_i23,
      &c6_f_emlrtRTEI);
    c6_c_posicion = c6_b_posicion + 0.01;
    c6_g_loop_ub = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1] - 1;
    for (c6_i24 = 0; c6_i24 <= c6_g_loop_ub; c6_i24++) {
      c6_BW->data[c6_i24] = ((real_T)c6_Im_Depth_box->data[c6_i24] <
        c6_c_posicion);
    }

    c6_emxInit_real32_T(chartInstance, &c6_b_st, &c6_Immask, 2, &c6_g_emlrtRTEI);
    for (c6_i25 = 0; c6_i25 < 2; c6_i25++) {
      c6_iv[c6_i25] = (*(int32_T (*)[2])c6_Im_Depth_box->size)[c6_i25];
    }

    for (c6_i26 = 0; c6_i26 < 2; c6_i26++) {
      c6_iv1[c6_i26] = (*(int32_T (*)[2])c6_BW->size)[c6_i26];
    }

    emlrtSizeEqCheckNDR2012b(&c6_iv[0], &c6_iv1[0], &c6_c_emlrtECI, &c6_b_st);
    c6_i27 = c6_Immask->size[0] * c6_Immask->size[1];
    c6_Immask->size[0] = c6_Im_Depth_box->size[0];
    c6_Immask->size[1] = c6_Im_Depth_box->size[1];
    c6_emxEnsureCapacity_real32_T(chartInstance, &c6_b_st, c6_Immask, c6_i27,
      &c6_g_emlrtRTEI);
    c6_h_loop_ub = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1] - 1;
    for (c6_i28 = 0; c6_i28 <= c6_h_loop_ub; c6_i28++) {
      c6_Immask->data[c6_i28] = c6_Im_Depth_box->data[c6_i28] * (real32_T)
        c6_BW->data[c6_i28];
    }

    c6_i29 = c6_BW->size[0] * c6_BW->size[1];
    c6_BW->size[0] = c6_Immask->size[0];
    c6_BW->size[1] = c6_Immask->size[1];
    c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_b_st, c6_BW, c6_i29,
      &c6_h_emlrtRTEI);
    c6_d_posicion = c6_b_posicion - 0.01;
    c6_i_loop_ub = c6_Immask->size[0] * c6_Immask->size[1] - 1;
    for (c6_i30 = 0; c6_i30 <= c6_i_loop_ub; c6_i30++) {
      c6_BW->data[c6_i30] = ((real_T)c6_Immask->data[c6_i30] > c6_d_posicion);
    }

    for (c6_i31 = 0; c6_i31 < 2; c6_i31++) {
      c6_iv2[c6_i31] = (*(int32_T (*)[2])c6_Immask->size)[c6_i31];
    }

    for (c6_i32 = 0; c6_i32 < 2; c6_i32++) {
      c6_iv3[c6_i32] = (*(int32_T (*)[2])c6_BW->size)[c6_i32];
    }

    emlrtSizeEqCheckNDR2012b(&c6_iv2[0], &c6_iv3[0], &c6_b_emlrtECI, &c6_b_st);
    c6_i33 = c6_Immask->size[0] * c6_Immask->size[1];
    c6_i34 = c6_Immask->size[0] * c6_Immask->size[1];
    c6_emxEnsureCapacity_real32_T(chartInstance, &c6_b_st, c6_Immask, c6_i34,
      &c6_i_emlrtRTEI);
    c6_i35 = c6_i33;
    c6_j_loop_ub = c6_i35 - 1;
    for (c6_i36 = 0; c6_i36 <= c6_j_loop_ub; c6_i36++) {
      c6_Immask->data[c6_i36] *= (real32_T)c6_BW->data[c6_i36];
    }

    c6_i37 = c6_BW->size[0] * c6_BW->size[1];
    c6_BW->size[0] = c6_Immask->size[0];
    c6_BW->size[1] = c6_Immask->size[1];
    c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_b_st, c6_BW, c6_i37,
      &c6_j_emlrtRTEI);
    c6_k_loop_ub = c6_Immask->size[0] * c6_Immask->size[1] - 1;
    for (c6_i38 = 0; c6_i38 <= c6_k_loop_ub; c6_i38++) {
      c6_BW->data[c6_i38] = (c6_Immask->data[c6_i38] > 0.0F);
    }

    c6_emxFree_real32_T(chartInstance, &c6_Immask);
    c6_emxInit_boolean_T(chartInstance, &c6_b_st, &c6_b_BW, 2, &c6_k_emlrtRTEI);
    c6_i39 = c6_b_BW->size[0] * c6_b_BW->size[1];
    c6_b_BW->size[0] = c6_BW->size[0];
    c6_b_BW->size[1] = c6_BW->size[1];
    c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_b_st, c6_b_BW, c6_i39,
      &c6_k_emlrtRTEI);
    c6_l_loop_ub = c6_BW->size[0] * c6_BW->size[1] - 1;
    for (c6_i40 = 0; c6_i40 <= c6_l_loop_ub; c6_i40++) {
      c6_b_BW->data[c6_i40] = c6_BW->data[c6_i40];
    }

    c6_emxInit_sPw6XcACqvsnFn0LPvB6yCC(chartInstance, &c6_b_st, &c6_stats, 1,
      &c6_t_emlrtRTEI);
    c6_c_st.site = &c6_c_emlrtRSI;
    c6_regionprops(chartInstance, &c6_c_st, c6_b_BW, c6_stats);
    c6_Centroid_x = 0.0;
    c6_Centroid_y = 0.0;
    c6_acum_area = 0.0;
    c6_d3 = (real_T)c6_stats->size[0];
    c6_i41 = (int32_T)c6_d3;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c6_d3, mxDOUBLE_CLASS, c6_i41,
      &c6_kd_emlrtRTEI, &c6_b_st);
    c6_stat = 0;
    c6_emxFree_boolean_T(chartInstance, &c6_b_BW);
    while (c6_stat <= c6_i41 - 1) {
      c6_b_stat = 1.0 + (real_T)c6_stat;
      covrtEmlForEval(chartInstance->c6_covrtInstance, 14U, 0, 0, 1);
      c6_i42 = c6_stats->size[0];
      if (c6_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c6_b_stat)) {
        emlrtIntegerCheckR2012b(c6_b_stat, &c6_emlrtDCI, &c6_b_st);
      }

      c6_i43 = (int32_T)c6_b_stat;
      if ((c6_i43 < 1) || (c6_i43 > c6_i42)) {
        emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i42, &c6_emlrtBCI, &c6_b_st);
      }

      c6_i44 = c6_i43 - 1;
      c6_i45 = c6_stats->size[0];
      if (c6_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c6_b_stat)) {
        emlrtIntegerCheckR2012b(c6_b_stat, &c6_f_emlrtDCI, &c6_b_st);
      }

      c6_i47 = (int32_T)c6_b_stat;
      if ((c6_i47 < 1) || (c6_i47 > c6_i45)) {
        emlrtDynamicBoundsCheckR2012b(c6_i47, 1, c6_i45, &c6_f_emlrtBCI,
          &c6_b_st);
      }

      c6_Centroid_x += c6_stats->data[c6_i44].Centroid[0] * c6_stats->
        data[c6_i47 - 1].Area;
      c6_i48 = c6_stats->size[0];
      if (c6_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c6_b_stat)) {
        emlrtIntegerCheckR2012b(c6_b_stat, &c6_b_emlrtDCI, &c6_b_st);
      }

      c6_i49 = (int32_T)c6_b_stat;
      if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
        emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_b_emlrtBCI,
          &c6_b_st);
      }

      c6_i50 = c6_i49 - 1;
      c6_i51 = c6_stats->size[0];
      if (c6_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c6_b_stat)) {
        emlrtIntegerCheckR2012b(c6_b_stat, &c6_g_emlrtDCI, &c6_b_st);
      }

      c6_i52 = (int32_T)c6_b_stat;
      if ((c6_i52 < 1) || (c6_i52 > c6_i51)) {
        emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i51, &c6_g_emlrtBCI,
          &c6_b_st);
      }

      c6_Centroid_y += c6_stats->data[c6_i50].Centroid[1] * c6_stats->
        data[c6_i52 - 1].Area;
      c6_i53 = c6_stats->size[0];
      if (c6_b_stat != (real_T)(int32_T)muDoubleScalarFloor(c6_b_stat)) {
        emlrtIntegerCheckR2012b(c6_b_stat, &c6_h_emlrtDCI, &c6_b_st);
      }

      c6_i55 = (int32_T)c6_b_stat;
      if ((c6_i55 < 1) || (c6_i55 > c6_i53)) {
        emlrtDynamicBoundsCheckR2012b(c6_i55, 1, c6_i53, &c6_h_emlrtBCI,
          &c6_b_st);
      }

      c6_acum_area += c6_stats->data[c6_i55 - 1].Area;
      c6_stat++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c6_emxFree_sPw6XcACqvsnFn0LPvB6yCC(chartInstance, &c6_stats);
    c6_emxInit_real_T(chartInstance, &c6_b_st, &c6_puntos_y, 1, &c6_u_emlrtRTEI);
    covrtEmlForEval(chartInstance->c6_covrtInstance, 14U, 0, 0, 0);
    c6_centroide[0] = c6_Centroid_x / c6_acum_area;
    c6_centroide[1] = c6_Centroid_y / c6_acum_area;
    c6_c_st.site = &c6_d_emlrtRSI;
    c6_d_st.site = &c6_ci_emlrtRSI;
    c6_nx = c6_BW->size[0] * c6_BW->size[1];
    c6_e_st.site = &c6_di_emlrtRSI;
    c6_c_k = c6_nx;
    c6_b_nx = c6_nx;
    c6_e_idx = 0;
    c6_i46 = c6_ii->size[0];
    c6_ii->size[0] = c6_c_k;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_e_st, c6_ii, c6_i46,
      &c6_l_emlrtRTEI);
    c6_f_st.site = &c6_fi_emlrtRSI;
    c6_c_b = c6_b_nx;
    c6_d_b = c6_c_b;
    if (1 > c6_d_b) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_g_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_g_st);
    }

    c6_b_ii = 1;
    c6_exitg1 = false;
    while ((!c6_exitg1) && (c6_b_ii - 1 <= c6_b_nx - 1)) {
      c6_c_ii = c6_b_ii;
      if (c6_BW->data[c6_c_ii - 1]) {
        c6_e_idx++;
        c6_ii->data[c6_e_idx - 1] = c6_c_ii;
        if (c6_e_idx >= c6_c_k) {
          c6_exitg1 = true;
        } else {
          c6_b_ii++;
        }
      } else {
        c6_b_ii++;
      }
    }

    if (!(c6_e_idx <= c6_c_k)) {
      c6_d_y = NULL;
      sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c6_e_y = NULL;
      sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c6_e_st, &c6_r_emlrtMCI, "error", 0U, 2U, 14, c6_d_y, 14,
                  sf_mex_call(&c6_e_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c6_e_st, NULL, "message", 1U, 1U, 14, c6_e_y)));
    }

    if (c6_c_k == 1) {
      if (c6_e_idx == 0) {
        c6_ii->size[0] = 0;
      }
    } else {
      c6_e_b = (1 > c6_e_idx);
      if (c6_e_b) {
        c6_i54 = 0;
      } else {
        c6_i54 = c6_e_idx;
      }

      c6_iv4[0] = 1;
      c6_iv4[1] = c6_i54;
      c6_f_st.site = &c6_gi_emlrtRSI;
      c6_indexShapeCheck(chartInstance, &c6_f_st, c6_ii->size[0], c6_iv4);
      c6_i56 = c6_ii->size[0];
      c6_ii->size[0] = c6_i54;
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_e_st, c6_ii, c6_i56,
        &c6_m_emlrtRTEI);
    }

    if ((real_T)c6_BW->size[0] == 1.0) {
      c6_c_p = true;
    } else {
      c6_c_p = false;
    }

    c6_d_p = c6_c_p;
    if (c6_d_p) {
      if ((real_T)c6_ii->size[0] == 1.0) {
        c6_e_p = true;
      } else {
        c6_e_p = false;
      }

      c6_f_p = c6_e_p;
      if ((!c6_f_p) && ((real_T)c6_BW->size[1] >= 2.0)) {
        c6_e_st.site = &c6_ei_emlrtRSI;
        c6_c_warning(chartInstance, &c6_e_st);
      }
    }

    c6_emxFree_boolean_T(chartInstance, &c6_BW);
    c6_i57 = c6_puntos_y->size[0];
    c6_puntos_y->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_puntos_y, c6_i57,
      &c6_n_emlrtRTEI);
    c6_m_loop_ub = c6_ii->size[0] - 1;
    for (c6_i58 = 0; c6_i58 <= c6_m_loop_ub; c6_i58++) {
      c6_puntos_y->data[c6_i58] = (real_T)c6_ii->data[c6_i58];
    }

    c6_c_st.site = &c6_d_emlrtRSI;
    for (c6_i59 = 0; c6_i59 < 2; c6_i59++) {
      c6_siz[c6_i59] = (real_T)c6_Im_Depth_box->size[c6_i59];
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_varargout_4, 1,
                       (emlrtRTEInfo *)NULL);
    c6_d_st.site = &c6_pd_emlrtRSI;
    c6_ind2sub_indexClass(chartInstance, &c6_d_st, c6_siz, c6_puntos_y, c6_ii,
                          c6_varargout_4);
    c6_i60 = c6_puntos_y->size[0];
    c6_puntos_y->size[0] = c6_ii->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_puntos_y, c6_i60,
      &c6_o_emlrtRTEI);
    c6_n_loop_ub = c6_ii->size[0] - 1;
    for (c6_i61 = 0; c6_i61 <= c6_n_loop_ub; c6_i61++) {
      c6_puntos_y->data[c6_i61] = (real_T)c6_ii->data[c6_i61];
    }

    c6_emxFree_int32_T(chartInstance, &c6_ii);
    c6_emxInit_real_T(chartInstance, &c6_c_st, &c6_puntos_x, 1, &c6_v_emlrtRTEI);
    c6_i62 = c6_puntos_x->size[0];
    c6_puntos_x->size[0] = c6_varargout_4->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_puntos_x, c6_i62,
      &c6_o_emlrtRTEI);
    c6_o_loop_ub = c6_varargout_4->size[0] - 1;
    for (c6_i63 = 0; c6_i63 <= c6_o_loop_ub; c6_i63++) {
      c6_puntos_x->data[c6_i63] = (real_T)c6_varargout_4->data[c6_i63];
    }

    c6_emxFree_int32_T(chartInstance, &c6_varargout_4);
    c6_h_x = c6_centroide[0];
    c6_f_b = muDoubleScalarIsNaN(c6_h_x);
    c6_emxInit_real_T(chartInstance, &c6_b_st, &c6_r, 1, (emlrtRTEInfo *)NULL);
    c6_emxInit_real_T(chartInstance, &c6_b_st, &c6_b_varargin_1, 1,
                      &c6_r_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, &c6_b_st, &c6_b_puntos_x, 1,
                      &c6_p_emlrtRTEI);
    c6_emxInit_real_T(chartInstance, &c6_b_st, &c6_b_puntos_y, 1,
                      &c6_q_emlrtRTEI);
    c6_guard1 = false;
    if (!covrtEmlCondEval(chartInstance->c6_covrtInstance, 14U, 0, 0, c6_f_b)) {
      c6_i_x = c6_centroide[1];
      c6_g_b = muDoubleScalarIsNaN(c6_i_x);
      if (!covrtEmlCondEval(chartInstance->c6_covrtInstance, 14U, 0, 1, c6_g_b))
      {
        covrtEmlMcdcEval(chartInstance->c6_covrtInstance, 14U, 0, 0, true);
        covrtEmlIfEval(chartInstance->c6_covrtInstance, 14U, 0, 1, true);
        c6_b_centroide = c6_centroide[0];
        c6_i64 = c6_b_puntos_x->size[0];
        c6_b_puntos_x->size[0] = c6_puntos_x->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_b_puntos_x,
          c6_i64, &c6_p_emlrtRTEI);
        c6_p_loop_ub = c6_puntos_x->size[0] - 1;
        for (c6_i65 = 0; c6_i65 <= c6_p_loop_ub; c6_i65++) {
          c6_b_puntos_x->data[c6_i65] = c6_puntos_x->data[c6_i65] -
            c6_b_centroide;
        }

        c6_c_st.site = &c6_e_emlrtRSI;
        c6_power(chartInstance, &c6_c_st, c6_b_puntos_x, c6_b_varargin_1);
        c6_c_centroide = c6_centroide[1];
        c6_i66 = c6_b_puntos_y->size[0];
        c6_b_puntos_y->size[0] = c6_puntos_y->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_b_puntos_y,
          c6_i66, &c6_q_emlrtRTEI);
        c6_q_loop_ub = c6_puntos_y->size[0] - 1;
        for (c6_i67 = 0; c6_i67 <= c6_q_loop_ub; c6_i67++) {
          c6_b_puntos_y->data[c6_i67] = c6_puntos_y->data[c6_i67] -
            c6_c_centroide;
        }

        c6_c_st.site = &c6_e_emlrtRSI;
        c6_power(chartInstance, &c6_c_st, c6_b_puntos_y, c6_r);
        c6_i68 = c6_b_varargin_1->size[0];
        c6_i69 = c6_r->size[0];
        if (c6_i68 != c6_i69) {
          emlrtSizeEqCheck1DR2012b(c6_i68, c6_i69, &c6_emlrtECI, &c6_b_st);
        }

        c6_c_st.site = &c6_e_emlrtRSI;
        c6_i70 = c6_b_varargin_1->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_b_varargin_1,
          c6_i70, &c6_r_emlrtRTEI);
        c6_r_loop_ub = c6_b_varargin_1->size[0] - 1;
        for (c6_i71 = 0; c6_i71 <= c6_r_loop_ub; c6_i71++) {
          c6_b_varargin_1->data[c6_i71] += c6_r->data[c6_i71];
        }

        c6_d_st.site = &c6_ii_emlrtRSI;
        c6_e_st.site = &c6_ji_emlrtRSI;
        c6_minimum(chartInstance, &c6_e_st, c6_b_varargin_1, &c6_b_ex, &c6_f_idx);
        c6_b_iindx = c6_f_idx;
        c6_e_posicion = (real_T)c6_b_iindx;
        c6_b_posicion = c6_e_posicion;
        c6_i72 = c6_puntos_x->size[0];
        if (c6_b_posicion != (real_T)(int32_T)muDoubleScalarFloor(c6_b_posicion))
        {
          emlrtIntegerCheckR2012b(c6_b_posicion, &c6_i_emlrtDCI, &c6_b_st);
        }

        c6_i73 = (int32_T)c6_b_posicion;
        if ((c6_i73 < 1) || (c6_i73 > c6_i72)) {
          emlrtDynamicBoundsCheckR2012b(c6_i73, 1, c6_i72, &c6_i_emlrtBCI,
            &c6_b_st);
        }

        c6_centroide[0] = c6_puntos_x->data[c6_i73 - 1];
        c6_i74 = c6_puntos_y->size[0];
        if (c6_b_posicion != (real_T)(int32_T)muDoubleScalarFloor(c6_b_posicion))
        {
          emlrtIntegerCheckR2012b(c6_b_posicion, &c6_j_emlrtDCI, &c6_b_st);
        }

        c6_i75 = (int32_T)c6_b_posicion;
        if ((c6_i75 < 1) || (c6_i75 > c6_i74)) {
          emlrtDynamicBoundsCheckR2012b(c6_i75, 1, c6_i74, &c6_j_emlrtBCI,
            &c6_b_st);
        }

        c6_centroide[1] = c6_puntos_y->data[c6_i75 - 1];
        c6_e_bboxes = c6_b_bboxes[1];
        c6_f_bboxes = c6_b_bboxes[0];
        c6_i76 = c6_Im_Depth_box->size[0] * c6_Im_Depth_box->size[1];
        c6_Im_Depth_box->size[0] = (int32_T)muSingleScalarFloor(c6_b_bboxes[3])
          + 1;
        c6_Im_Depth_box->size[1] = (int32_T)muSingleScalarFloor(c6_b_bboxes[2])
          + 1;
        c6_emxEnsureCapacity_real32_T(chartInstance, &c6_b_st, c6_Im_Depth_box,
          c6_i76, &c6_s_emlrtRTEI);
        c6_s_loop_ub = (int32_T)muSingleScalarFloor(c6_b_bboxes[2]);
        for (c6_i77 = 0; c6_i77 <= c6_s_loop_ub; c6_i77++) {
          c6_t_loop_ub = (int32_T)muSingleScalarFloor(c6_b_bboxes[3]);
          for (c6_i79 = 0; c6_i79 <= c6_t_loop_ub; c6_i79++) {
            c6_d4 = c6_e_bboxes + (real32_T)c6_i79;
            if (c6_d4 != (real_T)(int32_T)muDoubleScalarFloor(c6_d4)) {
              emlrtIntegerCheckR2012b(c6_d4, &c6_k_emlrtDCI, &c6_b_st);
            }

            c6_i82 = (int32_T)(real32_T)c6_d4;
            if ((c6_i82 < 1) || (c6_i82 > 1080)) {
              emlrtDynamicBoundsCheckR2012b(c6_i82, 1, 1080, &c6_k_emlrtBCI,
                &c6_b_st);
            }

            c6_d5 = c6_f_bboxes + (real32_T)c6_i77;
            if (c6_d5 != (real_T)(int32_T)muDoubleScalarFloor(c6_d5)) {
              emlrtIntegerCheckR2012b(c6_d5, &c6_l_emlrtDCI, &c6_b_st);
            }

            c6_i84 = (int32_T)(real32_T)c6_d5;
            if ((c6_i84 < 1) || (c6_i84 > 1920)) {
              emlrtDynamicBoundsCheckR2012b(c6_i84, 1, 1920, &c6_l_emlrtBCI,
                &c6_b_st);
            }

            c6_Im_Depth_box->data[c6_i79 + c6_Im_Depth_box->size[0] * c6_i77] =
              chartInstance->c6_Im_Depth[((int32_T)(real32_T)c6_i82 + 1080 *
              ((int32_T)(real32_T)c6_i84 - 1)) - 1];
          }
        }

        c6_i78 = c6_Im_Depth_box->size[0];
        if (c6_centroide[1] != (real_T)(int32_T)muDoubleScalarFloor
            (c6_centroide[1])) {
          emlrtIntegerCheckR2012b(c6_centroide[1], &c6_m_emlrtDCI, &c6_b_st);
        }

        c6_i80 = (int32_T)c6_centroide[1];
        if ((c6_i80 < 1) || (c6_i80 > c6_i78)) {
          emlrtDynamicBoundsCheckR2012b(c6_i80, 1, c6_i78, &c6_m_emlrtBCI,
            &c6_b_st);
        }

        c6_i81 = c6_Im_Depth_box->size[1];
        if (c6_centroide[0] != (real_T)(int32_T)muDoubleScalarFloor
            (c6_centroide[0])) {
          emlrtIntegerCheckR2012b(c6_centroide[0], &c6_m_emlrtDCI, &c6_b_st);
        }

        c6_i83 = (int32_T)c6_centroide[0];
        if ((c6_i83 < 1) || (c6_i83 > c6_i81)) {
          emlrtDynamicBoundsCheckR2012b(c6_i83, 1, c6_i81, &c6_m_emlrtBCI,
            &c6_b_st);
        }

        c6_b_x = c6_Im_Depth_box->data[(c6_i80 + c6_Im_Depth_box->size[0] *
          (c6_i83 - 1)) - 1];
        c6_b_cx = (real32_T)c6_centroide[0] + c6_b_bboxes[0];
        c6_b_cy = (real32_T)c6_centroide[1] + c6_b_bboxes[1];
        c6_b_y = (c6_b_cx / 1920.0 - 0.5) * c6_b_x * -1.6077;
      } else {
        c6_guard1 = true;
      }
    } else {
      c6_guard1 = true;
    }

    if (c6_guard1) {
      covrtEmlMcdcEval(chartInstance->c6_covrtInstance, 14U, 0, 0, false);
      covrtEmlIfEval(chartInstance->c6_covrtInstance, 14U, 0, 1, false);
      c6_b_x = rtNaN;
      c6_b_y = rtNaN;
      c6_b_cx = rtNaN;
      c6_b_cy = rtNaN;
    }

    c6_emxFree_real_T(chartInstance, &c6_b_puntos_y);
    c6_emxFree_real_T(chartInstance, &c6_b_puntos_x);
    c6_emxFree_real_T(chartInstance, &c6_b_varargin_1);
    c6_emxFree_real_T(chartInstance, &c6_r);
    c6_emxFree_real_T(chartInstance, &c6_puntos_x);
    c6_emxFree_real_T(chartInstance, &c6_puntos_y);
    c6_emxFree_real32_T(chartInstance, &c6_Im_Depth_box);
  } else {
    c6_b_x = rtNaN;
    c6_b_y = rtNaN;
    c6_b_cx = rtNaN;
    c6_b_cy = rtNaN;
  }

  c6_c_x = c6_b_x;
  c6_c_y = c6_b_y;
  c6_c_cx = c6_b_cx;
  c6_c_cy = c6_b_cy;
  *chartInstance->c6_x = c6_c_x;
  *chartInstance->c6_y = c6_c_y;
  *chartInstance->c6_cx = c6_c_cx;
  *chartInstance->c6_cy = c6_c_cy;
  c6_do_animation_call_c6_ver_1(chartInstance);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 2U, *chartInstance->c6_x);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 3U, *chartInstance->c6_y);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 4U, *chartInstance->c6_cx);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 5U, *chartInstance->c6_cy);
}

static void mdl_start_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance)
{
  static const int32_T c6_postfixPredicateTree[5] = { 0, -1, 1, -1, -3 };

  static const int32_T c6_condTxtEndIdx[2] = { 1317, 1341 };

  static const int32_T c6_condTxtStartIdx[2] = { 1298, 1322 };

  static const uint32_T c6_decisionTxtEndIdx = 0U;
  static const uint32_T c6_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c6_chart_data_browse_helper);
  chartInstance->c6_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c6_RuntimeVar,
    &chartInstance->c6_IsDebuggerActive,
    &chartInstance->c6_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c6_mlFcnLineNumber, &chartInstance->c6_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c6_covrtInstance, 1U, 0U, 1U,
    36U);
  covrtChartInitFcn(chartInstance->c6_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c6_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c6_decisionTxtStartIdx, &c6_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c6_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c6_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 107);
  covrtEmlInitFcn(chartInstance->c6_covrtInstance,
                  "D:/Documentos/8tvo_semestre/Robotica_movil/Proyecto/Proyecto_robotica_movil/Code_ros/calculo_depth_simulink.m",
                  14U, 0U, 1U, 0U, 2U, 0U, 0U, 0U, 1U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c6_covrtInstance, 14U, 0U, 0U,
                     "calculo_depth_simulink", 0, -1, 2200);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 14U, 0U, 0U, 72, 90, 2112,
                    2195);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 14U, 0U, 1U, 1294, 1342,
                    1898, 2001);
  covrtEmlForInitFcn(chartInstance->c6_covrtInstance, 14U, 0U, 0U, 734, 760,
                     1006);
  covrtEmlMCDCInitFcn(chartInstance->c6_covrtInstance, 14U, 0U, 0U, 1297, 1341,
                      2U, 0U, c6_condTxtStartIdx, c6_condTxtEndIdx, 5U,
                      c6_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 14U, 0U, 0U, 75, 89,
    -1, 4U);
}

static void mdl_cleanup_runtime_resources_c6_ver_1(SFc6_ver_1InstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c6_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c6_covrtInstance);
}

static void initSimStructsc6_ver_1(SFc6_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c6_ver_1_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  const char_T *c6_data[4] = {
    "789cc554cd4ec240101e0c122fa0271fc38327e38d803f244a4048345853eb76944df78774b7049ec217e140e23b78e6e6dd27b1505a96868a9188936c7667be"
    "d97edf7cc91672b5eb1c0094208a4621da8be11a85eb605edf81e548e3b915fbc8e8df857c72cfec7b9def440a8d031d25c2e198dc7425a7c211ba3dec21f8a8",
    "24eba33b439e29c336e5d83293fa34e3e706942453687aae749178ad8083df550b85cc4c123f1e8d79c19837bfc68f74a4fd48f7c57c835ff2c57e1eaee18b71"
    "e230123069bbd8d35d5b511e302abccde78e751432754488a2e285e1826fb2215f2f936f19bf3f7ba89e5a5549028e424b659de8beb4157254da47eb463e494d",
    "896373d9a7cc6af8728844cbe460fbcb0d15e9625853d66a3f8ff83a3ff77f385fd6bb2ac21ebc85c5d2e463d6b22d3eef7dfcb94dbe38fe8b6f5bef72e894ef"
    "3ac7c165a37c71dba935af9a41bbee558cff73860e43f2b73ac0c84d1d7ffdfd2fe0fa8750",
    "" };

  c6_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c6_data[0], 1640U, &c6_nameCaptureInfo);
  return c6_nameCaptureInfo;
}

static void c6_check_forloop_overflow_error(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp)
{
  static char_T c6_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c6_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  (void)chartInstance;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c6_sp, &c6_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14, sf_mex_call
              (c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c6_sp, NULL,
    "message", 1U, 2U, 14, c6_c_y, 14, c6_d_y)));
}

static void c6_imhist(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack *
                      c6_sp, c6_emxArray_real32_T *c6_varargin_1, real_T
                      c6_yout[256])
{
  emlrtStack c6_b_st;
  emlrtStack c6_st;
  real_T c6_c_i;
  real_T c6_colsAEtc;
  real_T c6_d;
  real_T c6_numCols;
  real_T c6_numCores;
  real_T c6_numRows;
  real_T c6_numelA;
  real_T c6_rowsA;
  int32_T c6_b_c;
  int32_T c6_b_i;
  int32_T c6_c;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  real32_T c6_a;
  real32_T c6_b_a;
  real32_T c6_b_x;
  real32_T c6_c_x;
  real32_T c6_idx;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_nanFlag;
  boolean_T c6_b_rngFlag;
  boolean_T c6_c_b;
  boolean_T c6_c_nanFlag;
  boolean_T c6_nanFlag;
  boolean_T c6_rngFlag;
  boolean_T c6_useParallel;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_b = (c6_varargin_1->size[0] == 0);
  if (c6_b) {
    for (c6_i = 0; c6_i < 256; c6_i++) {
      c6_yout[c6_i] = 0.0;
    }
  } else {
    c6_st.site = &c6_q_emlrtRSI;
    c6_b_st.site = &c6_r_emlrtRSI;
    c6_numCores = 1.0;
    getnumcores(&c6_numCores);
    if (((real_T)(c6_varargin_1->size[0] * c6_varargin_1->size[1]) > 500000.0) &&
        (c6_numCores > 1.0)) {
      c6_useParallel = true;
    } else {
      c6_useParallel = false;
    }

    c6_rowsA = (real_T)c6_varargin_1->size[0];
    c6_colsAEtc = (real_T)(c6_varargin_1->size[0] * c6_varargin_1->size[1]) /
      (real_T)c6_varargin_1->size[0];
    if (c6_useParallel) {
      c6_b_st.site = &c6_s_emlrtRSI;
      c6_numelA = (real_T)(c6_varargin_1->size[0] * c6_varargin_1->size[1]);
      c6_numRows = c6_rowsA;
      c6_numCols = c6_colsAEtc;
      c6_b_nanFlag = false;
      c6_rngFlag = false;
      tbbhist_real32_scaled(&c6_varargin_1->data[0], c6_numelA, c6_numRows,
                            c6_numCols, &c6_yout[0], 256.0, 1.0, 256.0,
                            &c6_rngFlag, &c6_b_nanFlag);
      c6_b_rngFlag = c6_rngFlag;
      c6_c_nanFlag = c6_b_nanFlag;
    } else {
      c6_b_st.site = &c6_t_emlrtRSI;
      for (c6_i1 = 0; c6_i1 < 256; c6_i1++) {
        c6_yout[c6_i1] = 0.0;
      }

      c6_nanFlag = false;
      c6_d = (real_T)(c6_varargin_1->size[0] * c6_varargin_1->size[1]);
      c6_i2 = (int32_T)c6_d - 1;
      for (c6_b_i = 0; c6_b_i <= c6_i2; c6_b_i++) {
        c6_c_i = (real_T)c6_b_i + 1.0;
        c6_i3 = c6_varargin_1->size[0] * c6_varargin_1->size[1];
        c6_i4 = (int32_T)c6_c_i;
        if ((c6_i4 < 1) || (c6_i4 > c6_i3)) {
          emlrtDynamicBoundsCheckR2012b(c6_i4, 1, c6_i3, &c6_n_emlrtBCI,
            &c6_b_st);
        }

        c6_b_x = c6_varargin_1->data[c6_i4 - 1];
        c6_b_b = muSingleScalarIsNaN(c6_b_x);
        if (c6_b_b) {
          c6_nanFlag = true;
          c6_idx = 0.0F;
        } else {
          c6_i5 = c6_varargin_1->size[0] * c6_varargin_1->size[1];
          c6_i6 = (int32_T)c6_c_i;
          if ((c6_i6 < 1) || (c6_i6 > c6_i5)) {
            emlrtDynamicBoundsCheckR2012b(c6_i6, 1, c6_i5, &c6_o_emlrtBCI,
              &c6_b_st);
          }

          c6_idx = c6_varargin_1->data[c6_i6 - 1] * 255.0F + 0.5F;
        }

        if (c6_idx < 0.0F) {
          c6_yout[0]++;
        } else if (c6_idx > 255.0F) {
          c6_yout[255]++;
        } else {
          c6_i7 = c6_varargin_1->size[0] * c6_varargin_1->size[1];
          c6_i8 = (int32_T)c6_c_i;
          if ((c6_i8 < 1) || (c6_i8 > c6_i7)) {
            emlrtDynamicBoundsCheckR2012b(c6_i8, 1, c6_i7, &c6_p_emlrtBCI,
              &c6_b_st);
          }

          c6_c_x = c6_varargin_1->data[c6_i8 - 1];
          c6_c_b = muSingleScalarIsInf(c6_c_x);
          if (c6_c_b) {
            c6_yout[255]++;
          } else {
            c6_a = c6_idx;
            c6_c = (int32_T)c6_a;
            c6_b_a = c6_idx;
            c6_b_c = (int32_T)c6_b_a;
            c6_yout[c6_c] = c6_yout[c6_b_c] + 1.0;
          }
        }
      }

      c6_b_rngFlag = false;
      c6_c_nanFlag = c6_nanFlag;
    }

    if (c6_b_rngFlag) {
      c6_b_st.site = &c6_u_emlrtRSI;
      c6_warning(chartInstance, &c6_b_st);
    }

    if (c6_c_nanFlag) {
      c6_b_st.site = &c6_v_emlrtRSI;
      c6_b_warning(chartInstance, &c6_b_st);
    }
  }
}

static void c6_warning(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp)
{
  static char_T c6_msgID[25] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g',
    'e' };

  static char_T c6_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c6_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_msgID, 10, 0U, 1U, 0U, 2, 1, 25),
                false);
  c6_st.site = &c6_w_emlrtRSI;
  c6_b_feval(chartInstance, &c6_st, c6_b_y, c6_feval(chartInstance, &c6_st,
              c6_c_y, c6_d_y));
}

static void c6_b_warning(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp)
{
  static char_T c6_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c6_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c6_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c6_st.site = &c6_w_emlrtRSI;
  c6_d_feval(chartInstance, &c6_st, c6_b_y, c6_c_feval(chartInstance, &c6_st,
              c6_c_y, c6_d_y));
}

static void c6_regionprops(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_varargin_1,
  c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *c6_outstats)
{
  static char_T c6_cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  static char_T c6_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  c6_emxArray_boolean_T *c6_b_varargin_1;
  c6_emxArray_boolean_T *c6_tile;
  c6_emxArray_int32_T *c6_b_regionLengths;
  c6_emxArray_int32_T *c6_idxCount;
  c6_emxArray_int32_T *c6_regionLengths;
  c6_emxArray_real_T *c6_regionIndices;
  c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c6_stats;
  c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed;
  c6_sPw6XcACqvsnFn0LPvB6yCC c6_s;
  c6_s_bxcgeNxEuVlgmMh5HwQaXB c6_statsOneObj;
  c6_s_vX9LV7M75v5ZNol5H5URkE c6_CC;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  real_T c6_imageSize[2];
  real_T c6_reqStats[2];
  real_T c6_b_numObjs;
  real_T c6_b_vIdx;
  real_T c6_c_k;
  real_T c6_c_numObjs;
  real_T c6_c_varargin_1;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d_k;
  real_T c6_d_numObjs;
  real_T c6_d_varargin_1;
  real_T c6_e_numObjs;
  real_T c6_f_k;
  real_T c6_numObjs;
  int32_T c6_b_outsize[2];
  int32_T c6_outsize[2];
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_b_stats;
  int32_T c6_c_loop_ub;
  int32_T c6_d_loop_ub;
  int32_T c6_dim;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_loop_ub;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_loop_ub;
  int32_T c6_vIdx;
  boolean_T c6_b;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_emxInit_boolean_T(chartInstance, c6_sp, &c6_b_varargin_1, 2,
                       &c6_x_emlrtRTEI);
  c6_i = c6_b_varargin_1->size[0] * c6_b_varargin_1->size[1];
  c6_b_varargin_1->size[0] = c6_varargin_1->size[0];
  c6_b_varargin_1->size[1] = c6_varargin_1->size[1];
  c6_st.site = &c6_li_emlrtRSI;
  c6_emxEnsureCapacity_boolean_T(chartInstance, &c6_st, c6_b_varargin_1, c6_i,
    &c6_x_emlrtRTEI);
  c6_loop_ub = c6_varargin_1->size[0] * c6_varargin_1->size[1] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_b_varargin_1->data[c6_i1] = c6_varargin_1->data[c6_i1];
  }

  c6_emxInitStruct_s_vX9LV7M75v5ZNol(chartInstance, c6_sp, &c6_CC,
    &c6_ib_emlrtRTEI);
  c6_st.site = &c6_kb_emlrtRSI;
  c6_bwconncomp(chartInstance, &c6_st, c6_b_varargin_1, &c6_CC);
  c6_emxFree_boolean_T(chartInstance, &c6_b_varargin_1);
  for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
    c6_imageSize[c6_i2] = c6_CC.ImageSize[c6_i2];
  }

  c6_emxInit_boolean_T1(chartInstance, c6_sp, &c6_tile, 1, &c6_y_emlrtRTEI);
  c6_numObjs = c6_CC.NumObjects;
  c6_st.site = &c6_jb_emlrtRSI;
  c6_b_numObjs = c6_numObjs;
  c6_b_st.site = &c6_tc_emlrtRSI;
  c6_c_numObjs = c6_b_numObjs;
  c6_reqStats[0] = 2.0;
  c6_reqStats[1] = 1.0;
  c6_c_st.site = &c6_uc_emlrtRSI;
  c6_c_varargin_1 = c6_c_numObjs;
  c6_d_st.site = &c6_vc_emlrtRSI;
  c6_assertValidSizeArg(chartInstance, &c6_d_st, c6_c_varargin_1);
  c6_i3 = c6_tile->size[0];
  c6_tile->size[0] = (int32_T)c6_c_varargin_1;
  c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_c_st, c6_tile, c6_i3,
    &c6_y_emlrtRTEI);
  c6_b_loop_ub = (int32_T)c6_c_varargin_1 - 1;
  for (c6_i4 = 0; c6_i4 <= c6_b_loop_ub; c6_i4++) {
    c6_tile->data[c6_i4] = false;
  }

  c6_outsize[0] = c6_tile->size[0];
  if (!((real_T)c6_outsize[0] == (real_T)c6_tile->size[0])) {
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c6_c_st, &c6_b_emlrtMCI, "error", 0U, 1U, 14, c6_b_y);
  }

  for (c6_i5 = 0; c6_i5 < 2; c6_i5++) {
    c6_s.Centroid[c6_i5] = 0.0;
  }

  c6_s.Area = 0.0;
  c6_i6 = c6_outstats->size[0];
  c6_outstats->size[0] = c6_outsize[0];
  c6_emxEnsureCapacity_sPw6XcACqvsnF(chartInstance, &c6_c_st, c6_outstats, c6_i6,
    &c6_ab_emlrtRTEI);
  c6_c_loop_ub = c6_outsize[0] - 1;
  for (c6_i7 = 0; c6_i7 <= c6_c_loop_ub; c6_i7++) {
    c6_outstats->data[c6_i7] = c6_s;
  }

  c6_emxInitStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c6_c_st, &c6_statsOneObj,
    &c6_kb_emlrtRTEI);
  c6_st.site = &c6_ib_emlrtRSI;
  c6_d_numObjs = c6_numObjs;
  c6_statsAlreadyComputed.Area = false;
  c6_statsOneObj.Area = 0.0;
  c6_statsAlreadyComputed.Centroid = false;
  for (c6_i8 = 0; c6_i8 < 2; c6_i8++) {
    c6_statsOneObj.Centroid[c6_i8] = 0.0;
  }

  c6_statsAlreadyComputed.BoundingBox = false;
  for (c6_i9 = 0; c6_i9 < 4; c6_i9++) {
    c6_statsOneObj.BoundingBox[c6_i9] = 0.0;
  }

  c6_statsAlreadyComputed.MajorAxisLength = false;
  c6_statsOneObj.MajorAxisLength = 0.0;
  c6_statsAlreadyComputed.MinorAxisLength = false;
  c6_statsOneObj.MinorAxisLength = 0.0;
  c6_statsAlreadyComputed.Eccentricity = false;
  c6_statsOneObj.Eccentricity = 0.0;
  c6_statsAlreadyComputed.Orientation = false;
  c6_statsOneObj.Orientation = 0.0;
  c6_statsAlreadyComputed.Image = false;
  c6_statsOneObj.Image->size[0] = 0;
  c6_statsOneObj.Image->size[1] = 0;
  c6_statsAlreadyComputed.FilledImage = false;
  c6_statsOneObj.FilledImage->size[0] = 0;
  c6_statsOneObj.FilledImage->size[1] = 0;
  c6_statsAlreadyComputed.FilledArea = false;
  c6_statsOneObj.FilledArea = 0.0;
  c6_statsAlreadyComputed.EulerNumber = false;
  c6_statsOneObj.EulerNumber = 0.0;
  c6_statsAlreadyComputed.Extrema = false;
  for (c6_i10 = 0; c6_i10 < 16; c6_i10++) {
    c6_statsOneObj.Extrema[c6_i10] = 0.0;
  }

  c6_statsAlreadyComputed.EquivDiameter = false;
  c6_statsOneObj.EquivDiameter = 0.0;
  c6_statsAlreadyComputed.Extent = false;
  c6_statsOneObj.Extent = 0.0;
  c6_statsOneObj.PixelIdxList->size[0] = 0;
  c6_statsAlreadyComputed.PixelList = false;
  c6_statsOneObj.PixelList->size[0] = 0;
  c6_statsOneObj.PixelList->size[1] = 2;
  c6_statsAlreadyComputed.Perimeter = false;
  c6_statsOneObj.Perimeter = 0.0;
  c6_statsAlreadyComputed.Circularity = false;
  c6_statsOneObj.Circularity = 0.0;
  c6_statsAlreadyComputed.PixelValues = false;
  c6_statsOneObj.PixelValues->size[0] = 0;
  c6_statsAlreadyComputed.WeightedCentroid = false;
  for (c6_i11 = 0; c6_i11 < 2; c6_i11++) {
    c6_statsOneObj.WeightedCentroid[c6_i11] = 0.0;
  }

  c6_statsAlreadyComputed.MeanIntensity = false;
  c6_statsOneObj.MeanIntensity = 0.0;
  c6_statsAlreadyComputed.MinIntensity = false;
  c6_statsOneObj.MinIntensity = 0.0;
  c6_statsAlreadyComputed.MaxIntensity = false;
  c6_statsOneObj.MaxIntensity = 0.0;
  c6_statsAlreadyComputed.SubarrayIdx = false;
  c6_statsOneObj.SubarrayIdx->size[0] = 1;
  c6_statsOneObj.SubarrayIdx->size[1] = 0;
  for (c6_i12 = 0; c6_i12 < 2; c6_i12++) {
    c6_statsOneObj.SubarrayIdxLengths[c6_i12] = 0.0;
  }

  c6_b_st.site = &c6_wc_emlrtRSI;
  c6_d_varargin_1 = c6_d_numObjs;
  c6_c_st.site = &c6_vc_emlrtRSI;
  c6_assertValidSizeArg(chartInstance, &c6_c_st, c6_d_varargin_1);
  c6_i13 = c6_tile->size[0];
  c6_tile->size[0] = (int32_T)c6_d_varargin_1;
  c6_emxEnsureCapacity_boolean_T1(chartInstance, &c6_b_st, c6_tile, c6_i13,
    &c6_y_emlrtRTEI);
  c6_d_loop_ub = (int32_T)c6_d_varargin_1 - 1;
  for (c6_i14 = 0; c6_i14 <= c6_d_loop_ub; c6_i14++) {
    c6_tile->data[c6_i14] = false;
  }

  c6_b_outsize[0] = c6_tile->size[0];
  if (!((real_T)c6_b_outsize[0] == (real_T)c6_tile->size[0])) {
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c6_b_st, &c6_b_emlrtMCI, "error", 0U, 1U, 14, c6_c_y);
  }

  c6_emxFree_boolean_T(chartInstance, &c6_tile);
  c6_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, &c6_b_st, &c6_stats, 1,
    &c6_jb_emlrtRTEI);
  c6_i15 = c6_stats->size[0];
  c6_stats->size[0] = c6_b_outsize[0];
  c6_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, &c6_b_st, c6_stats, c6_i15,
    &c6_bb_emlrtRTEI);
  c6_e_loop_ub = c6_b_outsize[0] - 1;
  for (c6_i16 = 0; c6_i16 <= c6_e_loop_ub; c6_i16++) {
    c6_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c6_b_st, &c6_stats->
      data[c6_i16], &c6_statsOneObj, &c6_bb_emlrtRTEI);
  }

  c6_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c6_statsOneObj);
  c6_st.site = &c6_hb_emlrtRSI;
  c6_e_numObjs = c6_numObjs;
  c6_statsAlreadyComputed.PixelIdxList = true;
  c6_emxInit_real_T(chartInstance, &c6_st, &c6_regionIndices, 1,
                    &c6_mb_emlrtRTEI);
  if (c6_e_numObjs != 0.0) {
    c6_i17 = c6_regionIndices->size[0];
    c6_regionIndices->size[0] = c6_CC.RegionIndices->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_regionIndices, c6_i17,
      &c6_cb_emlrtRTEI);
    c6_f_loop_ub = c6_CC.RegionIndices->size[0] - 1;
    for (c6_i18 = 0; c6_i18 <= c6_f_loop_ub; c6_i18++) {
      c6_regionIndices->data[c6_i18] = c6_CC.RegionIndices->data[c6_i18];
    }

    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_regionLengths, 1,
                       &c6_lb_emlrtRTEI);
    c6_i19 = c6_regionLengths->size[0];
    c6_regionLengths->size[0] = c6_CC.RegionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_regionLengths, c6_i19,
      &c6_db_emlrtRTEI);
    c6_g_loop_ub = c6_CC.RegionLengths->size[0] - 1;
    for (c6_i21 = 0; c6_i21 <= c6_g_loop_ub; c6_i21++) {
      c6_regionLengths->data[c6_i21] = c6_CC.RegionLengths->data[c6_i21];
    }

    c6_b_st.site = &c6_xc_emlrtRSI;
    c6_c_st.site = &c6_nc_emlrtRSI;
    c6_dim = 2;
    if ((real_T)c6_regionLengths->size[0] != 1.0) {
      c6_dim = 1;
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_b_regionLengths, 1,
                       &c6_fb_emlrtRTEI);
    c6_i27 = c6_b_regionLengths->size[0];
    c6_b_regionLengths->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_b_regionLengths,
      c6_i27, &c6_fb_emlrtRTEI);
    c6_h_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i31 = 0; c6_i31 <= c6_h_loop_ub; c6_i31++) {
      c6_b_regionLengths->data[c6_i31] = c6_regionLengths->data[c6_i31];
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_idxCount, 1,
                       &c6_nb_emlrtRTEI);
    c6_d_st.site = &c6_oc_emlrtRSI;
    c6_useConstantDim(chartInstance, &c6_d_st, c6_b_regionLengths, c6_dim,
                      c6_regionLengths);
    c6_i35 = c6_idxCount->size[0];
    c6_idxCount->size[0] = 1 + c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_idxCount, c6_i35,
      &c6_gb_emlrtRTEI);
    c6_idxCount->data[0] = 0;
    c6_j_loop_ub = c6_regionLengths->size[0] - 1;
    c6_emxFree_int32_T(chartInstance, &c6_b_regionLengths);
    for (c6_i47 = 0; c6_i47 <= c6_j_loop_ub; c6_i47++) {
      c6_idxCount->data[c6_i47 + 1] = c6_regionLengths->data[c6_i47];
    }

    c6_emxFree_int32_T(chartInstance, &c6_regionLengths);
    c6_d2 = (real_T)c6_stats->size[0];
    c6_i52 = (int32_T)c6_d2 - 1;
    for (c6_e_k = 0; c6_e_k <= c6_i52; c6_e_k++) {
      c6_f_k = (real_T)c6_e_k + 1.0;
      c6_i56 = c6_idxCount->size[0];
      c6_i57 = (int32_T)c6_f_k;
      if ((c6_i57 < 1) || (c6_i57 > c6_i56)) {
        emlrtDynamicBoundsCheckR2012b(c6_i57, 1, c6_i56, &c6_q_emlrtBCI, &c6_st);
      }

      c6_i58 = c6_idxCount->data[c6_i57 - 1] + 1;
      c6_i59 = c6_idxCount->size[0];
      c6_i60 = (int32_T)(c6_f_k + 1.0);
      if ((c6_i60 < 1) || (c6_i60 > c6_i59)) {
        emlrtDynamicBoundsCheckR2012b(c6_i60, 1, c6_i59, &c6_r_emlrtBCI, &c6_st);
      }

      c6_i61 = c6_idxCount->data[c6_i60 - 1];
      c6_b = (c6_i58 > c6_i61);
      if (c6_b) {
        c6_i63 = 0;
        c6_i64 = -1;
      } else {
        c6_i62 = c6_regionIndices->size[0];
        if ((c6_i58 < 1) || (c6_i58 > c6_i62)) {
          emlrtDynamicBoundsCheckR2012b(c6_i58, 1, c6_i62, &c6_q_emlrtBCI,
            &c6_st);
        }

        c6_i63 = c6_i58 - 1;
        c6_i65 = c6_regionIndices->size[0];
        if ((c6_i61 < 1) || (c6_i61 > c6_i65)) {
          emlrtDynamicBoundsCheckR2012b(c6_i61, 1, c6_i65, &c6_r_emlrtBCI,
            &c6_st);
        }

        c6_i64 = c6_i61 - 1;
      }

      c6_b_stats = c6_stats->size[0];
      c6_i66 = (int32_T)c6_f_k;
      if ((c6_i66 < 1) || (c6_i66 > c6_b_stats)) {
        emlrtDynamicBoundsCheckR2012b(c6_i66, 1, c6_b_stats, &c6_ab_emlrtBCI,
          &c6_st);
      }

      c6_i67 = c6_i66 - 1;
      c6_i68 = c6_stats->data[c6_i67].PixelIdxList->size[0];
      c6_stats->data[c6_i67].PixelIdxList->size[0] = (c6_i64 - c6_i63) + 1;
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_stats->data[c6_i67].
        PixelIdxList, c6_i68, &c6_hb_emlrtRTEI);
      c6_k_loop_ub = c6_i64 - c6_i63;
      for (c6_i69 = 0; c6_i69 <= c6_k_loop_ub; c6_i69++) {
        c6_i70 = (int32_T)c6_f_k;
        if ((c6_i70 < 1) || (c6_i70 > c6_b_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i70, 1, c6_b_stats, &c6_ab_emlrtBCI,
            &c6_st);
        }

        c6_stats->data[c6_i70 - 1].PixelIdxList->data[c6_i69] =
          c6_regionIndices->data[c6_i63 + c6_i69];
      }
    }

    c6_emxFree_int32_T(chartInstance, &c6_idxCount);
  }

  c6_emxFreeStruct_s_vX9LV7M75v5ZNol(chartInstance, &c6_CC);
  if (c6_reqStats[0] != (real_T)(int32_T)muDoubleScalarFloor(c6_reqStats[0])) {
    emlrtIntegerCheckR2012b(c6_reqStats[0], &c6_n_emlrtDCI, (void *)c6_sp);
  }

  c6_st.site = &c6_gb_emlrtRSI;
  c6_b_ComputeCentroid(chartInstance, &c6_st, c6_imageSize, c6_stats,
                       &c6_statsAlreadyComputed);
  if (c6_reqStats[1] != (real_T)(int32_T)muDoubleScalarFloor(c6_reqStats[1])) {
    emlrtIntegerCheckR2012b(c6_reqStats[1], &c6_n_emlrtDCI, (void *)c6_sp);
  }

  c6_st.site = &c6_fb_emlrtRSI;
  if (!c6_statsAlreadyComputed.Area) {
    c6_d = (real_T)c6_stats->size[0];
    c6_i20 = (int32_T)c6_d - 1;
    for (c6_k = 0; c6_k <= c6_i20; c6_k++) {
      c6_c_k = (real_T)c6_k + 1.0;
      c6_i23 = c6_regionIndices->size[0];
      c6_i24 = c6_stats->size[0];
      c6_i25 = (int32_T)c6_c_k;
      if ((c6_i25 < 1) || (c6_i25 > c6_i24)) {
        emlrtDynamicBoundsCheckR2012b(c6_i25, 1, c6_i24, &c6_bb_emlrtBCI, &c6_st);
      }

      c6_regionIndices->size[0] = c6_stats->data[c6_i25 - 1].PixelIdxList->size
        [0];
      c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_regionIndices,
        c6_i23, &c6_eb_emlrtRTEI);
      c6_i30 = c6_stats->size[0];
      c6_i33 = (int32_T)c6_c_k;
      if ((c6_i33 < 1) || (c6_i33 > c6_i30)) {
        emlrtDynamicBoundsCheckR2012b(c6_i33, 1, c6_i30, &c6_bb_emlrtBCI, &c6_st);
      }

      c6_i_loop_ub = c6_stats->data[c6_i33 - 1].PixelIdxList->size[0] - 1;
      for (c6_i34 = 0; c6_i34 <= c6_i_loop_ub; c6_i34++) {
        c6_i40 = c6_stats->size[0];
        c6_i43 = (int32_T)c6_c_k;
        if ((c6_i43 < 1) || (c6_i43 > c6_i40)) {
          emlrtDynamicBoundsCheckR2012b(c6_i43, 1, c6_i40, &c6_bb_emlrtBCI,
            &c6_st);
        }

        c6_regionIndices->data[c6_i34] = c6_stats->data[c6_i43 - 1].
          PixelIdxList->data[c6_i34];
      }

      c6_i39 = c6_stats->size[0];
      c6_i42 = (int32_T)c6_c_k;
      if ((c6_i42 < 1) || (c6_i42 > c6_i39)) {
        emlrtDynamicBoundsCheckR2012b(c6_i42, 1, c6_i39, &c6_w_emlrtBCI, &c6_st);
      }

      c6_stats->data[c6_i42 - 1].Area = (real_T)c6_regionIndices->size[0];
    }
  }

  c6_emxFree_real_T(chartInstance, &c6_regionIndices);
  c6_st.site = &c6_eb_emlrtRSI;
  c6_d1 = (real_T)c6_stats->size[0];
  c6_i22 = (int32_T)c6_d1 - 1;
  for (c6_b_k = 0; c6_b_k <= c6_i22; c6_b_k++) {
    c6_d_k = (real_T)c6_b_k + 1.0;
    c6_i26 = c6_stats->size[0];
    c6_i28 = (int32_T)c6_d_k;
    if ((c6_i28 < 1) || (c6_i28 > c6_i26)) {
      emlrtDynamicBoundsCheckR2012b(c6_i28, 1, c6_i26, &c6_s_emlrtBCI, &c6_st);
    }

    c6_i29 = c6_outstats->size[0];
    c6_i32 = (int32_T)c6_d_k;
    if ((c6_i32 < 1) || (c6_i32 > c6_i29)) {
      emlrtDynamicBoundsCheckR2012b(c6_i32, 1, c6_i29, &c6_t_emlrtBCI, &c6_st);
    }

    for (c6_vIdx = 0; c6_vIdx < 2; c6_vIdx++) {
      c6_b_vIdx = (real_T)c6_vIdx + 1.0;
      c6_i38 = c6_stats->size[0];
      c6_i41 = (int32_T)c6_d_k;
      if ((c6_i41 < 1) || (c6_i41 > c6_i38)) {
        emlrtDynamicBoundsCheckR2012b(c6_i41, 1, c6_i38, &c6_v_emlrtBCI, &c6_st);
      }

      c6_i46 = c6_i41 - 1;
      c6_i48 = c6_outstats->size[0];
      c6_i49 = (int32_T)c6_d_k;
      if ((c6_i49 < 1) || (c6_i49 > c6_i48)) {
        emlrtDynamicBoundsCheckR2012b(c6_i49, 1, c6_i48, &c6_u_emlrtBCI, &c6_st);
      }

      c6_i53 = c6_i49 - 1;
      c6_outstats->data[c6_i53].Centroid[(int32_T)c6_b_vIdx - 1] =
        c6_stats->data[c6_i46].Centroid[(int32_T)c6_b_vIdx - 1];
    }

    c6_i36 = c6_stats->size[0];
    c6_i37 = (int32_T)c6_d_k;
    if ((c6_i37 < 1) || (c6_i37 > c6_i36)) {
      emlrtDynamicBoundsCheckR2012b(c6_i37, 1, c6_i36, &c6_s_emlrtBCI, &c6_st);
    }

    c6_i44 = c6_outstats->size[0];
    c6_i45 = (int32_T)c6_d_k;
    if ((c6_i45 < 1) || (c6_i45 > c6_i44)) {
      emlrtDynamicBoundsCheckR2012b(c6_i45, 1, c6_i44, &c6_t_emlrtBCI, &c6_st);
    }

    c6_i50 = c6_stats->size[0];
    c6_i51 = (int32_T)c6_d_k;
    if ((c6_i51 < 1) || (c6_i51 > c6_i50)) {
      emlrtDynamicBoundsCheckR2012b(c6_i51, 1, c6_i50, &c6_x_emlrtBCI, &c6_st);
    }

    c6_i54 = c6_outstats->size[0];
    c6_i55 = (int32_T)c6_d_k;
    if ((c6_i55 < 1) || (c6_i55 > c6_i54)) {
      emlrtDynamicBoundsCheckR2012b(c6_i55, 1, c6_i54, &c6_y_emlrtBCI, &c6_st);
    }

    c6_outstats->data[c6_i55 - 1].Area = c6_stats->data[c6_i51 - 1].Area;
  }

  c6_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, &c6_stats);
}

static void c6_bwconncomp(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_varargin_1,
  c6_s_vX9LV7M75v5ZNol5H5URkE *c6_CC)
{
  c6_emxArray_int32_T *c6_b_regionLengths;
  c6_emxArray_int32_T *c6_b_x;
  c6_emxArray_int32_T *c6_c_x;
  c6_emxArray_int32_T *c6_endRow;
  c6_emxArray_int32_T *c6_idxCount;
  c6_emxArray_int32_T *c6_labelsRenumbered;
  c6_emxArray_int32_T *c6_regionLengths;
  c6_emxArray_int32_T *c6_startCol;
  c6_emxArray_int32_T *c6_startRow;
  c6_emxArray_real_T *c6_pixelIdxList;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_st;
  emlrtStack *c6_r;
  real_T c6_M;
  real_T c6_N;
  real_T c6_b_M;
  real_T c6_b_N;
  real_T c6_b_col;
  real_T c6_b_k;
  real_T c6_c_M;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d_col;
  real_T c6_g_b;
  real_T c6_numComponents;
  int32_T c6_iv[1];
  int32_T c6_a;
  int32_T c6_b;
  int32_T c6_b_a;
  int32_T c6_b_b;
  int32_T c6_b_c;
  int32_T c6_b_loop_ub;
  int32_T c6_b_node;
  int32_T c6_b_p;
  int32_T c6_b_root_k;
  int32_T c6_b_root_p;
  int32_T c6_c;
  int32_T c6_c_a;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_k;
  int32_T c6_c_loop_ub;
  int32_T c6_c_p;
  int32_T c6_col;
  int32_T c6_column_offset;
  int32_T c6_currentColumn;
  int32_T c6_d_a;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_d_loop_ub;
  int32_T c6_dim;
  int32_T c6_e_a;
  int32_T c6_e_b;
  int32_T c6_e_k;
  int32_T c6_e_loop_ub;
  int32_T c6_exitg2;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_f_loop_ub;
  int32_T c6_firstRunOnPreviousColumn;
  int32_T c6_firstRunOnThisColumn;
  int32_T c6_g_k;
  int32_T c6_g_loop_ub;
  int32_T c6_h_b;
  int32_T c6_h_k;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i100;
  int32_T c6_i101;
  int32_T c6_i102;
  int32_T c6_i103;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i75;
  int32_T c6_i76;
  int32_T c6_i77;
  int32_T c6_i78;
  int32_T c6_i79;
  int32_T c6_i8;
  int32_T c6_i80;
  int32_T c6_i81;
  int32_T c6_i82;
  int32_T c6_i83;
  int32_T c6_i84;
  int32_T c6_i85;
  int32_T c6_i86;
  int32_T c6_i87;
  int32_T c6_i88;
  int32_T c6_i89;
  int32_T c6_i9;
  int32_T c6_i90;
  int32_T c6_i91;
  int32_T c6_i92;
  int32_T c6_i93;
  int32_T c6_i94;
  int32_T c6_i95;
  int32_T c6_i96;
  int32_T c6_i97;
  int32_T c6_i98;
  int32_T c6_i99;
  int32_T c6_i_b;
  int32_T c6_i_k;
  int32_T c6_idx;
  int32_T c6_k;
  int32_T c6_lastRunOnPreviousColumn;
  int32_T c6_loop_ub;
  int32_T c6_nextLabel;
  int32_T c6_node;
  int32_T c6_numRuns;
  int32_T c6_p;
  int32_T c6_root_k;
  int32_T c6_root_p;
  int32_T c6_row;
  int32_T c6_rowidx;
  int32_T c6_runCounter;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_d_overflow;
  boolean_T c6_exitg1;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_rb_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_b_st.site = &c6_sb_emlrtRSI;
  c6_numRuns = 0;
  c6_N = (real_T)c6_varargin_1->size[1];
  c6_M = (real_T)c6_varargin_1->size[0];
  if (c6_M != 0.0) {
    c6_i = (int32_T)c6_N - 1;
    for (c6_col = 0; c6_col <= c6_i; c6_col++) {
      c6_b_col = (real_T)c6_col + 1.0;
      c6_i1 = c6_varargin_1->size[0];
      c6_i3 = 1;
      if ((c6_i3 < 1) || (c6_i3 > c6_i1)) {
        emlrtDynamicBoundsCheckR2012b(c6_i3, 1, c6_i1, &c6_cb_emlrtBCI, &c6_b_st);
      }

      c6_i4 = c6_varargin_1->size[1];
      c6_i5 = (int32_T)c6_b_col;
      if ((c6_i5 < 1) || (c6_i5 > c6_i4)) {
        emlrtDynamicBoundsCheckR2012b(c6_i5, 1, c6_i4, &c6_db_emlrtBCI, &c6_b_st);
      }

      if (c6_varargin_1->data[c6_varargin_1->size[0] * (c6_i5 - 1)]) {
        c6_numRuns++;
      }

      c6_i10 = (int32_T)(c6_M + -1.0) - 1;
      for (c6_k = 0; c6_k <= c6_i10; c6_k++) {
        c6_b_k = (real_T)c6_k + 2.0;
        c6_i12 = c6_varargin_1->size[0];
        c6_i13 = (int32_T)c6_b_k;
        if ((c6_i13 < 1) || (c6_i13 > c6_i12)) {
          emlrtDynamicBoundsCheckR2012b(c6_i13, 1, c6_i12, &c6_eb_emlrtBCI,
            &c6_b_st);
        }

        c6_i15 = c6_varargin_1->size[1];
        c6_i16 = (int32_T)c6_b_col;
        if ((c6_i16 < 1) || (c6_i16 > c6_i15)) {
          emlrtDynamicBoundsCheckR2012b(c6_i16, 1, c6_i15, &c6_eb_emlrtBCI,
            &c6_b_st);
        }

        if (c6_varargin_1->data[(c6_i13 + c6_varargin_1->size[0] * (c6_i16 - 1))
            - 1]) {
          c6_i18 = c6_varargin_1->size[0];
          c6_i21 = (int32_T)(c6_b_k - 1.0);
          if ((c6_i21 < 1) || (c6_i21 > c6_i18)) {
            emlrtDynamicBoundsCheckR2012b(c6_i21, 1, c6_i18, &c6_fb_emlrtBCI,
              &c6_b_st);
          }

          c6_i24 = c6_varargin_1->size[1];
          c6_i26 = (int32_T)c6_b_col;
          if ((c6_i26 < 1) || (c6_i26 > c6_i24)) {
            emlrtDynamicBoundsCheckR2012b(c6_i26, 1, c6_i24, &c6_fb_emlrtBCI,
              &c6_b_st);
          }

          if (!c6_varargin_1->data[(c6_i21 + c6_varargin_1->size[0] * (c6_i26 -
                1)) - 1]) {
            c6_numRuns++;
          }
        }
      }
    }
  }

  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_regionLengths, 1,
                     &c6_dc_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_startRow, 1, &c6_fc_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_endRow, 1, &c6_gc_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_st, &c6_startCol, 1, &c6_hc_emlrtRTEI);
  if (c6_numRuns == 0) {
    c6_startRow->size[0] = 0;
    c6_endRow->size[0] = 0;
    c6_startCol->size[0] = 0;
    c6_regionLengths->size[0] = 0;
    c6_numRuns = 0;
  } else {
    c6_i2 = c6_startRow->size[0];
    c6_d = (real_T)c6_numRuns;
    if (!(c6_d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c6_d, &c6_o_emlrtDCI, &c6_st);
    }

    c6_startRow->size[0] = (int32_T)muDoubleScalarFloor(c6_d);
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_startRow, c6_i2,
      &c6_ob_emlrtRTEI);
    c6_i6 = c6_endRow->size[0];
    c6_endRow->size[0] = c6_numRuns;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_endRow, c6_i6,
      &c6_pb_emlrtRTEI);
    c6_i9 = c6_startCol->size[0];
    c6_startCol->size[0] = c6_numRuns;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_startCol, c6_i9,
      &c6_qb_emlrtRTEI);
    c6_b_st.site = &c6_tb_emlrtRSI;
    c6_b_N = (real_T)c6_varargin_1->size[1];
    c6_b_M = (real_T)c6_varargin_1->size[0];
    c6_runCounter = 1;
    c6_i14 = (int32_T)c6_b_N - 1;
    for (c6_c_col = 0; c6_c_col <= c6_i14; c6_c_col++) {
      c6_d_col = (real_T)c6_c_col + 1.0;
      c6_row = 1;
      while ((real_T)c6_row <= c6_b_M) {
        c6_exitg1 = false;
        while ((!c6_exitg1) && ((real_T)c6_row <= c6_b_M)) {
          c6_i23 = c6_varargin_1->size[0];
          if ((c6_row < 1) || (c6_row > c6_i23)) {
            emlrtDynamicBoundsCheckR2012b(c6_row, 1, c6_i23, &c6_gb_emlrtBCI,
              &c6_b_st);
          }

          c6_i27 = c6_varargin_1->size[1];
          c6_i31 = (int32_T)c6_d_col;
          if ((c6_i31 < 1) || (c6_i31 > c6_i27)) {
            emlrtDynamicBoundsCheckR2012b(c6_i31, 1, c6_i27, &c6_gb_emlrtBCI,
              &c6_b_st);
          }

          if (!c6_varargin_1->data[(c6_row + c6_varargin_1->size[0] * (c6_i31 -
                1)) - 1]) {
            c6_row++;
          } else {
            c6_exitg1 = true;
          }
        }

        if ((real_T)c6_row <= c6_b_M) {
          c6_i25 = c6_varargin_1->size[0];
          if ((c6_row < 1) || (c6_row > c6_i25)) {
            emlrtDynamicBoundsCheckR2012b(c6_row, 1, c6_i25, &c6_hb_emlrtBCI,
              &c6_b_st);
          }

          c6_i30 = c6_varargin_1->size[1];
          c6_i33 = (int32_T)c6_d_col;
          if ((c6_i33 < 1) || (c6_i33 > c6_i30)) {
            emlrtDynamicBoundsCheckR2012b(c6_i33, 1, c6_i30, &c6_hb_emlrtBCI,
              &c6_b_st);
          }

          if (c6_varargin_1->data[(c6_row + c6_varargin_1->size[0] * (c6_i33 - 1))
              - 1]) {
            c6_i37 = c6_startCol->size[0];
            if ((c6_runCounter < 1) || (c6_runCounter > c6_i37)) {
              emlrtDynamicBoundsCheckR2012b(c6_runCounter, 1, c6_i37,
                &c6_ib_emlrtBCI, &c6_b_st);
            }

            c6_startCol->data[c6_runCounter - 1] = (int32_T)c6_d_col;
            c6_i40 = c6_startRow->size[0];
            if ((c6_runCounter < 1) || (c6_runCounter > c6_i40)) {
              emlrtDynamicBoundsCheckR2012b(c6_runCounter, 1, c6_i40,
                &c6_kb_emlrtBCI, &c6_b_st);
            }

            c6_startRow->data[c6_runCounter - 1] = c6_row;
            c6_exitg1 = false;
            while ((!c6_exitg1) && ((real_T)c6_row <= c6_b_M)) {
              c6_i45 = c6_varargin_1->size[0];
              if ((c6_row < 1) || (c6_row > c6_i45)) {
                emlrtDynamicBoundsCheckR2012b(c6_row, 1, c6_i45, &c6_qb_emlrtBCI,
                  &c6_b_st);
              }

              c6_i49 = c6_varargin_1->size[1];
              c6_i52 = (int32_T)c6_d_col;
              if ((c6_i52 < 1) || (c6_i52 > c6_i49)) {
                emlrtDynamicBoundsCheckR2012b(c6_i52, 1, c6_i49, &c6_qb_emlrtBCI,
                  &c6_b_st);
              }

              if (c6_varargin_1->data[(c6_row + c6_varargin_1->size[0] * (c6_i52
                    - 1)) - 1]) {
                c6_row++;
              } else {
                c6_exitg1 = true;
              }
            }

            c6_i44 = c6_endRow->size[0];
            if ((c6_runCounter < 1) || (c6_runCounter > c6_i44)) {
              emlrtDynamicBoundsCheckR2012b(c6_runCounter, 1, c6_i44,
                &c6_sb_emlrtBCI, &c6_b_st);
            }

            c6_endRow->data[c6_runCounter - 1] = c6_row - 1;
            c6_runCounter++;
          }
        }
      }
    }

    c6_i17 = c6_regionLengths->size[0];
    c6_regionLengths->size[0] = c6_numRuns;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_regionLengths, c6_i17,
      &c6_rb_emlrtRTEI);
    c6_loop_ub = c6_numRuns - 1;
    for (c6_i19 = 0; c6_i19 <= c6_loop_ub; c6_i19++) {
      c6_regionLengths->data[c6_i19] = 0;
    }

    c6_e_k = 1;
    c6_currentColumn = 2;
    c6_nextLabel = 1;
    c6_firstRunOnPreviousColumn = -1;
    c6_lastRunOnPreviousColumn = 0;
    c6_firstRunOnThisColumn = 1;
    while (c6_e_k <= c6_numRuns) {
      c6_i35 = c6_startCol->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i35)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i35, &c6_jb_emlrtBCI, &c6_st);
      }

      if (c6_startCol->data[c6_e_k - 1] == c6_currentColumn) {
        c6_firstRunOnPreviousColumn = c6_firstRunOnThisColumn;
        c6_firstRunOnThisColumn = c6_e_k;
        c6_lastRunOnPreviousColumn = c6_e_k;
        c6_i41 = c6_startCol->size[0];
        if ((c6_e_k < 1) || (c6_e_k > c6_i41)) {
          emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i41, &c6_rb_emlrtBCI,
            &c6_st);
        }

        c6_currentColumn = c6_startCol->data[c6_e_k - 1] + 1;
      } else {
        c6_i39 = c6_startCol->size[0];
        if ((c6_e_k < 1) || (c6_e_k > c6_i39)) {
          emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i39, &c6_mb_emlrtBCI,
            &c6_st);
        }

        if (c6_startCol->data[c6_e_k - 1] > c6_currentColumn) {
          c6_firstRunOnPreviousColumn = -1;
          c6_lastRunOnPreviousColumn = 0;
          c6_firstRunOnThisColumn = c6_e_k;
          c6_i42 = c6_startCol->size[0];
          if ((c6_e_k < 1) || (c6_e_k > c6_i42)) {
            emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i42, &c6_tb_emlrtBCI,
              &c6_st);
          }

          c6_currentColumn = c6_startCol->data[c6_e_k - 1] + 1;
        }
      }

      if (c6_firstRunOnPreviousColumn >= 0) {
        for (c6_p = c6_firstRunOnPreviousColumn; c6_p <
             c6_lastRunOnPreviousColumn; c6_p++) {
          c6_i47 = c6_endRow->size[0];
          if ((c6_e_k < 1) || (c6_e_k > c6_i47)) {
            emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i47, &c6_wb_emlrtBCI,
              &c6_st);
          }

          c6_i51 = c6_startRow->size[0];
          if ((c6_p < 1) || (c6_p > c6_i51)) {
            emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i51, &c6_xb_emlrtBCI,
              &c6_st);
          }

          if (c6_endRow->data[c6_e_k - 1] >= c6_startRow->data[c6_p - 1] - 1) {
            c6_i55 = c6_startRow->size[0];
            if ((c6_e_k < 1) || (c6_e_k > c6_i55)) {
              emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i55, &c6_yb_emlrtBCI,
                &c6_st);
            }

            c6_i58 = c6_endRow->size[0];
            if ((c6_p < 1) || (c6_p > c6_i58)) {
              emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i58, &c6_ac_emlrtBCI,
                &c6_st);
            }

            if (c6_startRow->data[c6_e_k - 1] <= c6_endRow->data[c6_p - 1] + 1)
            {
              c6_i60 = c6_regionLengths->size[0];
              if ((c6_e_k < 1) || (c6_e_k > c6_i60)) {
                emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i60, &c6_bc_emlrtBCI,
                  &c6_st);
              }

              if (c6_regionLengths->data[c6_e_k - 1] == 0) {
                c6_i62 = c6_regionLengths->size[0];
                if ((c6_p < 1) || (c6_p > c6_i62)) {
                  emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i62, &c6_ec_emlrtBCI,
                    &c6_st);
                }

                c6_i65 = c6_regionLengths->size[0];
                if ((c6_e_k < 1) || (c6_e_k > c6_i65)) {
                  emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i65,
                    &c6_fc_emlrtBCI, &c6_st);
                }

                c6_regionLengths->data[c6_e_k - 1] = c6_regionLengths->data[c6_p
                  - 1];
                c6_nextLabel++;
              } else {
                c6_i61 = c6_regionLengths->size[0];
                if ((c6_e_k < 1) || (c6_e_k > c6_i61)) {
                  emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i61,
                    &c6_cc_emlrtBCI, &c6_st);
                }

                c6_i64 = c6_regionLengths->size[0];
                if ((c6_p < 1) || (c6_p > c6_i64)) {
                  emlrtDynamicBoundsCheckR2012b(c6_p, 1, c6_i64, &c6_dc_emlrtBCI,
                    &c6_st);
                }

                if (c6_regionLengths->data[c6_e_k - 1] != c6_regionLengths->
                    data[c6_p - 1]) {
                  c6_b_st.site = &c6_ub_emlrtRSI;
                  c6_g_k = c6_e_k;
                  c6_b_p = c6_p;
                  c6_c_st.site = &c6_vb_emlrtRSI;
                  c6_node = c6_g_k;
                  c6_root_k = c6_node;
                  do {
                    c6_exitg2 = 0;
                    c6_i68 = c6_regionLengths->size[0];
                    if ((c6_root_k < 1) || (c6_root_k > c6_i68)) {
                      emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i68,
                        &c6_lc_emlrtBCI, &c6_c_st);
                    }

                    if (c6_root_k != c6_regionLengths->data[c6_root_k - 1]) {
                      c6_i70 = c6_regionLengths->size[0];
                      c6_i71 = c6_regionLengths->size[0];
                      if ((c6_root_k < 1) || (c6_root_k > c6_i71)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i71,
                          &c6_mc_emlrtBCI, &c6_c_st);
                      }

                      c6_i73 = c6_regionLengths->data[c6_root_k - 1];
                      if ((c6_i73 < 1) || (c6_i73 > c6_i70)) {
                        emlrtDynamicBoundsCheckR2012b(c6_i73, 1, c6_i70,
                          &c6_mc_emlrtBCI, &c6_c_st);
                      }

                      c6_i74 = c6_regionLengths->size[0];
                      if ((c6_root_k < 1) || (c6_root_k > c6_i74)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i74,
                          &c6_nc_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_root_k - 1] =
                        c6_regionLengths->data[c6_i73 - 1];
                      c6_i77 = c6_regionLengths->size[0];
                      if ((c6_root_k < 1) || (c6_root_k > c6_i77)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_k, 1, c6_i77,
                          &c6_oc_emlrtBCI, &c6_c_st);
                      }

                      c6_root_k = c6_regionLengths->data[c6_root_k - 1];
                    } else {
                      c6_exitg2 = 1;
                    }
                  } while (c6_exitg2 == 0);

                  c6_c_st.site = &c6_wb_emlrtRSI;
                  c6_b_node = c6_b_p;
                  c6_root_p = c6_b_node;
                  do {
                    c6_exitg2 = 0;
                    c6_i75 = c6_regionLengths->size[0];
                    if ((c6_root_p < 1) || (c6_root_p > c6_i75)) {
                      emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i75,
                        &c6_lc_emlrtBCI, &c6_c_st);
                    }

                    if (c6_root_p != c6_regionLengths->data[c6_root_p - 1]) {
                      c6_i78 = c6_regionLengths->size[0];
                      c6_i79 = c6_regionLengths->size[0];
                      if ((c6_root_p < 1) || (c6_root_p > c6_i79)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i79,
                          &c6_mc_emlrtBCI, &c6_c_st);
                      }

                      c6_i81 = c6_regionLengths->data[c6_root_p - 1];
                      if ((c6_i81 < 1) || (c6_i81 > c6_i78)) {
                        emlrtDynamicBoundsCheckR2012b(c6_i81, 1, c6_i78,
                          &c6_mc_emlrtBCI, &c6_c_st);
                      }

                      c6_i82 = c6_regionLengths->size[0];
                      if ((c6_root_p < 1) || (c6_root_p > c6_i82)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i82,
                          &c6_nc_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_root_p - 1] =
                        c6_regionLengths->data[c6_i81 - 1];
                      c6_i85 = c6_regionLengths->size[0];
                      if ((c6_root_p < 1) || (c6_root_p > c6_i85)) {
                        emlrtDynamicBoundsCheckR2012b(c6_root_p, 1, c6_i85,
                          &c6_oc_emlrtBCI, &c6_c_st);
                      }

                      c6_root_p = c6_regionLengths->data[c6_root_p - 1];
                    } else {
                      c6_exitg2 = 1;
                    }
                  } while (c6_exitg2 == 0);

                  if (c6_root_k != c6_root_p) {
                    c6_c_st.site = &c6_xb_emlrtRSI;
                    c6_b_root_k = c6_root_k;
                    c6_b_root_p = c6_root_p;
                    c6_h_k = c6_g_k;
                    c6_c_p = c6_b_p;
                    if (c6_b_root_p < c6_b_root_k) {
                      c6_i84 = c6_regionLengths->size[0];
                      if ((c6_b_root_k < 1) || (c6_b_root_k > c6_i84)) {
                        emlrtDynamicBoundsCheckR2012b(c6_b_root_k, 1, c6_i84,
                          &c6_qc_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_b_root_k - 1] = c6_b_root_p;
                      c6_i87 = c6_regionLengths->size[0];
                      if ((c6_h_k < 1) || (c6_h_k > c6_i87)) {
                        emlrtDynamicBoundsCheckR2012b(c6_h_k, 1, c6_i87,
                          &c6_sc_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_h_k - 1] = c6_b_root_p;
                    } else {
                      c6_i83 = c6_regionLengths->size[0];
                      if ((c6_b_root_p < 1) || (c6_b_root_p > c6_i83)) {
                        emlrtDynamicBoundsCheckR2012b(c6_b_root_p, 1, c6_i83,
                          &c6_pc_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_b_root_p - 1] = c6_b_root_k;
                      c6_i86 = c6_regionLengths->size[0];
                      if ((c6_c_p < 1) || (c6_c_p > c6_i86)) {
                        emlrtDynamicBoundsCheckR2012b(c6_c_p, 1, c6_i86,
                          &c6_rc_emlrtBCI, &c6_c_st);
                      }

                      c6_regionLengths->data[c6_c_p - 1] = c6_b_root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      c6_i43 = c6_regionLengths->size[0];
      if ((c6_e_k < 1) || (c6_e_k > c6_i43)) {
        emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i43, &c6_ub_emlrtBCI, &c6_st);
      }

      if (c6_regionLengths->data[c6_e_k - 1] == 0) {
        c6_i48 = c6_regionLengths->size[0];
        if ((c6_e_k < 1) || (c6_e_k > c6_i48)) {
          emlrtDynamicBoundsCheckR2012b(c6_e_k, 1, c6_i48, &c6_vb_emlrtBCI,
            &c6_st);
        }

        c6_regionLengths->data[c6_e_k - 1] = c6_nextLabel;
        c6_nextLabel++;
      }

      c6_e_k++;
    }
  }

  if (c6_numRuns == 0) {
    c6_CC->Connectivity = 8.0;
    for (c6_i8 = 0; c6_i8 < 2; c6_i8++) {
      c6_CC->ImageSize[c6_i8] = (real_T)c6_varargin_1->size[c6_i8];
    }

    c6_CC->NumObjects = 0.0;
    c6_CC->RegionIndices->size[0] = 0;
    c6_i11 = c6_CC->RegionLengths->size[0];
    c6_CC->RegionLengths->size[0] = 1;
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_CC->RegionLengths,
      c6_i11, &c6_tb_emlrtRTEI);
    c6_CC->RegionLengths->data[0] = 0;
  } else {
    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_labelsRenumbered, 1,
                       &c6_ec_emlrtRTEI);
    c6_i7 = c6_labelsRenumbered->size[0];
    c6_labelsRenumbered->size[0] = c6_regionLengths->size[0];
    c6_st.site = &c6_ui_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_labelsRenumbered,
      c6_i7, &c6_sb_emlrtRTEI);
    c6_numComponents = 0.0;
    c6_st.site = &c6_qb_emlrtRSI;
    c6_b = c6_numRuns;
    c6_b_b = c6_b;
    if (1 > c6_b_b) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_b_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_numRuns; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_i22 = c6_regionLengths->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i22)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i22, &c6_lb_emlrtBCI, (void *)
          c6_sp);
      }

      if (c6_regionLengths->data[c6_d_k - 1] == c6_d_k) {
        c6_numComponents++;
        c6_i29 = c6_labelsRenumbered->size[0];
        if ((c6_d_k < 1) || (c6_d_k > c6_i29)) {
          emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i29, &c6_pb_emlrtBCI,
            (void *)c6_sp);
        }

        c6_labelsRenumbered->data[c6_d_k - 1] = (int32_T)c6_numComponents;
      }

      c6_i28 = c6_labelsRenumbered->size[0];
      c6_i32 = c6_regionLengths->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i32)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i32, &c6_nb_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i36 = c6_regionLengths->data[c6_d_k - 1];
      if ((c6_i36 < 1) || (c6_i36 > c6_i28)) {
        emlrtDynamicBoundsCheckR2012b(c6_i36, 1, c6_i28, &c6_nb_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i38 = c6_labelsRenumbered->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i38)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i38, &c6_ob_emlrtBCI, (void *)
          c6_sp);
      }

      c6_labelsRenumbered->data[c6_d_k - 1] = c6_labelsRenumbered->data[c6_i36 -
        1];
    }

    c6_i20 = c6_regionLengths->size[0];
    if (c6_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c6_numComponents)) {
      emlrtIntegerCheckR2012b(c6_numComponents, &c6_p_emlrtDCI, (void *)c6_sp);
    }

    c6_regionLengths->size[0] = (int32_T)c6_numComponents;
    c6_st.site = &c6_ti_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_regionLengths, c6_i20,
      &c6_ub_emlrtRTEI);
    if (c6_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c6_numComponents)) {
      emlrtIntegerCheckR2012b(c6_numComponents, &c6_p_emlrtDCI, (void *)c6_sp);
    }

    c6_b_loop_ub = (int32_T)c6_numComponents - 1;
    for (c6_i34 = 0; c6_i34 <= c6_b_loop_ub; c6_i34++) {
      c6_regionLengths->data[c6_i34] = 0;
    }

    c6_st.site = &c6_pb_emlrtRSI;
    c6_c_b = c6_numRuns;
    c6_d_b = c6_c_b;
    if (1 > c6_d_b) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_b_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_f_k = 1; c6_f_k - 1 < c6_numRuns; c6_f_k++) {
      c6_d_k = c6_f_k;
      c6_i46 = c6_labelsRenumbered->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i46)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i46, &c6_gc_emlrtBCI, (void *)
          c6_sp);
      }

      c6_idx = c6_labelsRenumbered->data[c6_d_k - 1];
      c6_i53 = c6_regionLengths->size[0];
      if ((c6_idx < 1) || (c6_idx > c6_i53)) {
        emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i53, &c6_hc_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i54 = c6_endRow->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i54)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i54, &c6_ic_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i57 = c6_startRow->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i57)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i57, &c6_jc_emlrtBCI, (void *)
          c6_sp);
      }

      c6_i59 = c6_regionLengths->size[0];
      if ((c6_idx < 1) || (c6_idx > c6_i59)) {
        emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i59, &c6_kc_emlrtBCI, (void *)
          c6_sp);
      }

      c6_regionLengths->data[c6_idx - 1] = ((c6_regionLengths->data[c6_idx - 1]
        + c6_endRow->data[c6_d_k - 1]) - c6_startRow->data[c6_d_k - 1]) + 1;
    }

    c6_emxInit_int32_T(chartInstance, c6_sp, &c6_b_regionLengths, 1,
                       &c6_vb_emlrtRTEI);
    c6_c_M = (real_T)c6_varargin_1->size[0];
    c6_st.site = &c6_ob_emlrtRSI;
    c6_r = &c6_st;
    c6_i50 = c6_b_regionLengths->size[0];
    c6_b_regionLengths->size[0] = c6_regionLengths->size[0];
    c6_b_st.site = &c6_si_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_b_regionLengths,
      c6_i50, &c6_vb_emlrtRTEI);
    c6_c_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i56 = 0; c6_i56 <= c6_c_loop_ub; c6_i56++) {
      c6_b_regionLengths->data[c6_i56] = c6_regionLengths->data[c6_i56];
    }

    c6_emxInit_real_T(chartInstance, &c6_st, &c6_pixelIdxList, 1,
                      &c6_cc_emlrtRTEI);
    c6_emxInit_int32_T(chartInstance, &c6_st, &c6_b_x, 1, &c6_xb_emlrtRTEI);
    c6_d1 = c6_sum(chartInstance, c6_r, c6_b_regionLengths);
    if (!(c6_d1 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c6_d1, &c6_r_emlrtDCI, &c6_st);
    }

    c6_d2 = c6_d1;
    if (c6_d2 != (real_T)(int32_T)muDoubleScalarFloor(c6_d2)) {
      emlrtIntegerCheckR2012b(c6_d2, &c6_q_emlrtDCI, &c6_st);
    }

    c6_iv[0] = (int32_T)c6_d2;
    c6_i63 = c6_pixelIdxList->size[0];
    c6_pixelIdxList->size[0] = c6_iv[0];
    c6_b_st.site = &c6_si_emlrtRSI;
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_pixelIdxList, c6_i63,
      &c6_wb_emlrtRTEI);
    c6_b_st.site = &c6_nb_emlrtRSI;
    c6_i66 = c6_b_x->size[0];
    c6_b_x->size[0] = c6_regionLengths->size[0];
    c6_c_st.site = &c6_ri_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_b_x, c6_i66,
      &c6_xb_emlrtRTEI);
    c6_d_loop_ub = c6_regionLengths->size[0] - 1;
    c6_emxFree_int32_T(chartInstance, &c6_b_regionLengths);
    for (c6_i67 = 0; c6_i67 <= c6_d_loop_ub; c6_i67++) {
      c6_b_x->data[c6_i67] = c6_regionLengths->data[c6_i67];
    }

    c6_c_st.site = &c6_nc_emlrtRSI;
    c6_dim = 2;
    if ((real_T)c6_b_x->size[0] != 1.0) {
      c6_dim = 1;
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_c_x, 1, &c6_fb_emlrtRTEI);
    c6_i69 = c6_c_x->size[0];
    c6_c_x->size[0] = c6_b_x->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_c_st, c6_c_x, c6_i69,
      &c6_fb_emlrtRTEI);
    c6_e_loop_ub = c6_b_x->size[0] - 1;
    for (c6_i72 = 0; c6_i72 <= c6_e_loop_ub; c6_i72++) {
      c6_c_x->data[c6_i72] = c6_b_x->data[c6_i72];
    }

    c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_idxCount, 1,
                       &c6_yb_emlrtRTEI);
    c6_d_st.site = &c6_oc_emlrtRSI;
    c6_useConstantDim(chartInstance, &c6_d_st, c6_c_x, c6_dim, c6_b_x);
    c6_i76 = c6_idxCount->size[0];
    c6_idxCount->size[0] = 1 + c6_b_x->size[0];
    c6_b_st.site = &c6_ri_emlrtRSI;
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_b_st, c6_idxCount, c6_i76,
      &c6_yb_emlrtRTEI);
    c6_idxCount->data[0] = 0;
    c6_f_loop_ub = c6_b_x->size[0] - 1;
    c6_emxFree_int32_T(chartInstance, &c6_c_x);
    for (c6_i80 = 0; c6_i80 <= c6_f_loop_ub; c6_i80++) {
      c6_idxCount->data[c6_i80 + 1] = c6_b_x->data[c6_i80];
    }

    c6_emxFree_int32_T(chartInstance, &c6_b_x);
    c6_b_st.site = &c6_mb_emlrtRSI;
    c6_e_b = c6_numRuns;
    c6_f_b = c6_e_b;
    if (1 > c6_f_b) {
      c6_c_overflow = false;
    } else {
      c6_c_overflow = (c6_f_b > 2147483646);
    }

    if (c6_c_overflow) {
      c6_c_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_i_k = 1; c6_i_k - 1 < c6_numRuns; c6_i_k++) {
      c6_d_k = c6_i_k;
      c6_i88 = c6_startCol->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i88)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i88, &c6_tc_emlrtBCI, &c6_st);
      }

      c6_a = c6_startCol->data[c6_d_k - 1] - 1;
      c6_c = c6_a;
      c6_b_a = c6_c;
      c6_g_b = c6_c_M;
      c6_column_offset = c6_b_a * (int32_T)c6_g_b;
      c6_i91 = c6_labelsRenumbered->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i91)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i91, &c6_uc_emlrtBCI, &c6_st);
      }

      c6_idx = c6_labelsRenumbered->data[c6_d_k - 1];
      c6_i94 = c6_startRow->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i94)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i94, &c6_vc_emlrtBCI, &c6_st);
      }

      c6_i95 = c6_startRow->data[c6_d_k - 1];
      c6_i97 = c6_endRow->size[0];
      if ((c6_d_k < 1) || (c6_d_k > c6_i97)) {
        emlrtDynamicBoundsCheckR2012b(c6_d_k, 1, c6_i97, &c6_wc_emlrtBCI, &c6_st);
      }

      c6_i98 = c6_endRow->data[c6_d_k - 1];
      c6_b_st.site = &c6_lb_emlrtRSI;
      c6_c_a = c6_i95;
      c6_h_b = c6_i98;
      c6_d_a = c6_c_a;
      c6_i_b = c6_h_b;
      if (c6_d_a > c6_i_b) {
        c6_d_overflow = false;
      } else {
        c6_d_overflow = (c6_i_b > 2147483646);
      }

      if (c6_d_overflow) {
        c6_c_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_rowidx = c6_i95; c6_rowidx <= c6_i98; c6_rowidx++) {
        c6_i99 = c6_idxCount->size[0];
        if ((c6_idx < 1) || (c6_idx > c6_i99)) {
          emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i99, &c6_xc_emlrtBCI,
            &c6_st);
        }

        c6_e_a = c6_idxCount->data[c6_idx - 1] + 1;
        c6_b_c = c6_e_a;
        c6_i100 = c6_idxCount->size[0];
        if ((c6_idx < 1) || (c6_idx > c6_i100)) {
          emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i100, &c6_yc_emlrtBCI,
            &c6_st);
        }

        c6_idxCount->data[c6_idx - 1] = c6_b_c;
        c6_i101 = c6_pixelIdxList->size[0];
        c6_i102 = c6_idxCount->size[0];
        if ((c6_idx < 1) || (c6_idx > c6_i102)) {
          emlrtDynamicBoundsCheckR2012b(c6_idx, 1, c6_i102, &c6_ad_emlrtBCI,
            &c6_st);
        }

        c6_i103 = c6_idxCount->data[c6_idx - 1];
        if ((c6_i103 < 1) || (c6_i103 > c6_i101)) {
          emlrtDynamicBoundsCheckR2012b(c6_i103, 1, c6_i101, &c6_ad_emlrtBCI,
            &c6_st);
        }

        c6_pixelIdxList->data[c6_i103 - 1] = (real_T)(c6_rowidx +
          c6_column_offset);
      }
    }

    c6_emxFree_int32_T(chartInstance, &c6_idxCount);
    c6_emxFree_int32_T(chartInstance, &c6_labelsRenumbered);
    c6_CC->Connectivity = 8.0;
    for (c6_i89 = 0; c6_i89 < 2; c6_i89++) {
      c6_CC->ImageSize[c6_i89] = (real_T)c6_varargin_1->size[c6_i89];
    }

    c6_CC->NumObjects = c6_numComponents;
    c6_i90 = c6_CC->RegionIndices->size[0];
    c6_CC->RegionIndices->size[0] = c6_pixelIdxList->size[0];
    c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_CC->RegionIndices,
      c6_i90, &c6_ac_emlrtRTEI);
    c6_g_loop_ub = c6_pixelIdxList->size[0] - 1;
    for (c6_i92 = 0; c6_i92 <= c6_g_loop_ub; c6_i92++) {
      c6_CC->RegionIndices->data[c6_i92] = c6_pixelIdxList->data[c6_i92];
    }

    c6_emxFree_real_T(chartInstance, &c6_pixelIdxList);
    c6_i93 = c6_CC->RegionLengths->size[0];
    c6_CC->RegionLengths->size[0] = c6_regionLengths->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_CC->RegionLengths,
      c6_i93, &c6_bc_emlrtRTEI);
    c6_h_loop_ub = c6_regionLengths->size[0] - 1;
    for (c6_i96 = 0; c6_i96 <= c6_h_loop_ub; c6_i96++) {
      c6_CC->RegionLengths->data[c6_i96] = c6_regionLengths->data[c6_i96];
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_startCol);
  c6_emxFree_int32_T(chartInstance, &c6_endRow);
  c6_emxFree_int32_T(chartInstance, &c6_startRow);
  c6_emxFree_int32_T(chartInstance, &c6_regionLengths);
}

static real_T c6_sum(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c6_sp, c6_emxArray_int32_T *c6_b_x)
{
  c6_emxArray_int32_T *c6_c_x;
  c6_emxArray_int32_T *c6_d_x;
  c6_emxArray_int32_T *c6_e_x;
  c6_emxArray_int32_T *c6_f_x;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_g_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_s;
  int32_T c6_a;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_loop_ub;
  int32_T c6_b_vlen;
  int32_T c6_c_loop_ub;
  int32_T c6_c_vlen;
  int32_T c6_d_loop_ub;
  int32_T c6_d_vlen;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_ib;
  int32_T c6_inb;
  int32_T c6_lidx;
  int32_T c6_loop_ub;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_vlen;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_yb_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_g_st.prev = &c6_f_st;
  c6_g_st.tls = c6_f_st.tls;
  c6_b_st.site = &c6_ac_emlrtRSI;
  c6_vlen = c6_b_x->size[0];
  c6_c_st.site = &c6_bc_emlrtRSI;
  c6_b_vlen = c6_vlen;
  c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_c_x, 1, &c6_lc_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_d_x, 1, &c6_jc_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_e_x, 1, &c6_kc_emlrtRTEI);
  c6_emxInit_int32_T(chartInstance, &c6_c_st, &c6_f_x, 1, &c6_ic_emlrtRTEI);
  if ((c6_b_x->size[0] == 0) || (c6_b_vlen == 0)) {
    c6_b_y = 0.0;
  } else {
    c6_d_st.site = &c6_cc_emlrtRSI;
    c6_c_vlen = c6_b_vlen;
    c6_e_st.site = &c6_dc_emlrtRSI;
    c6_d_vlen = c6_c_vlen;
    if (c6_d_vlen < 4096) {
      c6_i = c6_f_x->size[0];
      c6_f_x->size[0] = c6_b_x->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_e_st, c6_f_x, c6_i,
        &c6_ic_emlrtRTEI);
      c6_loop_ub = c6_b_x->size[0] - 1;
      for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
        c6_f_x->data[c6_i1] = c6_b_x->data[c6_i1];
      }

      c6_f_st.site = &c6_ec_emlrtRSI;
      c6_b_y = c6_sumColumnB(chartInstance, &c6_f_st, c6_f_x, c6_d_vlen);
    } else {
      c6_a = c6_d_vlen;
      c6_nfb = c6_div_nzp_s32(chartInstance, c6_a, 4096, 0, 1U, 0, 0);
      c6_inb = c6_nfb << 12;
      c6_lidx = c6_inb;
      c6_nleft = c6_d_vlen - c6_inb;
      c6_i2 = c6_d_x->size[0];
      c6_d_x->size[0] = c6_b_x->size[0];
      c6_emxEnsureCapacity_int32_T(chartInstance, &c6_e_st, c6_d_x, c6_i2,
        &c6_jc_emlrtRTEI);
      c6_b_loop_ub = c6_b_x->size[0] - 1;
      for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
        c6_d_x->data[c6_i3] = c6_b_x->data[c6_i3];
      }

      c6_s = c6_sumColumnB4(chartInstance, c6_d_x, 1);
      c6_f_st.site = &c6_fc_emlrtRSI;
      c6_b = c6_nfb;
      c6_b_b = c6_b;
      if (2 > c6_b_b) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_b_b > 2147483646);
      }

      if (c6_overflow) {
        c6_g_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_g_st);
      }

      for (c6_ib = 1; c6_ib < c6_nfb; c6_ib++) {
        c6_i4 = c6_e_x->size[0];
        c6_e_x->size[0] = c6_b_x->size[0];
        c6_emxEnsureCapacity_int32_T(chartInstance, &c6_e_st, c6_e_x, c6_i4,
          &c6_kc_emlrtRTEI);
        c6_c_loop_ub = c6_b_x->size[0] - 1;
        for (c6_i6 = 0; c6_i6 <= c6_c_loop_ub; c6_i6++) {
          c6_e_x->data[c6_i6] = c6_b_x->data[c6_i6];
        }

        c6_s += c6_sumColumnB4(chartInstance, c6_e_x, 1 + (c6_ib << 12));
      }

      if (c6_nleft > 0) {
        c6_i5 = c6_c_x->size[0];
        c6_c_x->size[0] = c6_b_x->size[0];
        c6_emxEnsureCapacity_int32_T(chartInstance, &c6_e_st, c6_c_x, c6_i5,
          &c6_lc_emlrtRTEI);
        c6_d_loop_ub = c6_b_x->size[0] - 1;
        for (c6_i7 = 0; c6_i7 <= c6_d_loop_ub; c6_i7++) {
          c6_c_x->data[c6_i7] = c6_b_x->data[c6_i7];
        }

        c6_f_st.site = &c6_gc_emlrtRSI;
        c6_s += c6_b_sumColumnB(chartInstance, &c6_f_st, c6_c_x, c6_nleft,
          c6_lidx + 1);
      }

      c6_b_y = c6_s;
    }
  }

  c6_emxFree_int32_T(chartInstance, &c6_f_x);
  c6_emxFree_int32_T(chartInstance, &c6_e_x);
  c6_emxFree_int32_T(chartInstance, &c6_d_x);
  c6_emxFree_int32_T(chartInstance, &c6_c_x);
  return c6_b_y;
}

static real_T c6_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T *c6_b_x, int32_T c6_vlen)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_d_y;
  int32_T c6_a;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_e_b;
  int32_T c6_e_k;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_vstart;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_hc_emlrtRSI;
    c6_b_vlen = c6_vlen - 1;
    c6_b_y = (real_T)c6_b_x->data[0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_mc_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (1 > c6_b_b) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_i; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_y += (real_T)c6_b_x->data[c6_d_k];
    }
  } else {
    c6_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_ic_emlrtRSI;
    c6_b_y = (real_T)c6_b_x->data[0];
    c6_b_st.site = &c6_mc_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_b_k = c6_k;
      c6_b_y += (real_T)c6_b_x->data[c6_b_k];
    }

    c6_st.site = &c6_jc_emlrtRSI;
    c6_c_b = c6_nfb;
    c6_d_b = c6_c_b;
    if (2 > c6_d_b) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_b_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_e_k = 1; c6_e_k < c6_nfb; c6_e_k++) {
      c6_st.site = &c6_kc_emlrtRSI;
      c6_vstart = c6_e_k << 10;
      c6_c_y = (real_T)c6_b_x->data[c6_vstart];
      c6_b_st.site = &c6_mc_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_c_y += (real_T)c6_b_x->data[c6_vstart + c6_g_k];
      }

      c6_b_y += c6_c_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_inb;
      c6_st.site = &c6_lc_emlrtRSI;
      c6_c_vlen = c6_nleft - 1;
      c6_b_vstart = c6_lidx;
      c6_d_y = (real_T)c6_b_x->data[c6_b_vstart];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_mc_emlrtRSI;
      c6_e_b = c6_i1;
      c6_f_b = c6_e_b;
      if (1 > c6_f_b) {
        c6_c_overflow = false;
      } else {
        c6_c_overflow = (c6_f_b > 2147483646);
      }

      if (c6_c_overflow) {
        c6_c_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_d_y += (real_T)c6_b_x->data[c6_b_vstart + c6_i_k];
      }

      c6_b_y += c6_d_y;
    }
  }

  return c6_b_y;
}

static real_T c6_sumColumnB4(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_int32_T *c6_b_x, int32_T c6_vstart)
{
  real_T c6_psum1;
  real_T c6_psum2;
  real_T c6_psum3;
  real_T c6_psum4;
  int32_T c6_b_k;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  (void)chartInstance;
  c6_i2 = c6_vstart + 1023;
  c6_i3 = c6_vstart + 2047;
  c6_i4 = c6_vstart + 3071;
  c6_psum1 = (real_T)c6_b_x->data[c6_vstart - 1];
  c6_psum2 = (real_T)c6_b_x->data[c6_i2];
  c6_psum3 = (real_T)c6_b_x->data[c6_i3];
  c6_psum4 = (real_T)c6_b_x->data[c6_i4];
  for (c6_k = 0; c6_k < 1023; c6_k++) {
    c6_b_k = c6_k + 1;
    c6_psum1 += (real_T)c6_b_x->data[(c6_vstart + c6_b_k) - 1];
    c6_psum2 += (real_T)c6_b_x->data[c6_i2 + c6_b_k];
    c6_psum3 += (real_T)c6_b_x->data[c6_i3 + c6_b_k];
    c6_psum4 += (real_T)c6_b_x->data[c6_i4 + c6_b_k];
  }

  return (c6_psum1 + c6_psum2) + (c6_psum3 + c6_psum4);
}

static real_T c6_b_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T *c6_b_x, int32_T c6_vlen, int32_T
  c6_vstart)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_d_y;
  int32_T c6_a;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_c_vstart;
  int32_T c6_d_b;
  int32_T c6_d_k;
  int32_T c6_d_vstart;
  int32_T c6_e_b;
  int32_T c6_e_k;
  int32_T c6_e_vstart;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_hc_emlrtRSI;
    c6_b_vlen = c6_vlen - 1;
    c6_b_vstart = c6_vstart - 1;
    c6_b_y = (real_T)c6_b_x->data[c6_b_vstart];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_mc_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (1 > c6_b_b) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_i; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_y += (real_T)c6_b_x->data[c6_b_vstart + c6_d_k];
    }
  } else {
    c6_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_ic_emlrtRSI;
    c6_c_vstart = c6_vstart - 1;
    c6_b_y = (real_T)c6_b_x->data[c6_c_vstart];
    c6_b_st.site = &c6_mc_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_b_k = c6_k;
      c6_b_y += (real_T)c6_b_x->data[c6_c_vstart + c6_b_k];
    }

    c6_st.site = &c6_jc_emlrtRSI;
    c6_c_b = c6_nfb;
    c6_d_b = c6_c_b;
    if (2 > c6_d_b) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_b_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_e_k = 1; c6_e_k < c6_nfb; c6_e_k++) {
      c6_st.site = &c6_kc_emlrtRSI;
      c6_d_vstart = (c6_vstart + (c6_e_k << 10)) - 1;
      c6_c_y = (real_T)c6_b_x->data[c6_d_vstart];
      c6_b_st.site = &c6_mc_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_c_y += (real_T)c6_b_x->data[c6_d_vstart + c6_g_k];
      }

      c6_b_y += c6_c_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_vstart + c6_inb;
      c6_st.site = &c6_lc_emlrtRSI;
      c6_c_vlen = c6_nleft - 1;
      c6_e_vstart = c6_lidx - 1;
      c6_d_y = (real_T)c6_b_x->data[c6_e_vstart];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_mc_emlrtRSI;
      c6_e_b = c6_i1;
      c6_f_b = c6_e_b;
      if (1 > c6_f_b) {
        c6_c_overflow = false;
      } else {
        c6_c_overflow = (c6_f_b > 2147483646);
      }

      if (c6_c_overflow) {
        c6_c_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_d_y += (real_T)c6_b_x->data[c6_e_vstart + c6_i_k];
      }

      c6_b_y += c6_d_y;
    }
  }

  return c6_b_y;
}

static void c6_useConstantDim(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T *c6_varargin_2, int32_T c6_varargin_3,
  c6_emxArray_int32_T *c6_varargout_1)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  int32_T c6_loop_ub;
  int32_T c6_nx;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  if (1 == c6_varargin_3) {
    c6_st.site = &c6_pc_emlrtRSI;
    c6_i1 = c6_varargout_1->size[0];
    c6_varargout_1->size[0] = c6_varargin_2->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i1,
      &c6_mc_emlrtRTEI);
    c6_b_loop_ub = c6_varargin_2->size[0] - 1;
    for (c6_i3 = 0; c6_i3 <= c6_b_loop_ub; c6_i3++) {
      c6_varargout_1->data[c6_i3] = c6_varargin_2->data[c6_i3];
    }

    c6_b_st.site = &c6_qc_emlrtRSI;
    if (c6_varargout_1->size[0] != 0) {
      c6_c_st.site = &c6_rc_emlrtRSI;
      c6_nx = c6_varargout_1->size[0] - 1;
      if (!((real_T)c6_varargout_1->size[0] == 1.0)) {
        c6_i4 = c6_nx;
        c6_d_st.site = &c6_sc_emlrtRSI;
        c6_b = c6_i4;
        c6_b_b = c6_b;
        if (1 > c6_b_b) {
          c6_overflow = false;
        } else {
          c6_overflow = (c6_b_b > 2147483646);
        }

        if (c6_overflow) {
          c6_e_st.site = &c6_p_emlrtRSI;
          c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
        }

        for (c6_k = 1; c6_k - 1 < c6_i4; c6_k++) {
          c6_b_k = c6_k;
          c6_varargout_1->data[c6_b_k] += c6_varargout_1->data[c6_b_k - 1];
        }
      }
    }
  } else {
    c6_i = c6_varargout_1->size[0];
    c6_varargout_1->size[0] = c6_varargin_2->size[0];
    c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_varargout_1, c6_i,
      &c6_mc_emlrtRTEI);
    c6_loop_ub = c6_varargin_2->size[0] - 1;
    for (c6_i2 = 0; c6_i2 <= c6_loop_ub; c6_i2++) {
      c6_varargout_1->data[c6_i2] = c6_varargin_2->data[c6_i2];
    }
  }
}

static void c6_assertValidSizeArg(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_varargin_1)
{
  static char_T c6_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c6_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_g_y = NULL;
  real_T c6_arg;
  real_T c6_b_arg;
  real_T c6_b_varargin_1;
  real_T c6_b_x;
  real_T c6_n;
  int32_T c6_b_u;
  int32_T c6_u;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_p;
  boolean_T c6_p;
  (void)chartInstance;
  c6_arg = c6_varargin_1;
  if (c6_arg != c6_arg) {
    c6_p = false;
  } else {
    c6_b_x = c6_arg;
    c6_b = muDoubleScalarIsInf(c6_b_x);
    if (c6_b) {
      c6_p = false;
    } else {
      c6_p = true;
    }
  }

  if (c6_p) {
    c6_b_arg = c6_varargin_1;
    if (c6_b_arg > 2.147483647E+9) {
      c6_b_p = false;
    } else {
      c6_b_p = true;
    }

    if (c6_b_p) {
      c6_b_b = true;
    } else {
      c6_b_b = false;
    }
  } else {
    c6_b_b = false;
  }

  if (!c6_b_b) {
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c6_u = MIN_int32_T;
    c6_d_y = NULL;
    sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), false);
    c6_b_u = MAX_int32_T;
    c6_g_y = NULL;
    sf_mex_assign(&c6_g_y, sf_mex_create("y", &c6_b_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(c6_sp, &c6_c_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 3U, 14, c6_c_y, 14, c6_d_y, 14, c6_g_y)));
  }

  c6_b_varargin_1 = c6_varargin_1;
  if (c6_b_varargin_1 <= 0.0) {
    c6_n = 0.0;
  } else {
    c6_n = c6_b_varargin_1;
  }

  if (!(c6_n <= 2.147483647E+9)) {
    c6_e_y = NULL;
    sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    c6_f_y = NULL;
    sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c6_sp, &c6_d_emlrtMCI, "error", 0U, 2U, 14, c6_e_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_f_y)));
  }
}

static void c6_ind2sub_indexClass(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_siz[2], c6_emxArray_real_T *c6_ndx,
  c6_emxArray_int32_T *c6_varargout_1, c6_emxArray_int32_T *c6_varargout_2)
{
  static char_T c6_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'd', '2', 's', 'u', 'b', '_', 'I', 'n', 'd', 'e',
    'x', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  c6_emxArray_int32_T *c6_vk;
  emlrtStack c6_st;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  real_T c6_b;
  real_T c6_b_k;
  real_T c6_d;
  int32_T c6_b_loop_ub;
  int32_T c6_b_y;
  int32_T c6_c_b;
  int32_T c6_c_loop_ub;
  int32_T c6_cpsiz;
  int32_T c6_d_b;
  int32_T c6_d_loop_ub;
  int32_T c6_e_loop_ub;
  int32_T c6_exitg1;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_hi;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_i5;
  int32_T c6_i6;
  int32_T c6_i7;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_k;
  int32_T c6_loop_ub;
  int32_T c6_maxndx;
  boolean_T c6_b_b;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_i = c6_varargout_1->size[0];
  c6_varargout_1->size[0] = c6_ndx->size[0];
  c6_st.site = &c6_qi_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i,
    &c6_nc_emlrtRTEI);
  c6_loop_ub = c6_ndx->size[0] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_varargout_1->data[c6_i1] = (int32_T)c6_ndx->data[c6_i1];
  }

  c6_cpsiz = (int32_T)c6_siz[0];
  c6_b = c6_siz[1];
  c6_b_y = (int32_T)c6_b;
  c6_maxndx = c6_cpsiz * c6_b_y;
  c6_hi = c6_maxndx;
  c6_d = (real_T)c6_varargout_1->size[0];
  c6_i2 = (int32_T)c6_d - 1;
  c6_k = 0;
  do {
    c6_exitg1 = 0;
    if (c6_k <= c6_i2) {
      c6_b_k = (real_T)c6_k + 1.0;
      if (c6_varargout_1->data[(int32_T)c6_b_k - 1] <= c6_hi) {
        c6_b_b = true;
      } else {
        c6_b_b = false;
      }

      if (!c6_b_b) {
        c6_p = false;
        c6_exitg1 = 1;
      } else {
        c6_k++;
      }
    } else {
      c6_p = true;
      c6_exitg1 = 1;
    }
  } while (c6_exitg1 == 0);

  if (!c6_p) {
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c6_d_y = NULL;
    sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c6_sp, &c6_e_emlrtMCI, "error", 0U, 2U, 14, c6_c_y, 14,
                sf_mex_call(c6_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c6_sp, NULL, "message", 1U, 1U, 14, c6_d_y)));
  }

  c6_i3 = c6_varargout_1->size[0];
  c6_st.site = &c6_pi_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i3,
    &c6_oc_emlrtRTEI);
  c6_b_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i4 = 0; c6_i4 <= c6_b_loop_ub; c6_i4++) {
    c6_varargout_1->data[c6_i4]--;
  }

  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_vk, 1, &c6_pc_emlrtRTEI);
  c6_c_b = c6_cpsiz;
  c6_i5 = c6_vk->size[0];
  c6_vk->size[0] = c6_varargout_1->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_vk, c6_i5,
    &c6_pc_emlrtRTEI);
  c6_c_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i6 = 0; c6_i6 <= c6_c_loop_ub; c6_i6++) {
    c6_vk->data[c6_i6] = c6_div_s32(chartInstance, c6_varargout_1->data[c6_i6],
      c6_c_b, 0, 1U, 0, 0);
  }

  c6_i7 = c6_varargout_2->size[0];
  c6_varargout_2->size[0] = c6_vk->size[0];
  c6_st.site = &c6_oi_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_2, c6_i7,
    &c6_qc_emlrtRTEI);
  c6_d_loop_ub = c6_vk->size[0] - 1;
  for (c6_i8 = 0; c6_i8 <= c6_d_loop_ub; c6_i8++) {
    c6_varargout_2->data[c6_i8] = c6_vk->data[c6_i8] + 1;
  }

  c6_d_b = c6_cpsiz;
  c6_i9 = c6_vk->size[0];
  c6_emxEnsureCapacity_int32_T(chartInstance, c6_sp, c6_vk, c6_i9,
    &c6_rc_emlrtRTEI);
  c6_e_loop_ub = c6_vk->size[0] - 1;
  for (c6_i10 = 0; c6_i10 <= c6_e_loop_ub; c6_i10++) {
    c6_vk->data[c6_i10] *= c6_d_b;
  }

  c6_i11 = c6_varargout_1->size[0];
  c6_st.site = &c6_ni_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i11,
    &c6_sc_emlrtRTEI);
  c6_f_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i12 = 0; c6_i12 <= c6_f_loop_ub; c6_i12++) {
    c6_varargout_1->data[c6_i12] -= c6_vk->data[c6_i12];
  }

  c6_emxFree_int32_T(chartInstance, &c6_vk);
  c6_i13 = c6_varargout_1->size[0];
  c6_st.site = &c6_mi_emlrtRSI;
  c6_emxEnsureCapacity_int32_T(chartInstance, &c6_st, c6_varargout_1, c6_i13,
    &c6_tc_emlrtRTEI);
  c6_g_loop_ub = c6_varargout_1->size[0] - 1;
  for (c6_i14 = 0; c6_i14 <= c6_g_loop_ub; c6_i14++) {
    c6_varargout_1->data[c6_i14]++;
  }
}

static void c6_ComputeCentroid(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_imageSize[2], c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 c6_statsAlreadyComputed,
  c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c6_b_stats, c6_sHtk0WM4OMtyqkehwQYcq2
  *c6_b_statsAlreadyComputed)
{
  real_T c6_b_imageSize[2];
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_loop_ub;
  c6_i = c6_b_stats->size[0];
  c6_b_stats->size[0] = c6_stats->size[0];
  c6_emxEnsureCapacity_s_bxcgeNxEuVl(chartInstance, c6_sp, c6_b_stats, c6_i,
    &c6_uc_emlrtRTEI);
  c6_loop_ub = c6_stats->size[0] - 1;
  for (c6_i1 = 0; c6_i1 <= c6_loop_ub; c6_i1++) {
    c6_emxCopyStruct_s_bxcgeNxEuVlgmMh(chartInstance, c6_sp, &c6_b_stats->
      data[c6_i1], &c6_stats->data[c6_i1], &c6_uc_emlrtRTEI);
  }

  *c6_b_statsAlreadyComputed = c6_statsAlreadyComputed;
  for (c6_i2 = 0; c6_i2 < 2; c6_i2++) {
    c6_b_imageSize[c6_i2] = c6_imageSize[c6_i2];
  }

  c6_b_ComputeCentroid(chartInstance, c6_sp, c6_b_imageSize, c6_b_stats,
                       c6_b_statsAlreadyComputed);
}

static real_T c6_c_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T *c6_b_x, int32_T c6_col, int32_T c6_vlen)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_d_y;
  int32_T c6_a;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_col;
  int32_T c6_b_i0;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_i0;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_d_b;
  int32_T c6_d_col;
  int32_T c6_d_i0;
  int32_T c6_d_k;
  int32_T c6_e_b;
  int32_T c6_e_col;
  int32_T c6_e_k;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i0;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_vstart;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_hc_emlrtRSI;
    c6_b_col = c6_col - 1;
    c6_b_vlen = c6_vlen - 1;
    c6_i0 = c6_b_col * c6_b_x->size[0];
    c6_b_y = c6_b_x->data[c6_i0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_mc_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (1 > c6_b_b) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_i; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_y += c6_b_x->data[c6_i0 + c6_d_k];
    }
  } else {
    c6_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_ic_emlrtRSI;
    c6_c_col = c6_col - 1;
    c6_b_i0 = c6_c_col * c6_b_x->size[0];
    c6_b_y = c6_b_x->data[c6_b_i0];
    c6_b_st.site = &c6_mc_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_b_k = c6_k;
      c6_b_y += c6_b_x->data[c6_b_i0 + c6_b_k];
    }

    c6_st.site = &c6_jc_emlrtRSI;
    c6_c_b = c6_nfb;
    c6_d_b = c6_c_b;
    if (2 > c6_d_b) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_b_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_e_k = 1; c6_e_k < c6_nfb; c6_e_k++) {
      c6_st.site = &c6_kc_emlrtRSI;
      c6_d_col = c6_col - 1;
      c6_vstart = c6_e_k << 10;
      c6_c_i0 = c6_vstart + c6_d_col * c6_b_x->size[0];
      c6_c_y = c6_b_x->data[c6_c_i0];
      c6_b_st.site = &c6_mc_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_c_y += c6_b_x->data[c6_c_i0 + c6_g_k];
      }

      c6_b_y += c6_c_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_inb;
      c6_st.site = &c6_lc_emlrtRSI;
      c6_e_col = c6_col - 1;
      c6_c_vlen = c6_nleft - 1;
      c6_b_vstart = c6_lidx + 1;
      c6_d_i0 = (c6_b_vstart + c6_e_col * c6_b_x->size[0]) - 1;
      c6_d_y = c6_b_x->data[c6_d_i0];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_mc_emlrtRSI;
      c6_e_b = c6_i1;
      c6_f_b = c6_e_b;
      if (1 > c6_f_b) {
        c6_c_overflow = false;
      } else {
        c6_c_overflow = (c6_f_b > 2147483646);
      }

      if (c6_c_overflow) {
        c6_c_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_d_y += c6_b_x->data[c6_d_i0 + c6_i_k];
      }

      c6_b_y += c6_d_y;
    }
  }

  return c6_b_y;
}

static real_T c6_b_sumColumnB4(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_real_T *c6_b_x, int32_T c6_col, int32_T c6_vstart)
{
  real_T c6_psum1;
  real_T c6_psum2;
  real_T c6_psum3;
  real_T c6_psum4;
  int32_T c6_b_k;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_i4;
  int32_T c6_k;
  (void)chartInstance;
  c6_i1 = (c6_vstart + (c6_col - 1) * c6_b_x->size[0]) - 1;
  c6_i2 = c6_i1 + 1024;
  c6_i3 = c6_i1 + 2048;
  c6_i4 = c6_i1 + 3072;
  c6_psum1 = c6_b_x->data[c6_i1];
  c6_psum2 = c6_b_x->data[c6_i2];
  c6_psum3 = c6_b_x->data[c6_i3];
  c6_psum4 = c6_b_x->data[c6_i4];
  for (c6_k = 0; c6_k < 1023; c6_k++) {
    c6_b_k = c6_k + 1;
    c6_psum1 += c6_b_x->data[c6_i1 + c6_b_k];
    c6_psum2 += c6_b_x->data[c6_i2 + c6_b_k];
    c6_psum3 += c6_b_x->data[c6_i3 + c6_b_k];
    c6_psum4 += c6_b_x->data[c6_i4 + c6_b_k];
  }

  return (c6_psum1 + c6_psum2) + (c6_psum3 + c6_psum4);
}

static real_T c6_d_sumColumnB(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T *c6_b_x, int32_T c6_col, int32_T c6_vlen,
  int32_T c6_vstart)
{
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_st;
  real_T c6_b_y;
  real_T c6_c_y;
  real_T c6_d_y;
  int32_T c6_a;
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_col;
  int32_T c6_b_i0;
  int32_T c6_b_k;
  int32_T c6_b_vlen;
  int32_T c6_b_vstart;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_i0;
  int32_T c6_c_k;
  int32_T c6_c_vlen;
  int32_T c6_c_vstart;
  int32_T c6_d_b;
  int32_T c6_d_col;
  int32_T c6_d_i0;
  int32_T c6_d_k;
  int32_T c6_d_vstart;
  int32_T c6_e_b;
  int32_T c6_e_col;
  int32_T c6_e_k;
  int32_T c6_e_vstart;
  int32_T c6_f_b;
  int32_T c6_f_k;
  int32_T c6_g_k;
  int32_T c6_h_k;
  int32_T c6_i;
  int32_T c6_i0;
  int32_T c6_i1;
  int32_T c6_i_k;
  int32_T c6_inb;
  int32_T c6_k;
  int32_T c6_lidx;
  int32_T c6_nfb;
  int32_T c6_nleft;
  boolean_T c6_b_overflow;
  boolean_T c6_c_overflow;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (c6_vlen <= 1024) {
    c6_st.site = &c6_hc_emlrtRSI;
    c6_b_col = c6_col - 1;
    c6_b_vlen = c6_vlen - 1;
    c6_b_vstart = c6_vstart;
    c6_i0 = (c6_b_vstart + c6_b_col * c6_b_x->size[0]) - 1;
    c6_b_y = c6_b_x->data[c6_i0];
    c6_i = c6_b_vlen;
    c6_b_st.site = &c6_mc_emlrtRSI;
    c6_b = c6_i;
    c6_b_b = c6_b;
    if (1 > c6_b_b) {
      c6_overflow = false;
    } else {
      c6_overflow = (c6_b_b > 2147483646);
    }

    if (c6_overflow) {
      c6_c_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
    }

    for (c6_c_k = 1; c6_c_k - 1 < c6_i; c6_c_k++) {
      c6_d_k = c6_c_k;
      c6_b_y += c6_b_x->data[c6_i0 + c6_d_k];
    }
  } else {
    c6_a = c6_vlen;
    c6_nfb = c6_div_nzp_s32(chartInstance, c6_a, 1024, 0, 1U, 0, 0);
    c6_inb = c6_nfb << 10;
    c6_st.site = &c6_ic_emlrtRSI;
    c6_c_col = c6_col - 1;
    c6_c_vstart = c6_vstart;
    c6_b_i0 = (c6_c_vstart + c6_c_col * c6_b_x->size[0]) - 1;
    c6_b_y = c6_b_x->data[c6_b_i0];
    c6_b_st.site = &c6_mc_emlrtRSI;
    for (c6_k = 1; c6_k - 1 < 1023; c6_k++) {
      c6_b_k = c6_k;
      c6_b_y += c6_b_x->data[c6_b_i0 + c6_b_k];
    }

    c6_st.site = &c6_jc_emlrtRSI;
    c6_c_b = c6_nfb;
    c6_d_b = c6_c_b;
    if (2 > c6_d_b) {
      c6_b_overflow = false;
    } else {
      c6_b_overflow = (c6_d_b > 2147483646);
    }

    if (c6_b_overflow) {
      c6_b_st.site = &c6_p_emlrtRSI;
      c6_check_forloop_overflow_error(chartInstance, &c6_b_st);
    }

    for (c6_e_k = 1; c6_e_k < c6_nfb; c6_e_k++) {
      c6_st.site = &c6_kc_emlrtRSI;
      c6_d_col = c6_col - 1;
      c6_d_vstart = c6_vstart + (c6_e_k << 10);
      c6_c_i0 = (c6_d_vstart + c6_d_col * c6_b_x->size[0]) - 1;
      c6_c_y = c6_b_x->data[c6_c_i0];
      c6_b_st.site = &c6_mc_emlrtRSI;
      for (c6_f_k = 1; c6_f_k - 1 < 1023; c6_f_k++) {
        c6_g_k = c6_f_k;
        c6_c_y += c6_b_x->data[c6_c_i0 + c6_g_k];
      }

      c6_b_y += c6_c_y;
    }

    if (c6_vlen > c6_inb) {
      c6_nleft = c6_vlen - c6_inb;
      c6_lidx = c6_vstart + c6_inb;
      c6_st.site = &c6_lc_emlrtRSI;
      c6_e_col = c6_col - 1;
      c6_c_vlen = c6_nleft - 1;
      c6_e_vstart = c6_lidx;
      c6_d_i0 = (c6_e_vstart + c6_e_col * c6_b_x->size[0]) - 1;
      c6_d_y = c6_b_x->data[c6_d_i0];
      c6_i1 = c6_c_vlen;
      c6_b_st.site = &c6_mc_emlrtRSI;
      c6_e_b = c6_i1;
      c6_f_b = c6_e_b;
      if (1 > c6_f_b) {
        c6_c_overflow = false;
      } else {
        c6_c_overflow = (c6_f_b > 2147483646);
      }

      if (c6_c_overflow) {
        c6_c_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_c_st);
      }

      for (c6_h_k = 1; c6_h_k - 1 < c6_i1; c6_h_k++) {
        c6_i_k = c6_h_k;
        c6_d_y += c6_b_x->data[c6_d_i0 + c6_i_k];
      }

      c6_b_y += c6_d_y;
    }
  }

  return c6_b_y;
}

static void c6_power(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
                     *c6_sp, c6_emxArray_real_T *c6_a, c6_emxArray_real_T
                     *c6_b_y)
{
  static char_T c6_cv[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  c6_emxArray_real_T *c6_ztemp;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_st;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_e_y = NULL;
  real_T c6_dv[2];
  real_T c6_b_a;
  real_T c6_d_y;
  int32_T c6_iv[1];
  int32_T c6_b;
  int32_T c6_b_b;
  int32_T c6_b_k;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i2;
  int32_T c6_i3;
  int32_T c6_k;
  int32_T c6_nx;
  boolean_T c6_overflow;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_ztemp, 1, &c6_ad_emlrtRTEI);
  c6_st.site = &c6_pg_emlrtRSI;
  c6_b_st.site = &c6_qg_emlrtRSI;
  c6_c_st.site = &c6_i_emlrtRSI;
  c6_d_st.site = &c6_k_emlrtRSI;
  c6_dv[0] = (real_T)c6_a->size[0];
  c6_i = c6_ztemp->size[0];
  c6_ztemp->size[0] = (int32_T)c6_dv[0];
  c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_ztemp, c6_i,
    &c6_vc_emlrtRTEI);
  c6_iv[0] = c6_ztemp->size[0];
  c6_i1 = c6_ztemp->size[0];
  c6_ztemp->size[0] = c6_iv[0];
  c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_ztemp, c6_i1,
    &c6_wc_emlrtRTEI);
  c6_iv[0] = c6_ztemp->size[0];
  c6_i2 = c6_ztemp->size[0];
  c6_ztemp->size[0] = c6_iv[0];
  c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_ztemp, c6_i2,
    &c6_xc_emlrtRTEI);
  c6_iv[0] = c6_ztemp->size[0];
  c6_i3 = c6_b_y->size[0];
  c6_b_y->size[0] = c6_iv[0];
  c6_emxEnsureCapacity_real_T(chartInstance, &c6_d_st, c6_b_y, c6_i3,
    &c6_yc_emlrtRTEI);
  c6_nx = c6_b_y->size[0];
  c6_e_st.site = &c6_o_emlrtRSI;
  c6_b = c6_nx;
  c6_b_b = c6_b;
  c6_emxFree_real_T(chartInstance, &c6_ztemp);
  if (1 > c6_b_b) {
    c6_overflow = false;
  } else {
    c6_overflow = (c6_b_b > 2147483646);
  }

  if (c6_overflow) {
    c6_f_st.site = &c6_p_emlrtRSI;
    c6_check_forloop_overflow_error(chartInstance, &c6_f_st);
  }

  for (c6_k = 1; c6_k - 1 < c6_nx; c6_k++) {
    c6_b_k = c6_k - 1;
    c6_b_a = c6_a->data[c6_b_k];
    c6_d_y = c6_b_a * c6_b_a;
    c6_b_y->data[c6_b_k] = c6_d_y;
  }

  c6_p = false;
  if (c6_p) {
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c6_e_y = NULL;
    sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c6_st, &c6_o_emlrtMCI, "error", 0U, 2U, 14, c6_c_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_e_y)));
  }
}

static void c6_indexShapeCheck(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, int32_T c6_matrixSize, int32_T c6_indexSize[2])
{
  static char_T c6_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  int32_T c6_size1;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_c;
  boolean_T c6_c;
  boolean_T c6_nonSingletonDimFound;
  (void)chartInstance;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_size1 = c6_matrixSize;
  if (c6_size1 != 1) {
    c6_b = false;
  } else {
    c6_b = true;
  }

  if (c6_b) {
    c6_nonSingletonDimFound = false;
    if (c6_indexSize[1] != 1) {
      c6_nonSingletonDimFound = true;
    }

    c6_b_b = c6_nonSingletonDimFound;
    if (c6_b_b) {
      c6_c = true;
    } else {
      c6_c = false;
    }
  } else {
    c6_c = false;
  }

  c6_st.site = &c6_hi_emlrtRSI;
  c6_b_c = c6_c;
  if (c6_b_c) {
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c6_st, &c6_s_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_c_y)));
  }
}

static void c6_c_warning(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp)
{
  static char_T c6_msgID[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'F', 'i', 'n', 'd', 'V', 'e', 'c', 't', 'o', 'r',
    'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 'M', 'i', 's', 'm',
    'a', 't', 'c', 'h' };

  static char_T c6_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c6_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_msgID, 10, 0U, 1U, 0U, 2, 1, 43),
                false);
  c6_st.site = &c6_w_emlrtRSI;
  c6_f_feval(chartInstance, &c6_st, c6_b_y, c6_e_feval(chartInstance, &c6_st,
              c6_c_y, c6_d_y));
}

static void c6_minimum(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, c6_emxArray_real_T *c6_b_x, real_T *c6_ex, int32_T *c6_idx)
{
  static char_T c6_cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T c6_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_st;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  real_T c6_b_ex;
  real_T c6_c_ex;
  real_T c6_c_x;
  real_T c6_d_ex;
  real_T c6_d_x;
  real_T c6_e_x;
  real_T c6_f_x;
  real_T c6_g_x;
  real_T c6_h_x;
  int32_T c6_a;
  int32_T c6_b_a;
  int32_T c6_b_idx;
  int32_T c6_b_k;
  int32_T c6_b_last;
  int32_T c6_c;
  int32_T c6_c_a;
  int32_T c6_c_idx;
  int32_T c6_c_last;
  int32_T c6_d_idx;
  int32_T c6_e_b;
  int32_T c6_f_b;
  int32_T c6_first;
  int32_T c6_g_b;
  int32_T c6_h_b;
  int32_T c6_i;
  int32_T c6_k;
  int32_T c6_last;
  int32_T c6_nx;
  boolean_T c6_b;
  boolean_T c6_b_b;
  boolean_T c6_b_overflow;
  boolean_T c6_b_p;
  boolean_T c6_c_b;
  boolean_T c6_d_b;
  boolean_T c6_exitg1;
  boolean_T c6_guard1 = false;
  boolean_T c6_guard2 = false;
  boolean_T c6_i_b;
  boolean_T c6_overflow;
  boolean_T c6_p;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_st.site = &c6_ki_emlrtRSI;
  if ((c6_b_x->size[0] == 1) || ((real_T)c6_b_x->size[0] != 1.0)) {
    c6_b = true;
  } else {
    c6_b = false;
  }

  if (!c6_b) {
    c6_b_y = NULL;
    sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c6_d_y = NULL;
    sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c6_st, &c6_i_emlrtMCI, "error", 0U, 2U, 14, c6_b_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_d_y)));
  }

  if (!((real_T)c6_b_x->size[0] >= 1.0)) {
    c6_c_y = NULL;
    sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c6_e_y = NULL;
    sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c6_st, &c6_g_emlrtMCI, "error", 0U, 2U, 14, c6_c_y, 14,
                sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c6_st, NULL, "message", 1U, 1U, 14, c6_e_y)));
  }

  c6_b_st.site = &c6_bb_emlrtRSI;
  c6_last = c6_b_x->size[0] - 1;
  c6_a = c6_last;
  c6_c = c6_a + 1;
  c6_nx = c6_c;
  if (c6_nx <= 2) {
    if (c6_nx == 1) {
      c6_b_ex = c6_b_x->data[0];
      c6_b_idx = 1;
    } else {
      c6_guard1 = false;
      c6_guard2 = false;
      if (c6_b_x->data[0] > c6_b_x->data[c6_last]) {
        c6_guard2 = true;
      } else {
        c6_e_x = c6_b_x->data[0];
        c6_c_b = muDoubleScalarIsNaN(c6_e_x);
        if (c6_c_b) {
          c6_f_x = c6_b_x->data[c6_last];
          c6_d_b = muDoubleScalarIsNaN(c6_f_x);
          if (!c6_d_b) {
            c6_guard2 = true;
          } else {
            c6_guard1 = true;
          }
        } else {
          c6_guard1 = true;
        }
      }

      if (c6_guard2) {
        c6_b_ex = c6_b_x->data[c6_last];
        c6_b_idx = c6_last + 1;
      }

      if (c6_guard1) {
        c6_b_ex = c6_b_x->data[0];
        c6_b_idx = 1;
      }
    }
  } else {
    c6_c_st.site = &c6_je_emlrtRSI;
    c6_b_last = c6_last + 1;
    c6_c_x = c6_b_x->data[0];
    c6_d_x = c6_c_x;
    c6_b_b = muDoubleScalarIsNaN(c6_d_x);
    c6_p = !c6_b_b;
    if (c6_p) {
      c6_b_idx = 1;
    } else {
      c6_b_idx = 0;
      c6_d_st.site = &c6_ke_emlrtRSI;
      c6_e_b = c6_b_last;
      c6_f_b = c6_e_b;
      if (2 > c6_f_b) {
        c6_overflow = false;
      } else {
        c6_overflow = (c6_f_b > 2147483646);
      }

      if (c6_overflow) {
        c6_e_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
      }

      c6_k = 2;
      c6_exitg1 = false;
      while ((!c6_exitg1) && (c6_k <= c6_b_last)) {
        c6_g_x = c6_b_x->data[c6_k - 1];
        c6_h_x = c6_g_x;
        c6_i_b = muDoubleScalarIsNaN(c6_h_x);
        c6_b_p = !c6_i_b;
        if (c6_b_p) {
          c6_b_idx = c6_k;
          c6_exitg1 = true;
        } else {
          c6_k++;
        }
      }
    }

    if (c6_b_idx == 0) {
      c6_b_ex = c6_b_x->data[0];
      c6_b_idx = 1;
    } else {
      c6_c_st.site = &c6_cb_emlrtRSI;
      c6_first = c6_b_idx;
      c6_c_last = c6_last + 1;
      c6_d_ex = c6_b_x->data[c6_first - 1];
      c6_d_idx = c6_first;
      c6_i = c6_first + 1;
      c6_d_st.site = &c6_db_emlrtRSI;
      c6_b_a = c6_i;
      c6_g_b = c6_c_last;
      c6_c_a = c6_b_a;
      c6_h_b = c6_g_b;
      if (c6_c_a > c6_h_b) {
        c6_b_overflow = false;
      } else {
        c6_b_overflow = (c6_h_b > 2147483646);
      }

      if (c6_b_overflow) {
        c6_e_st.site = &c6_p_emlrtRSI;
        c6_check_forloop_overflow_error(chartInstance, &c6_e_st);
      }

      for (c6_b_k = c6_i; c6_b_k <= c6_c_last; c6_b_k++) {
        if (c6_d_ex > c6_b_x->data[c6_b_k - 1]) {
          c6_d_ex = c6_b_x->data[c6_b_k - 1];
          c6_d_idx = c6_b_k;
        }
      }

      c6_b_ex = c6_d_ex;
      c6_b_idx = c6_d_idx;
    }
  }

  c6_c_ex = c6_b_ex;
  c6_c_idx = c6_b_idx;
  *c6_ex = c6_c_ex;
  *c6_idx = c6_c_idx;
}

static real_T c6_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance, const
  mxArray *c6_b_cx, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  real_T c6_b_y;
  c6_thisId.fIdentifier = (const char_T *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_b_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_cx), &c6_thisId);
  sf_mex_destroy(&c6_b_cx);
  return c6_b_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_b_y;
  real_T c6_d;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d, 1, 0, 0U, 0, 0U, 0);
  c6_b_y = c6_d;
  sf_mex_destroy(&c6_u);
  return c6_b_y;
}

static uint8_T c6_c_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_ver_1, const char_T *c6_identifier)
{
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_b_y;
  c6_thisId.fIdentifier = (const char_T *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_b_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_is_active_c6_ver_1), &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_ver_1);
  return c6_b_y;
}

static uint8_T c6_d_emlrt_marshallIn(SFc6_ver_1InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_b_u;
  uint8_T c6_b_y;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 3, 0U, 0, 0U, 0);
  c6_b_y = c6_b_u;
  sf_mex_destroy(&c6_u);
  return c6_b_y;
}

static void c6_chart_data_browse_helper(SFc6_ver_1InstanceStruct *chartInstance,
  int32_T c6_ssIdNumber, const mxArray **c6_mxData, uint8_T *c6_isValueTooBig)
{
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d3;
  *c6_mxData = NULL;
  *c6_mxData = NULL;
  *c6_isValueTooBig = 0U;
  switch (c6_ssIdNumber) {
   case 6U:
    *c6_isValueTooBig = 1U;
    break;

   case 7U:
    c6_d = *chartInstance->c6_x;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", *chartInstance->c6_bboxes,
      1, 0U, 1U, 0U, 2, 1, 4), false);
    break;

   case 5U:
    c6_d1 = *chartInstance->c6_y;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c6_d2 = *chartInstance->c6_cx;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c6_d3 = *chartInstance->c6_cy;
    sf_mex_assign(c6_mxData, sf_mex_create("mxData", &c6_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c6_feval(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1)
{
  const mxArray *c6_ = NULL;
  (void)chartInstance;
  c6_ = NULL;
  sf_mex_assign(&c6_, sf_mex_call(c6_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c6_input0), 14, sf_mex_dup(c6_input1)), false);
  sf_mex_destroy(&c6_input0);
  sf_mex_destroy(&c6_input1);
  return c6_;
}

static void c6_b_feval(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1)
{
  (void)chartInstance;
  sf_mex_call(c6_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c6_input0), 14,
              sf_mex_dup(c6_input1));
  sf_mex_destroy(&c6_input0);
  sf_mex_destroy(&c6_input1);
}

static const mxArray *c6_c_feval(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1)
{
  const mxArray *c6_ = NULL;
  (void)chartInstance;
  c6_ = NULL;
  sf_mex_assign(&c6_, sf_mex_call(c6_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c6_input0), 14, sf_mex_dup(c6_input1)), false);
  sf_mex_destroy(&c6_input0);
  sf_mex_destroy(&c6_input1);
  return c6_;
}

static void c6_d_feval(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1)
{
  (void)chartInstance;
  sf_mex_call(c6_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c6_input0), 14,
              sf_mex_dup(c6_input1));
  sf_mex_destroy(&c6_input0);
  sf_mex_destroy(&c6_input1);
}

static const mxArray *c6_e_feval(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1)
{
  const mxArray *c6_ = NULL;
  (void)chartInstance;
  c6_ = NULL;
  sf_mex_assign(&c6_, sf_mex_call(c6_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c6_input0), 14, sf_mex_dup(c6_input1)), false);
  sf_mex_destroy(&c6_input0);
  sf_mex_destroy(&c6_input1);
  return c6_;
}

static void c6_f_feval(SFc6_ver_1InstanceStruct *chartInstance, const emlrtStack
  *c6_sp, const mxArray *c6_input0, const mxArray *c6_input1)
{
  (void)chartInstance;
  sf_mex_call(c6_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c6_input0), 14,
              sf_mex_dup(c6_input1));
  sf_mex_destroy(&c6_input0);
  sf_mex_destroy(&c6_input1);
}

static void c6_b_ComputeCentroid(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, real_T c6_imageSize[2], c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *
  c6_stats, c6_sHtk0WM4OMtyqkehwQYcq2 *c6_statsAlreadyComputed)
{
  static char_T c6_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  c6_cell_wrap_10 c6_reshapes[2];
  c6_emxArray_int32_T *c6_varargout_3;
  c6_emxArray_int32_T *c6_varargout_4;
  c6_emxArray_real_T *c6_b_x;
  c6_emxArray_real_T *c6_c_x;
  c6_emxArray_real_T *c6_d_x;
  c6_emxArray_real_T *c6_e_x;
  c6_emxArray_real_T *c6_f_x;
  c6_emxArray_real_T *c6_j;
  c6_emxArray_real_T *c6_ndx;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  emlrtStack c6_d_st;
  emlrtStack c6_e_st;
  emlrtStack c6_f_st;
  emlrtStack c6_g_st;
  emlrtStack c6_st;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  real_T c6_b_imageSize[2];
  real_T c6_b_y[2];
  real_T c6_c_k;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d_k;
  real_T c6_g_x;
  real_T c6_s;
  int32_T c6_sizes[2];
  int32_T c6_a;
  int32_T c6_b_b;
  int32_T c6_b_col;
  int32_T c6_b_k;
  int32_T c6_b_loop_ub;
  int32_T c6_b_stats;
  int32_T c6_b_vlen;
  int32_T c6_c_b;
  int32_T c6_c_col;
  int32_T c6_c_loop_ub;
  int32_T c6_c_stats;
  int32_T c6_c_vlen;
  int32_T c6_col;
  int32_T c6_d_loop_ub;
  int32_T c6_d_stats;
  int32_T c6_d_vlen;
  int32_T c6_e_loop_ub;
  int32_T c6_e_stats;
  int32_T c6_expected;
  int32_T c6_f_loop_ub;
  int32_T c6_g_loop_ub;
  int32_T c6_h_loop_ub;
  int32_T c6_i;
  int32_T c6_i1;
  int32_T c6_i10;
  int32_T c6_i11;
  int32_T c6_i12;
  int32_T c6_i13;
  int32_T c6_i14;
  int32_T c6_i15;
  int32_T c6_i16;
  int32_T c6_i17;
  int32_T c6_i18;
  int32_T c6_i19;
  int32_T c6_i2;
  int32_T c6_i20;
  int32_T c6_i21;
  int32_T c6_i22;
  int32_T c6_i23;
  int32_T c6_i24;
  int32_T c6_i25;
  int32_T c6_i26;
  int32_T c6_i27;
  int32_T c6_i28;
  int32_T c6_i29;
  int32_T c6_i3;
  int32_T c6_i30;
  int32_T c6_i31;
  int32_T c6_i32;
  int32_T c6_i33;
  int32_T c6_i34;
  int32_T c6_i35;
  int32_T c6_i36;
  int32_T c6_i37;
  int32_T c6_i38;
  int32_T c6_i39;
  int32_T c6_i4;
  int32_T c6_i40;
  int32_T c6_i41;
  int32_T c6_i42;
  int32_T c6_i43;
  int32_T c6_i44;
  int32_T c6_i45;
  int32_T c6_i46;
  int32_T c6_i47;
  int32_T c6_i48;
  int32_T c6_i49;
  int32_T c6_i5;
  int32_T c6_i50;
  int32_T c6_i51;
  int32_T c6_i52;
  int32_T c6_i53;
  int32_T c6_i54;
  int32_T c6_i55;
  int32_T c6_i56;
  int32_T c6_i57;
  int32_T c6_i58;
  int32_T c6_i59;
  int32_T c6_i6;
  int32_T c6_i60;
  int32_T c6_i61;
  int32_T c6_i62;
  int32_T c6_i63;
  int32_T c6_i64;
  int32_T c6_i65;
  int32_T c6_i66;
  int32_T c6_i67;
  int32_T c6_i68;
  int32_T c6_i69;
  int32_T c6_i7;
  int32_T c6_i70;
  int32_T c6_i71;
  int32_T c6_i72;
  int32_T c6_i73;
  int32_T c6_i74;
  int32_T c6_i8;
  int32_T c6_i9;
  int32_T c6_i_loop_ub;
  int32_T c6_ib;
  int32_T c6_inb;
  int32_T c6_j_loop_ub;
  int32_T c6_k;
  int32_T c6_k_loop_ub;
  int32_T c6_l_loop_ub;
  int32_T c6_lidx;
  int32_T c6_loop_ub;
  int32_T c6_m_loop_ub;
  int32_T c6_n_loop_ub;
  int32_T c6_nfb;
  int32_T c6_nleft;
  int32_T c6_o_loop_ub;
  int32_T c6_result;
  int32_T c6_vlen;
  boolean_T c6_b;
  boolean_T c6_b1;
  boolean_T c6_overflow;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  c6_d_st.prev = &c6_c_st;
  c6_d_st.tls = c6_c_st.tls;
  c6_e_st.prev = &c6_d_st;
  c6_e_st.tls = c6_d_st.tls;
  c6_f_st.prev = &c6_e_st;
  c6_f_st.tls = c6_e_st.tls;
  c6_g_st.prev = &c6_f_st;
  c6_g_st.tls = c6_f_st.tls;
  if (!c6_statsAlreadyComputed->Centroid) {
    c6_statsAlreadyComputed->Centroid = true;
    c6_st.site = &c6_ef_emlrtRSI;
    if (!c6_statsAlreadyComputed->PixelList) {
      c6_statsAlreadyComputed->PixelList = true;
      c6_d1 = (real_T)c6_stats->size[0];
      c6_i1 = (int32_T)c6_d1 - 1;
      c6_b_k = 0;
      c6_emxInit_real_T(chartInstance, &c6_st, &c6_j, 1, &c6_id_emlrtRTEI);
      c6_emxInit_real_T(chartInstance, &c6_st, &c6_ndx, 1, &c6_dd_emlrtRTEI);
      c6_emxInit_int32_T(chartInstance, &c6_st, &c6_varargout_4, 1,
                         &c6_uc_emlrtRTEI);
      c6_emxInit_int32_T(chartInstance, &c6_st, &c6_varargout_3, 1,
                         &c6_uc_emlrtRTEI);
      c6_emxInitMatrix_cell_wrap_10(chartInstance, &c6_st, c6_reshapes,
        &c6_jd_emlrtRTEI);
      while (c6_b_k <= c6_i1) {
        c6_d_k = (real_T)c6_b_k + 1.0;
        c6_i2 = c6_ndx->size[0];
        c6_i4 = c6_stats->size[0];
        c6_i6 = (int32_T)c6_d_k;
        if ((c6_i6 < 1) || (c6_i6 > c6_i4)) {
          emlrtDynamicBoundsCheckR2012b(c6_i6, 1, c6_i4, &c6_fd_emlrtBCI, &c6_st);
        }

        c6_ndx->size[0] = c6_stats->data[c6_i6 - 1].PixelIdxList->size[0];
        c6_emxEnsureCapacity_real_T(chartInstance, &c6_st, c6_ndx, c6_i2,
          &c6_bd_emlrtRTEI);
        c6_i9 = c6_stats->size[0];
        c6_i10 = (int32_T)c6_d_k;
        if ((c6_i10 < 1) || (c6_i10 > c6_i9)) {
          emlrtDynamicBoundsCheckR2012b(c6_i10, 1, c6_i9, &c6_fd_emlrtBCI,
            &c6_st);
        }

        c6_loop_ub = c6_stats->data[c6_i10 - 1].PixelIdxList->size[0] - 1;
        for (c6_i13 = 0; c6_i13 <= c6_loop_ub; c6_i13++) {
          c6_i14 = c6_stats->size[0];
          c6_i17 = (int32_T)c6_d_k;
          if ((c6_i17 < 1) || (c6_i17 > c6_i14)) {
            emlrtDynamicBoundsCheckR2012b(c6_i17, 1, c6_i14, &c6_fd_emlrtBCI,
              &c6_st);
          }

          c6_ndx->data[c6_i13] = c6_stats->data[c6_i17 - 1].PixelIdxList->
            data[c6_i13];
        }

        if (c6_ndx->size[0] != 0) {
          c6_b_st.site = &c6_nd_emlrtRSI;
          c6_i20 = c6_ndx->size[0];
          c6_i22 = c6_stats->size[0];
          c6_i23 = (int32_T)c6_d_k;
          if ((c6_i23 < 1) || (c6_i23 > c6_i22)) {
            emlrtDynamicBoundsCheckR2012b(c6_i23, 1, c6_i22, &c6_gd_emlrtBCI,
              &c6_b_st);
          }

          c6_ndx->size[0] = c6_stats->data[c6_i23 - 1].PixelIdxList->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i20,
            &c6_dd_emlrtRTEI);
          c6_i29 = c6_stats->size[0];
          c6_i31 = (int32_T)c6_d_k;
          if ((c6_i31 < 1) || (c6_i31 > c6_i29)) {
            emlrtDynamicBoundsCheckR2012b(c6_i31, 1, c6_i29, &c6_gd_emlrtBCI,
              &c6_b_st);
          }

          c6_c_loop_ub = c6_stats->data[c6_i31 - 1].PixelIdxList->size[0] - 1;
          for (c6_i35 = 0; c6_i35 <= c6_c_loop_ub; c6_i35++) {
            c6_i38 = c6_stats->size[0];
            c6_i40 = (int32_T)c6_d_k;
            if ((c6_i40 < 1) || (c6_i40 > c6_i38)) {
              emlrtDynamicBoundsCheckR2012b(c6_i40, 1, c6_i38, &c6_gd_emlrtBCI,
                &c6_b_st);
            }

            c6_ndx->data[c6_i35] = c6_stats->data[c6_i40 - 1].PixelIdxList->
              data[c6_i35];
          }

          c6_c_st.site = &c6_pd_emlrtRSI;
          for (c6_i39 = 0; c6_i39 < 2; c6_i39++) {
            c6_b_imageSize[c6_i39] = c6_imageSize[c6_i39];
          }

          c6_ind2sub_indexClass(chartInstance, &c6_c_st, c6_b_imageSize, c6_ndx,
                                c6_varargout_3, c6_varargout_4);
          c6_i42 = c6_ndx->size[0];
          c6_ndx->size[0] = c6_varargout_3->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_ndx, c6_i42,
            &c6_o_emlrtRTEI);
          c6_d_loop_ub = c6_varargout_3->size[0] - 1;
          for (c6_i46 = 0; c6_i46 <= c6_d_loop_ub; c6_i46++) {
            c6_ndx->data[c6_i46] = (real_T)c6_varargout_3->data[c6_i46];
          }

          c6_i47 = c6_j->size[0];
          c6_j->size[0] = c6_varargout_4->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_b_st, c6_j, c6_i47,
            &c6_o_emlrtRTEI);
          c6_f_loop_ub = c6_varargout_4->size[0] - 1;
          for (c6_i50 = 0; c6_i50 <= c6_f_loop_ub; c6_i50++) {
            c6_j->data[c6_i50] = (real_T)c6_varargout_4->data[c6_i50];
          }

          c6_b_st.site = &c6_od_emlrtRSI;
          c6_c_st.site = &c6_qd_emlrtRSI;
          c6_result = c6_j->size[0];
          c6_sizes[0] = c6_result;
          c6_d_st.site = &c6_rd_emlrtRSI;
          c6_expected = c6_sizes[0];
          if (c6_j->size[0] == c6_expected) {
            c6_b1 = true;
          } else {
            c6_b1 = false;
          }

          if (!c6_b1) {
            c6_c_y = NULL;
            sf_mex_assign(&c6_c_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            c6_d_y = NULL;
            sf_mex_assign(&c6_d_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            sf_mex_call(&c6_d_st, &c6_f_emlrtMCI, "error", 0U, 2U, 14, c6_c_y,
                        14, sf_mex_call(&c6_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c6_d_st, NULL, "message", 1U, 1U, 14, c6_d_y)));
          }

          if (c6_ndx->size[0] == c6_expected) {
            c6_b1 = true;
          } else {
            c6_b1 = false;
          }

          if (!c6_b1) {
            c6_e_y = NULL;
            sf_mex_assign(&c6_e_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            c6_f_y = NULL;
            sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2,
              1, 39), false);
            sf_mex_call(&c6_d_st, &c6_f_emlrtMCI, "error", 0U, 2U, 14, c6_e_y,
                        14, sf_mex_call(&c6_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c6_d_st, NULL, "message", 1U, 1U, 14, c6_f_y)));
          }

          c6_i53 = c6_reshapes[0].f1->size[0];
          c6_reshapes[0].f1->size[0] = c6_j->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_reshapes[0].f1,
            c6_i53, &c6_fd_emlrtRTEI);
          c6_h_loop_ub = c6_j->size[0] - 1;
          for (c6_i55 = 0; c6_i55 <= c6_h_loop_ub; c6_i55++) {
            c6_reshapes[0].f1->data[c6_i55] = c6_j->data[c6_i55];
          }

          c6_i58 = c6_reshapes[1].f1->size[0];
          c6_reshapes[1].f1->size[0] = c6_ndx->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_reshapes[1].f1,
            c6_i58, &c6_fd_emlrtRTEI);
          c6_k_loop_ub = c6_ndx->size[0] - 1;
          for (c6_i59 = 0; c6_i59 <= c6_k_loop_ub; c6_i59++) {
            c6_reshapes[1].f1->data[c6_i59] = c6_ndx->data[c6_i59];
          }

          c6_i60 = c6_ndx->size[0];
          c6_ndx->size[0] = c6_reshapes[0].f1->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_ndx, c6_i60,
            &c6_gd_emlrtRTEI);
          c6_l_loop_ub = c6_reshapes[0].f1->size[0] - 1;
          for (c6_i61 = 0; c6_i61 <= c6_l_loop_ub; c6_i61++) {
            c6_ndx->data[c6_i61] = c6_reshapes[0].f1->data[c6_i61];
          }

          c6_i62 = c6_j->size[0];
          c6_j->size[0] = c6_reshapes[1].f1->size[0];
          c6_emxEnsureCapacity_real_T(chartInstance, &c6_c_st, c6_j, c6_i62,
            &c6_gd_emlrtRTEI);
          c6_m_loop_ub = c6_reshapes[1].f1->size[0] - 1;
          for (c6_i63 = 0; c6_i63 <= c6_m_loop_ub; c6_i63++) {
            c6_j->data[c6_i63] = c6_reshapes[1].f1->data[c6_i63];
          }

          c6_e_stats = c6_stats->size[0];
          c6_i64 = (int32_T)c6_d_k;
          if ((c6_i64 < 1) || (c6_i64 > c6_e_stats)) {
            emlrtDynamicBoundsCheckR2012b(c6_i64, 1, c6_e_stats, &c6_ed_emlrtBCI,
              &c6_c_st);
          }

          c6_i65 = c6_i64 - 1;
          c6_i66 = c6_stats->data[c6_i65].PixelList->size[0] * c6_stats->
            data[c6_i65].PixelList->size[1];
          c6_stats->data[c6_i65].PixelList->size[0] = c6_ndx->size[0];
          c6_i67 = (int32_T)c6_d_k;
          if ((c6_i67 < 1) || (c6_i67 > c6_e_stats)) {
            emlrtDynamicBoundsCheckR2012b(c6_i67, 1, c6_e_stats, &c6_ed_emlrtBCI,
              &c6_c_st);
          }

          c6_i68 = c6_i67 - 1;
          c6_stats->data[c6_i68].PixelList->size[1] = 2;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_c_st, c6_stats->
            data[c6_i68].PixelList, c6_i66, &c6_hd_emlrtRTEI);
          c6_n_loop_ub = c6_ndx->size[0] - 1;
          for (c6_i69 = 0; c6_i69 <= c6_n_loop_ub; c6_i69++) {
            c6_i70 = (int32_T)c6_d_k;
            if ((c6_i70 < 1) || (c6_i70 > c6_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c6_i70, 1, c6_e_stats,
                &c6_ed_emlrtBCI, &c6_c_st);
            }

            c6_i73 = (int32_T)c6_d_k;
            if ((c6_i73 < 1) || (c6_i73 > c6_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c6_i73, 1, c6_e_stats,
                &c6_ed_emlrtBCI, &c6_c_st);
            }

            c6_stats->data[c6_i70 - 1].PixelList->data[c6_i69] = c6_ndx->
              data[c6_i69];
          }

          c6_o_loop_ub = c6_j->size[0] - 1;
          for (c6_i71 = 0; c6_i71 <= c6_o_loop_ub; c6_i71++) {
            c6_i72 = (int32_T)c6_d_k;
            if ((c6_i72 < 1) || (c6_i72 > c6_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c6_i72, 1, c6_e_stats,
                &c6_ed_emlrtBCI, &c6_c_st);
            }

            c6_i74 = (int32_T)c6_d_k;
            if ((c6_i74 < 1) || (c6_i74 > c6_e_stats)) {
              emlrtDynamicBoundsCheckR2012b(c6_i74, 1, c6_e_stats,
                &c6_ed_emlrtBCI, &c6_c_st);
            }

            c6_stats->data[c6_i72 - 1].PixelList->data[c6_i71 + c6_stats->
              data[c6_i74 - 1].PixelList->size[0]] = c6_j->data[c6_i71];
          }
        } else {
          c6_i16 = c6_stats->size[0];
          c6_i19 = (int32_T)c6_d_k;
          if ((c6_i19 < 1) || (c6_i19 > c6_i16)) {
            emlrtDynamicBoundsCheckR2012b(c6_i19, 1, c6_i16, &c6_cd_emlrtBCI,
              &c6_st);
          }

          c6_i24 = c6_i19 - 1;
          c6_stats->data[c6_i24].PixelList->size[0] = 0;
          c6_i26 = c6_stats->size[0];
          c6_i28 = (int32_T)c6_d_k;
          if ((c6_i28 < 1) || (c6_i28 > c6_i26)) {
            emlrtDynamicBoundsCheckR2012b(c6_i28, 1, c6_i26, &c6_cd_emlrtBCI,
              &c6_st);
          }

          c6_i33 = c6_i28 - 1;
          c6_i34 = c6_stats->data[c6_i33].PixelList->size[0] * c6_stats->
            data[c6_i33].PixelList->size[1];
          c6_stats->data[c6_i33].PixelList->size[1] = 2;
          c6_emxEnsureCapacity_real_T1(chartInstance, &c6_st, c6_stats->
            data[c6_i33].PixelList, c6_i34, &c6_ed_emlrtRTEI);
          c6_b_stats = c6_stats->size[0];
          c6_i37 = (int32_T)c6_d_k;
          if ((c6_i37 < 1) || (c6_i37 > c6_b_stats)) {
            emlrtDynamicBoundsCheckR2012b(c6_i37, 1, c6_b_stats, &c6_cd_emlrtBCI,
              &c6_st);
          }

          c6_c_stats = c6_stats->size[0];
          c6_i41 = (int32_T)c6_d_k;
          if ((c6_i41 < 1) || (c6_i41 > c6_c_stats)) {
            emlrtDynamicBoundsCheckR2012b(c6_i41, 1, c6_c_stats, &c6_cd_emlrtBCI,
              &c6_st);
          }
        }

        c6_b_k++;
      }

      c6_emxFreeMatrix_cell_wrap_10(chartInstance, c6_reshapes);
      c6_emxFree_int32_T(chartInstance, &c6_varargout_3);
      c6_emxFree_int32_T(chartInstance, &c6_varargout_4);
      c6_emxFree_real_T(chartInstance, &c6_ndx);
      c6_emxFree_real_T(chartInstance, &c6_j);
    }

    c6_d = (real_T)c6_stats->size[0];
    c6_i = (int32_T)c6_d - 1;
    c6_k = 0;
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_b_x, 2, &c6_cd_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_c_x, 2, &c6_lc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_d_x, 2, &c6_jc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_e_x, 2, &c6_kc_emlrtRTEI);
    c6_emxInit_real_T1(chartInstance, c6_sp, &c6_f_x, 2, &c6_ic_emlrtRTEI);
    while (c6_k <= c6_i) {
      c6_c_k = (real_T)c6_k + 1.0;
      c6_st.site = &c6_ff_emlrtRSI;
      c6_i3 = c6_stats->size[0];
      c6_i5 = (int32_T)c6_c_k;
      if ((c6_i5 < 1) || (c6_i5 > c6_i3)) {
        emlrtDynamicBoundsCheckR2012b(c6_i5, 1, c6_i3, &c6_bd_emlrtBCI, &c6_st);
      }

      c6_i7 = c6_i5 - 1;
      c6_i8 = c6_b_x->size[0] * c6_b_x->size[1];
      c6_b_x->size[0] = c6_stats->data[c6_i7].PixelList->size[0];
      c6_b_x->size[1] = 2;
      c6_b_st.site = &c6_vi_emlrtRSI;
      c6_emxEnsureCapacity_real_T1(chartInstance, &c6_b_st, c6_b_x, c6_i8,
        &c6_cd_emlrtRTEI);
      c6_i11 = c6_stats->size[0];
      c6_i12 = (int32_T)c6_c_k;
      if ((c6_i12 < 1) || (c6_i12 > c6_i11)) {
        emlrtDynamicBoundsCheckR2012b(c6_i12, 1, c6_i11, &c6_bd_emlrtBCI, &c6_st);
      }

      c6_i15 = c6_i12 - 1;
      c6_i18 = c6_stats->size[0];
      c6_i21 = (int32_T)c6_c_k;
      if ((c6_i21 < 1) || (c6_i21 > c6_i18)) {
        emlrtDynamicBoundsCheckR2012b(c6_i21, 1, c6_i18, &c6_bd_emlrtBCI, &c6_st);
      }

      c6_i25 = c6_i21 - 1;
      c6_b_loop_ub = c6_stats->data[c6_i15].PixelList->size[0] * c6_stats->
        data[c6_i25].PixelList->size[1] - 1;
      for (c6_i27 = 0; c6_i27 <= c6_b_loop_ub; c6_i27++) {
        c6_i30 = c6_stats->size[0];
        c6_i32 = (int32_T)c6_c_k;
        if ((c6_i32 < 1) || (c6_i32 > c6_i30)) {
          emlrtDynamicBoundsCheckR2012b(c6_i32, 1, c6_i30, &c6_hd_emlrtBCI,
            &c6_st);
        }

        c6_b_x->data[c6_i27] = c6_stats->data[c6_i32 - 1].PixelList->data[c6_i27];
      }

      c6_b_st.site = &c6_gf_emlrtRSI;
      c6_vlen = c6_b_x->size[0];
      c6_c_st.site = &c6_bc_emlrtRSI;
      c6_b_vlen = c6_vlen;
      c6_b = (c6_b_x->size[0] == 0);
      if (c6_b || (c6_b_vlen == 0)) {
        for (c6_i36 = 0; c6_i36 < 2; c6_i36++) {
          c6_b_y[c6_i36] = 0.0;
        }
      } else {
        c6_d_st.site = &c6_cc_emlrtRSI;
        c6_c_vlen = c6_b_vlen;
        c6_e_st.site = &c6_dc_emlrtRSI;
        c6_d_vlen = c6_c_vlen;
        if (c6_d_vlen < 4096) {
          for (c6_col = 0; c6_col < 2; c6_col++) {
            c6_b_col = c6_col;
            c6_i45 = c6_f_x->size[0] * c6_f_x->size[1];
            c6_f_x->size[0] = c6_b_x->size[0];
            c6_f_x->size[1] = 2;
            c6_emxEnsureCapacity_real_T1(chartInstance, &c6_e_st, c6_f_x, c6_i45,
              &c6_ic_emlrtRTEI);
            c6_e_loop_ub = c6_b_x->size[0] * c6_b_x->size[1] - 1;
            for (c6_i49 = 0; c6_i49 <= c6_e_loop_ub; c6_i49++) {
              c6_f_x->data[c6_i49] = c6_b_x->data[c6_i49];
            }

            c6_f_st.site = &c6_ec_emlrtRSI;
            c6_b_y[c6_b_col] = c6_c_sumColumnB(chartInstance, &c6_f_st, c6_f_x,
              c6_b_col + 1, c6_d_vlen);
          }
        } else {
          c6_a = c6_d_vlen;
          c6_nfb = c6_div_nzp_s32(chartInstance, c6_a, 4096, 0, 1U, 0, 0);
          c6_inb = c6_nfb << 12;
          c6_lidx = c6_inb;
          c6_nleft = c6_d_vlen - c6_inb;
          for (c6_c_col = 0; c6_c_col < 2; c6_c_col++) {
            c6_b_col = c6_c_col + 1;
            c6_i48 = c6_d_x->size[0] * c6_d_x->size[1];
            c6_d_x->size[0] = c6_b_x->size[0];
            c6_d_x->size[1] = 2;
            c6_emxEnsureCapacity_real_T1(chartInstance, &c6_e_st, c6_d_x, c6_i48,
              &c6_jc_emlrtRTEI);
            c6_g_loop_ub = c6_b_x->size[0] * c6_b_x->size[1] - 1;
            for (c6_i51 = 0; c6_i51 <= c6_g_loop_ub; c6_i51++) {
              c6_d_x->data[c6_i51] = c6_b_x->data[c6_i51];
            }

            c6_s = c6_b_sumColumnB4(chartInstance, c6_d_x, c6_b_col, 1);
            c6_f_st.site = &c6_fc_emlrtRSI;
            c6_b_b = c6_nfb;
            c6_c_b = c6_b_b;
            if (2 > c6_c_b) {
              c6_overflow = false;
            } else {
              c6_overflow = (c6_c_b > 2147483646);
            }

            if (c6_overflow) {
              c6_g_st.site = &c6_p_emlrtRSI;
              c6_check_forloop_overflow_error(chartInstance, &c6_g_st);
            }

            for (c6_ib = 1; c6_ib < c6_nfb; c6_ib++) {
              c6_i52 = c6_e_x->size[0] * c6_e_x->size[1];
              c6_e_x->size[0] = c6_b_x->size[0];
              c6_e_x->size[1] = 2;
              c6_emxEnsureCapacity_real_T1(chartInstance, &c6_e_st, c6_e_x,
                c6_i52, &c6_kc_emlrtRTEI);
              c6_i_loop_ub = c6_b_x->size[0] * c6_b_x->size[1] - 1;
              for (c6_i56 = 0; c6_i56 <= c6_i_loop_ub; c6_i56++) {
                c6_e_x->data[c6_i56] = c6_b_x->data[c6_i56];
              }

              c6_s += c6_b_sumColumnB4(chartInstance, c6_e_x, c6_b_col, 1 +
                (c6_ib << 12));
            }

            if (c6_nleft > 0) {
              c6_i54 = c6_c_x->size[0] * c6_c_x->size[1];
              c6_c_x->size[0] = c6_b_x->size[0];
              c6_c_x->size[1] = 2;
              c6_emxEnsureCapacity_real_T1(chartInstance, &c6_e_st, c6_c_x,
                c6_i54, &c6_lc_emlrtRTEI);
              c6_j_loop_ub = c6_b_x->size[0] * c6_b_x->size[1] - 1;
              for (c6_i57 = 0; c6_i57 <= c6_j_loop_ub; c6_i57++) {
                c6_c_x->data[c6_i57] = c6_b_x->data[c6_i57];
              }

              c6_f_st.site = &c6_gc_emlrtRSI;
              c6_s += c6_d_sumColumnB(chartInstance, &c6_f_st, c6_c_x, c6_b_col,
                c6_nleft, c6_lidx + 1);
            }

            c6_b_y[c6_b_col - 1] = c6_s;
          }
        }
      }

      c6_g_x = (real_T)c6_b_x->size[0];
      c6_d_stats = c6_stats->size[0];
      for (c6_i43 = 0; c6_i43 < 2; c6_i43++) {
        c6_i44 = (int32_T)c6_c_k;
        if ((c6_i44 < 1) || (c6_i44 > c6_d_stats)) {
          emlrtDynamicBoundsCheckR2012b(c6_i44, 1, c6_d_stats, &c6_dd_emlrtBCI,
            &c6_st);
        }

        c6_stats->data[c6_i44 - 1].Centroid[c6_i43] = c6_b_y[c6_i43] / c6_g_x;
      }

      c6_k++;
    }

    c6_emxFree_real_T(chartInstance, &c6_f_x);
    c6_emxFree_real_T(chartInstance, &c6_e_x);
    c6_emxFree_real_T(chartInstance, &c6_d_x);
    c6_emxFree_real_T(chartInstance, &c6_c_x);
    c6_emxFree_real_T(chartInstance, &c6_b_x);
  }
}

static void c6_emxEnsureCapacity_real32_T(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_real32_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(real32_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(real32_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (real32_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_boolean_T(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(boolean_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (boolean_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_int32_T(SFc6_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_int32_T *c6_emxArray, int32_T c6_oldNumel,
  const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(int32_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(int32_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (int32_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_real_T(SFc6_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray, int32_T c6_oldNumel,
  const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(real_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(real_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (real_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxInit_real32_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real32_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_real32_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c6_emxArray_real32_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (real32_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_boolean_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_boolean_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c6_emxArray_boolean_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (boolean_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_sPw6XcACqvsnFn0LPvB6yCC(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_sPw6XcACqvsnFn0LPvB6yC
  **c6_pEmxArray, int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *)emlrtMallocMex(sizeof
    (c6_emxArray_sPw6XcACqvsnFn0LPvB6yC));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (c6_sPw6XcACqvsnFn0LPvB6yCC *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_real_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray, int32_T c6_numDimensions,
  const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_real_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_real_T *)emlrtMallocMex(sizeof(c6_emxArray_real_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (real_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_int32_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_int32_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_int32_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c6_emxArray_int32_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (int32_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxFree_real32_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_real32_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_real32_T *)NULL) {
    if (((*c6_pEmxArray)->data != (real32_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_real32_T *)NULL;
  }
}

static void c6_emxFree_boolean_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_boolean_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_boolean_T *)NULL) {
    if (((*c6_pEmxArray)->data != (boolean_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_boolean_T *)NULL;
  }
}

static void c6_emxFree_sPw6XcACqvsnFn0LPvB6yCC(SFc6_ver_1InstanceStruct
  *chartInstance, c6_emxArray_sPw6XcACqvsnFn0LPvB6yC **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *)NULL) {
    if (((*c6_pEmxArray)->data != (c6_sPw6XcACqvsnFn0LPvB6yCC *)NULL) &&
        (*c6_pEmxArray)->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_sPw6XcACqvsnFn0LPvB6yC *)NULL;
  }
}

static void c6_emxFree_real_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_real_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_real_T *)NULL) {
    if (((*c6_pEmxArray)->data != (real_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_real_T *)NULL;
  }
}

static void c6_emxFree_int32_T(SFc6_ver_1InstanceStruct *chartInstance,
  c6_emxArray_int32_T **c6_pEmxArray)
{
  (void)chartInstance;
  if (*c6_pEmxArray != (c6_emxArray_int32_T *)NULL) {
    if (((*c6_pEmxArray)->data != (int32_T *)NULL) && (*c6_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c6_pEmxArray)->data);
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_int32_T *)NULL;
  }
}

static void c6_emxEnsureCapacity_boolean_T1(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_boolean_T *c6_emxArray,
  int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(boolean_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (boolean_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxEnsureCapacity_sPw6XcACqvsnF(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_sPw6XcACqvsnFn0LPvB6yC
  *c6_emxArray, int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof
      (c6_sPw6XcACqvsnFn0LPvB6yCC));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(c6_sPw6XcACqvsnFn0LPvB6yCC) *
             (uint32_T)c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (c6_sPw6XcACqvsnFn0LPvB6yCC *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxFreeStruct_s_bxcgeNxEuVlgmMh(SFc6_ver_1InstanceStruct
  *chartInstance, c6_s_bxcgeNxEuVlgmMh5HwQaXB *c6_pStruct)
{
  c6_emxFree_boolean_T(chartInstance, &c6_pStruct->Image);
  c6_emxFree_boolean_T(chartInstance, &c6_pStruct->FilledImage);
  c6_emxFree_real_T(chartInstance, &c6_pStruct->PixelIdxList);
  c6_emxFree_real_T(chartInstance, &c6_pStruct->PixelList);
  c6_emxFree_real_T(chartInstance, &c6_pStruct->PixelValues);
  c6_emxFree_real_T(chartInstance, &c6_pStruct->SubarrayIdx);
}

static void c6_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(SFc6_ver_1InstanceStruct
  *chartInstance, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c6_emxArray, int32_T
  c6_fromIndex, int32_T c6_toIndex)
{
  int32_T c6_i;
  for (c6_i = c6_fromIndex; c6_i < c6_toIndex; c6_i++) {
    c6_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &c6_emxArray->data[c6_i]);
  }
}

static void c6_emxInitStruct_s_bxcgeNxEuVlgmMh(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_s_bxcgeNxEuVlgmMh5HwQaXB
  *c6_pStruct, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxInit_boolean_T(chartInstance, c6_sp, &c6_pStruct->Image, 2,
                       c6_srcLocation);
  c6_emxInit_boolean_T(chartInstance, c6_sp, &c6_pStruct->FilledImage, 2,
                       c6_srcLocation);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_pStruct->PixelIdxList, 1,
                    c6_srcLocation);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_pStruct->PixelList, 2,
                     c6_srcLocation);
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_pStruct->PixelValues, 1,
                    c6_srcLocation);
  c6_emxInit_real_T1(chartInstance, c6_sp, &c6_pStruct->SubarrayIdx, 2,
                     c6_srcLocation);
}

static void c6_emxInit_real_T1(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_pEmxArray, int32_T c6_numDimensions,
  const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_real_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_real_T *)emlrtMallocMex(sizeof(c6_emxArray_real_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (real_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c6_emxArray, int32_T c6_fromIndex, int32_T c6_toIndex, const emlrtRTEInfo
  *c6_srcLocation)
{
  int32_T c6_i;
  for (c6_i = c6_fromIndex; c6_i < c6_toIndex; c6_i++) {
    c6_emxInitStruct_s_bxcgeNxEuVlgmMh(chartInstance, c6_sp, &c6_emxArray->
      data[c6_i], c6_srcLocation);
  }
}

static void c6_emxEnsureCapacity_s_bxcgeNxEuVl(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  *c6_emxArray, int32_T c6_oldNumel, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof
      (c6_s_bxcgeNxEuVlgmMh5HwQaXB));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(c6_s_bxcgeNxEuVlgmMh5HwQaXB) *
             (uint32_T)c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (c6_s_bxcgeNxEuVlgmMh5HwQaXB *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }

  if (c6_oldNumel > c6_newNumel) {
    c6_emxTrim_s_bxcgeNxEuVlgmMh5HwQaX(chartInstance, c6_emxArray, c6_newNumel,
      c6_oldNumel);
  } else if (c6_oldNumel < c6_newNumel) {
    c6_emxExpand_s_bxcgeNxEuVlgmMh5HwQ(chartInstance, c6_sp, c6_emxArray,
      c6_oldNumel, c6_newNumel, c6_srcLocation);
  }
}

static void c6_emxCopyStruct_s_bxcgeNxEuVlgmMh(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_s_bxcgeNxEuVlgmMh5HwQaXB *c6_dst,
  const c6_s_bxcgeNxEuVlgmMh5HwQaXB *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  c6_dst->Area = c6_src->Area;
  c6_emxCopyMatrix_real_T(chartInstance, c6_dst->Centroid, c6_src->Centroid);
  c6_emxCopyMatrix_real_T1(chartInstance, c6_dst->BoundingBox,
    c6_src->BoundingBox);
  c6_dst->MajorAxisLength = c6_src->MajorAxisLength;
  c6_dst->MinorAxisLength = c6_src->MinorAxisLength;
  c6_dst->Eccentricity = c6_src->Eccentricity;
  c6_dst->Orientation = c6_src->Orientation;
  c6_emxCopy_boolean_T(chartInstance, c6_sp, &c6_dst->Image, &c6_src->Image,
                       c6_srcLocation);
  c6_emxCopy_boolean_T(chartInstance, c6_sp, &c6_dst->FilledImage,
                       &c6_src->FilledImage, c6_srcLocation);
  c6_dst->FilledArea = c6_src->FilledArea;
  c6_dst->EulerNumber = c6_src->EulerNumber;
  c6_emxCopyMatrix_real_T2(chartInstance, c6_dst->Extrema, c6_src->Extrema);
  c6_dst->EquivDiameter = c6_src->EquivDiameter;
  c6_dst->Extent = c6_src->Extent;
  c6_emxCopy_real_T(chartInstance, c6_sp, &c6_dst->PixelIdxList,
                    &c6_src->PixelIdxList, c6_srcLocation);
  c6_emxCopy_real_T1(chartInstance, c6_sp, &c6_dst->PixelList,
                     &c6_src->PixelList, c6_srcLocation);
  c6_dst->Perimeter = c6_src->Perimeter;
  c6_dst->Circularity = c6_src->Circularity;
  c6_emxCopy_real_T(chartInstance, c6_sp, &c6_dst->PixelValues,
                    &c6_src->PixelValues, c6_srcLocation);
  c6_emxCopyMatrix_real_T(chartInstance, c6_dst->WeightedCentroid,
    c6_src->WeightedCentroid);
  c6_dst->MeanIntensity = c6_src->MeanIntensity;
  c6_dst->MinIntensity = c6_src->MinIntensity;
  c6_dst->MaxIntensity = c6_src->MaxIntensity;
  c6_emxCopy_real_T1(chartInstance, c6_sp, &c6_dst->SubarrayIdx,
                     &c6_src->SubarrayIdx, c6_srcLocation);
  c6_emxCopyMatrix_real_T(chartInstance, c6_dst->SubarrayIdxLengths,
    c6_src->SubarrayIdxLengths);
}

static void c6_emxCopyMatrix_real_T(SFc6_ver_1InstanceStruct *chartInstance,
  real_T c6_dst[2], const real_T c6_src[2])
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_dst[c6_i] = c6_src[c6_i];
  }
}

static void c6_emxCopyMatrix_real_T1(SFc6_ver_1InstanceStruct *chartInstance,
  real_T c6_dst[4], const real_T c6_src[4])
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 4; c6_i++) {
    c6_dst[c6_i] = c6_src[c6_i];
  }
}

static void c6_emxCopy_boolean_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_dst, c6_emxArray_boolean_T *
  const *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_numElDst;
  int32_T c6_numElSrc;
  c6_numElDst = 1;
  c6_numElSrc = 1;
  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    c6_numElDst *= (*c6_dst)->size[c6_i];
    c6_numElSrc *= (*c6_src)->size[c6_i];
  }

  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    (*c6_dst)->size[c6_i] = (*c6_src)->size[c6_i];
  }

  c6_emxEnsureCapacity_boolean_T(chartInstance, c6_sp, *c6_dst, c6_numElDst,
    c6_srcLocation);
  for (c6_i = 0; c6_i < c6_numElSrc; c6_i++) {
    (*c6_dst)->data[c6_i] = (*c6_src)->data[c6_i];
  }
}

static void c6_emxCopyMatrix_real_T2(SFc6_ver_1InstanceStruct *chartInstance,
  real_T c6_dst[16], const real_T c6_src[16])
{
  int32_T c6_i;
  (void)chartInstance;
  for (c6_i = 0; c6_i < 16; c6_i++) {
    c6_dst[c6_i] = c6_src[c6_i];
  }
}

static void c6_emxCopy_real_T(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst, c6_emxArray_real_T * const
  *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_numElDst;
  int32_T c6_numElSrc;
  c6_numElDst = 1;
  c6_numElSrc = 1;
  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    c6_numElDst *= (*c6_dst)->size[c6_i];
    c6_numElSrc *= (*c6_src)->size[c6_i];
  }

  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    (*c6_dst)->size[c6_i] = (*c6_src)->size[c6_i];
  }

  c6_emxEnsureCapacity_real_T(chartInstance, c6_sp, *c6_dst, c6_numElDst,
    c6_srcLocation);
  for (c6_i = 0; c6_i < c6_numElSrc; c6_i++) {
    (*c6_dst)->data[c6_i] = (*c6_src)->data[c6_i];
  }
}

static void c6_emxCopy_real_T1(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_real_T **c6_dst, c6_emxArray_real_T * const
  *c6_src, const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_numElDst;
  int32_T c6_numElSrc;
  c6_numElDst = 1;
  c6_numElSrc = 1;
  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    c6_numElDst *= (*c6_dst)->size[c6_i];
    c6_numElSrc *= (*c6_src)->size[c6_i];
  }

  for (c6_i = 0; c6_i < (*c6_dst)->numDimensions; c6_i++) {
    (*c6_dst)->size[c6_i] = (*c6_src)->size[c6_i];
  }

  c6_emxEnsureCapacity_real_T1(chartInstance, c6_sp, *c6_dst, c6_numElDst,
    c6_srcLocation);
  for (c6_i = 0; c6_i < c6_numElSrc; c6_i++) {
    (*c6_dst)->data[c6_i] = (*c6_src)->data[c6_i];
  }
}

static void c6_emxEnsureCapacity_real_T1(SFc6_ver_1InstanceStruct *chartInstance,
  const emlrtStack *c6_sp, c6_emxArray_real_T *c6_emxArray, int32_T c6_oldNumel,
  const emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  int32_T c6_newCapacity;
  int32_T c6_newNumel;
  void *c6_newData;
  (void)chartInstance;
  if (c6_oldNumel < 0) {
    c6_oldNumel = 0;
  }

  c6_newNumel = 1;
  for (c6_i = 0; c6_i < c6_emxArray->numDimensions; c6_i++) {
    c6_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c6_newNumel,
      (size_t)(uint32_T)c6_emxArray->size[c6_i], c6_srcLocation, (void *)c6_sp);
  }

  if (c6_newNumel > c6_emxArray->allocatedSize) {
    c6_newCapacity = c6_emxArray->allocatedSize;
    if (c6_newCapacity < 16) {
      c6_newCapacity = 16;
    }

    while (c6_newCapacity < c6_newNumel) {
      if (c6_newCapacity > 1073741823) {
        c6_newCapacity = MAX_int32_T;
      } else {
        c6_newCapacity <<= 1;
      }
    }

    c6_newData = emlrtCallocMex((uint32_T)c6_newCapacity, sizeof(real_T));
    if (c6_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
    }

    if (c6_emxArray->data != NULL) {
      memcpy(c6_newData, c6_emxArray->data, sizeof(real_T) * (uint32_T)
             c6_oldNumel);
      if (c6_emxArray->canFreeData) {
        emlrtFreeMex(c6_emxArray->data);
      }
    }

    c6_emxArray->data = (real_T *)c6_newData;
    c6_emxArray->allocatedSize = c6_newCapacity;
    c6_emxArray->canFreeData = true;
  }
}

static void c6_emxInitStruct_s_vX9LV7M75v5ZNol(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_s_vX9LV7M75v5ZNol5H5URkE
  *c6_pStruct, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_pStruct->RegionIndices, 1,
                    c6_srcLocation);
  c6_emxInit_int32_T(chartInstance, c6_sp, &c6_pStruct->RegionLengths, 1,
                     c6_srcLocation);
}

static void c6_emxInit_s_bxcgeNxEuVlgmMh5HwQaX(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa
  **c6_pEmxArray, int32_T c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)emlrtMallocMex(sizeof
    (c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (c6_s_bxcgeNxEuVlgmMh5HwQaXB *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxInit_boolean_T1(SFc6_ver_1InstanceStruct *chartInstance, const
  emlrtStack *c6_sp, c6_emxArray_boolean_T **c6_pEmxArray, int32_T
  c6_numDimensions, const emlrtRTEInfo *c6_srcLocation)
{
  c6_emxArray_boolean_T *c6_emxArray;
  int32_T c6_i;
  (void)chartInstance;
  *c6_pEmxArray = (c6_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c6_emxArray_boolean_T));
  if ((void *)*c6_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray = *c6_pEmxArray;
  c6_emxArray->data = (boolean_T *)NULL;
  c6_emxArray->numDimensions = c6_numDimensions;
  c6_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c6_numDimensions);
  if ((void *)c6_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c6_srcLocation, (void *)c6_sp);
  }

  c6_emxArray->allocatedSize = 0;
  c6_emxArray->canFreeData = true;
  for (c6_i = 0; c6_i < c6_numDimensions; c6_i++) {
    c6_emxArray->size[c6_i] = 0;
  }
}

static void c6_emxFreeStruct_s_vX9LV7M75v5ZNol(SFc6_ver_1InstanceStruct
  *chartInstance, c6_s_vX9LV7M75v5ZNol5H5URkE *c6_pStruct)
{
  c6_emxFree_real_T(chartInstance, &c6_pStruct->RegionIndices);
  c6_emxFree_int32_T(chartInstance, &c6_pStruct->RegionLengths);
}

static void c6_emxFree_s_bxcgeNxEuVlgmMh5HwQaX(SFc6_ver_1InstanceStruct
  *chartInstance, c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa **c6_pEmxArray)
{
  int32_T c6_b_i;
  int32_T c6_i;
  int32_T c6_numEl;
  if (*c6_pEmxArray != (c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)NULL) {
    if ((*c6_pEmxArray)->data != (c6_s_bxcgeNxEuVlgmMh5HwQaXB *)NULL) {
      c6_numEl = 1;
      for (c6_i = 0; c6_i < (*c6_pEmxArray)->numDimensions; c6_i++) {
        c6_numEl *= (*c6_pEmxArray)->size[c6_i];
      }

      for (c6_b_i = 0; c6_b_i < c6_numEl; c6_b_i++) {
        c6_emxFreeStruct_s_bxcgeNxEuVlgmMh(chartInstance, &(*c6_pEmxArray)->
          data[c6_b_i]);
      }

      if ((*c6_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c6_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c6_pEmxArray)->size);
    emlrtFreeMex(*c6_pEmxArray);
    *c6_pEmxArray = (c6_emxArray_s_bxcgeNxEuVlgmMh5HwQa *)NULL;
  }
}

static void c6_emxInitMatrix_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_10 c6_pMatrix[2], const
  emlrtRTEInfo *c6_srcLocation)
{
  int32_T c6_i;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_emxInitStruct_cell_wrap_10(chartInstance, c6_sp, &c6_pMatrix[c6_i],
      c6_srcLocation);
  }
}

static void c6_emxInitStruct_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, c6_cell_wrap_10 *c6_pStruct, const
  emlrtRTEInfo *c6_srcLocation)
{
  c6_emxInit_real_T(chartInstance, c6_sp, &c6_pStruct->f1, 1, c6_srcLocation);
}

static void c6_emxFreeMatrix_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, c6_cell_wrap_10 c6_pMatrix[2])
{
  int32_T c6_i;
  for (c6_i = 0; c6_i < 2; c6_i++) {
    c6_emxFreeStruct_cell_wrap_10(chartInstance, &c6_pMatrix[c6_i]);
  }
}

static void c6_emxFreeStruct_cell_wrap_10(SFc6_ver_1InstanceStruct
  *chartInstance, c6_cell_wrap_10 *c6_pStruct)
{
  c6_emxFree_real_T(chartInstance, &c6_pStruct->f1);
}

static int32_T c6_div_nzp_s32(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_numerator, int32_T c6_denominator, int32_T c6_EMLOvCount_src_loc, uint32_T
  c6_ssid_src_loc, int32_T c6_offset_src_loc, int32_T c6_length_src_loc)
{
  int32_T c6_quotient;
  uint32_T c6_absDenominator;
  uint32_T c6_absNumerator;
  uint32_T c6_tempAbsQuotient;
  boolean_T c6_quotientNeedsNegation;
  (void)chartInstance;
  (void)c6_EMLOvCount_src_loc;
  (void)c6_ssid_src_loc;
  (void)c6_offset_src_loc;
  (void)c6_length_src_loc;
  if (c6_numerator < 0) {
    c6_absNumerator = ~(uint32_T)c6_numerator + 1U;
  } else {
    c6_absNumerator = (uint32_T)c6_numerator;
  }

  if (c6_denominator < 0) {
    c6_absDenominator = ~(uint32_T)c6_denominator + 1U;
  } else {
    c6_absDenominator = (uint32_T)c6_denominator;
  }

  c6_quotientNeedsNegation = ((c6_numerator < 0) != (c6_denominator < 0));
  c6_tempAbsQuotient = c6_absNumerator / c6_absDenominator;
  if (c6_quotientNeedsNegation) {
    c6_quotient = -(int32_T)c6_tempAbsQuotient;
  } else {
    c6_quotient = (int32_T)c6_tempAbsQuotient;
  }

  return c6_quotient;
}

static int32_T c6_div_s32(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_numerator, int32_T c6_denominator, int32_T c6_EMLOvCount_src_loc, uint32_T
  c6_ssid_src_loc, int32_T c6_offset_src_loc, int32_T c6_length_src_loc)
{
  int32_T c6_quotient;
  uint32_T c6_absDenominator;
  uint32_T c6_absNumerator;
  uint32_T c6_tempAbsQuotient;
  boolean_T c6_quotientNeedsNegation;
  (void)c6_EMLOvCount_src_loc;
  if (c6_denominator == 0) {
    if (c6_numerator >= 0) {
      c6_quotient = MAX_int32_T;
    } else {
      c6_quotient = MIN_int32_T;
    }

    sf_data_divide_by_zero_error(chartInstance->S, c6_ssid_src_loc,
      c6_offset_src_loc, c6_length_src_loc);
  } else {
    if (c6_numerator < 0) {
      c6_absNumerator = ~(uint32_T)c6_numerator + 1U;
    } else {
      c6_absNumerator = (uint32_T)c6_numerator;
    }

    if (c6_denominator < 0) {
      c6_absDenominator = ~(uint32_T)c6_denominator + 1U;
    } else {
      c6_absDenominator = (uint32_T)c6_denominator;
    }

    c6_quotientNeedsNegation = ((c6_numerator < 0) != (c6_denominator < 0));
    c6_tempAbsQuotient = c6_absNumerator / c6_absDenominator;
    if (c6_quotientNeedsNegation) {
      c6_quotient = -(int32_T)c6_tempAbsQuotient;
    } else {
      c6_quotient = (int32_T)c6_tempAbsQuotient;
    }
  }

  return c6_quotient;
}

static int32_T c6__s32_minus__(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_b, int32_T c6_c, int32_T c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc,
  int32_T c6_offset_src_loc, int32_T c6_length_src_loc)
{
  int32_T c6_a;
  (void)c6_EMLOvCount_src_loc;
  c6_a = c6_b - c6_c;
  if (((c6_b ^ c6_a) & (c6_b ^ c6_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c6_ssid_src_loc, c6_offset_src_loc,
      c6_length_src_loc);
  }

  return c6_a;
}

static int32_T c6__s32_add__(SFc6_ver_1InstanceStruct *chartInstance, int32_T
  c6_b, int32_T c6_c, int32_T c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc,
  int32_T c6_offset_src_loc, int32_T c6_length_src_loc)
{
  int32_T c6_a;
  (void)c6_EMLOvCount_src_loc;
  c6_a = c6_b + c6_c;
  if (((c6_a ^ c6_b) & (c6_a ^ c6_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c6_ssid_src_loc, c6_offset_src_loc,
      c6_length_src_loc);
  }

  return c6_a;
}

static int32_T c6__s32_s64_(SFc6_ver_1InstanceStruct *chartInstance, int64_T
  c6_b, int32_T c6_EMLOvCount_src_loc, uint32_T c6_ssid_src_loc, int32_T
  c6_offset_src_loc, int32_T c6_length_src_loc)
{
  int32_T c6_a;
  (void)c6_EMLOvCount_src_loc;
  c6_a = (int32_T)c6_b;
  if ((int64_T)c6_a != c6_b) {
    sf_data_overflow_error(chartInstance->S, c6_ssid_src_loc, c6_offset_src_loc,
      c6_length_src_loc);
  }

  return c6_a;
}

static void init_dsm_address_info(SFc6_ver_1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_ver_1InstanceStruct *chartInstance)
{
  chartInstance->c6_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c6_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c6_b_Im_Depth = (real32_T (*)[2073600])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c6_x = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c6_bboxes = (real32_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_y = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    2);
  chartInstance->c6_cx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_cy = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c6_ver_1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2669052449U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3608065038U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3307385576U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2504169593U);
}

mxArray *sf_c6_ver_1_third_party_uses_info(void)
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

mxArray *sf_c6_ver_1_jit_fallback_info(void)
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

mxArray *sf_c6_ver_1_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c6_ver_1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA2YGFgYAPSHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/ggPYf0j6WbDoZ0LSLwDkJVdAwgUWPgPnfiXy3F"
    "85WNwvQ5T7GVHcz8hQwTBY3C9ClvsrqeZ+SPolXz/Efg8C7hdCcT+En1kcn5hcklmWGp9sFl+WW"
    "hRviDAPBACsCSEK"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_ver_1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sKAF5f4WH4vMz91sVFoTNTE";
}

static void sf_opaque_initialize_c6_ver_1(void *chartInstanceVar)
{
  initialize_params_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
  initialize_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_ver_1(void *chartInstanceVar)
{
  enable_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_ver_1(void *chartInstanceVar)
{
  disable_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_ver_1(void *chartInstanceVar)
{
  sf_gateway_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_ver_1(SimStruct* S)
{
  return get_sim_state_c6_ver_1((SFc6_ver_1InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_ver_1(SimStruct* S, const mxArray *st)
{
  set_sim_state_c6_ver_1((SFc6_ver_1InstanceStruct*)sf_get_chart_instance_ptr(S),
    st);
}

static void sf_opaque_cleanup_runtime_resources_c6_ver_1(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_ver_1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ver_1_optimization_info();
    }

    mdl_cleanup_runtime_resources_c6_ver_1((SFc6_ver_1InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c6_ver_1(void *chartInstanceVar)
{
  mdl_start_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c6_ver_1(void *chartInstanceVar)
{
  mdl_terminate_c6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_ver_1((SFc6_ver_1InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_ver_1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_ver_1((SFc6_ver_1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc6_ver_1((SFc6_ver_1InstanceStruct*)sf_get_chart_instance_ptr
      (S));
  }
}

const char* sf_c6_ver_1_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtV91u40QUtqPsikqwqlYrcbOIFTdwyUoLghvYNonZiGZb4bR7WU3HJ/FsxjNmftwEccklPAh",
    "PwTtwtZe8AYgn4IztpoljJ23KLgUx1cQdz3fOfOdnzow9vz/wsN3Dnj7wvLv4fAt7yyvanXLsL/",
    "Tifdv7sBz/hELCJkdEkUR7a5sgCXwDWnJrmBR9MZK1MCZGoEBQxKZSmSZtmiWWMzEJrKBOn34RM",
    "xqHsbQ82kdZEh0KPkNtqTVHqKfLFFATAEQmVtKO44CT8ZyxMuedGOhE22SdCRpMaFNHSw8sNyzl",
    "0JsC7QttCDLWl9xCQwx0zLTRTGepDi+AMkk5I6LW2pjoEFJ0sIHjNMLfQ2vQqCqMxkSZfYhJBvq",
    "ATXKdUkBVJ9M4ccYEMVIxwnsJ7zjBVW5HHPkMZAR8jUOQ274CMkklE6Y5/mGAlvYEOePQhTM7bt",
    "YWwrfWBf+EwTmoRr+NOjIDRcZwKBoXzR3Sm+bRmmfJKsywBE6I2qMYPw1RY/Zi5uiQYJxgiBJNM",
    "MiN7OuhYhm6t1GbTfouMzdtGZsUwdabYLm2XgbrojDXFlDRIZzrRthQpgeQAc+1dokh62GF1nqc",
    "1iwaSnSwS+/m3WAFw8CXsI4UEasNV1YB5HXnORaWZSS12sikg8nbPThYnV6F9YUBNSIU6qqAIkw",
    "D+ix3b7O2iGkXewQiK5PTqwMXGbIJ5emRFd1zqSbokzVF5NIEF9FGYKLHGEvcCccaN806mIvlJh",
    "wlNIbIFRjGYYDbBrE1PtGutO3hvsuYmXVBU8XSmqha3HVYhnouoWYpHIuJkOciUDIJyxpfuBcAs",
    "40owcR4H+uXmgW4el0o3Hn2sXd5nr19hfPsQq76/GhBj1+jx1t4VtfdaS3jW5V1W/jn+4Xc0wW5",
    "dyrrtCtyDreL/fv01Xs/fPXr8Oc/f/9x/MvOy03r+yvr+/n/Tu639vXO/3vl+OFFoZ1vnGwlXx3",
    "22QKvdo3+dxf075Zj/fVe8MnoyYtnT7LBd58/1ieBHD4f9go/b+B7p8L34v0jV/Exy/L8VLQflR",
    "cTNya2OK6d/s8W+N7d4I+d8n3R/vjyZvKPnlbjWOev1pK/Wh6dLuftP8f/g+34z24L/4dX4u8v8",
    "fe9qXdb+D/Yiv/sb+Nf5O/28lerF/cr9eJ+fi88Je60gVP66SleD08fr9bzbevjdeW8Nyz3b+H5",
    "v19ev31Xue+0tpRr3/B+9abkbmrfde99tw2/rv57FfzuLbbjpvfx141/5V3v3vx+Of5i/mnciRm",
    "Par6Symn85BnVzf4H8vQvTFO4Vg==",
    ""
  };

  static char newstr [1305] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c6_ver_1(SimStruct *S)
{
  const char* newstr = sf_c6_ver_1_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(500723836U));
  ssSetChecksum1(S,(1423067012U));
  ssSetChecksum2(S,(2364535465U));
  ssSetChecksum3(S,(1779023719U));
}

static void mdlRTW_c6_ver_1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c6_ver_1(SimStruct *S)
{
  SFc6_ver_1InstanceStruct *chartInstance;
  chartInstance = (SFc6_ver_1InstanceStruct *)utMalloc(sizeof
    (SFc6_ver_1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_ver_1InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_ver_1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c6_ver_1;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c6_ver_1;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c6_ver_1;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c6_ver_1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_ver_1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_ver_1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c6_ver_1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c6_ver_1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c6_ver_1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_ver_1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_ver_1;
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
    chartInstance->c6_JITStateAnimation,
    chartInstance->c6_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c6_ver_1(chartInstance);
}

void c6_ver_1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c6_ver_1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_ver_1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_ver_1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_ver_1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
