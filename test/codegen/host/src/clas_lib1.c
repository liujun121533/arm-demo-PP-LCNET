// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_divide(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_max(float* p0, float* p0_red, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_adaptive_avg_pool2d(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_adaptive_avg_pool2d_1(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_contrib_dense_pack_add(float* p0, float* T_add, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip(float* p0, float* compute, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_1(float* p0, float* compute, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_10(float* p0, float* T_multiply, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_11(float* p0, float* T_multiply, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_12(float* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_13(float* p0, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_14(float* p0, float* T_multiply, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_15(float* p0, float* T_multiply, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_16(float* p0, float* T_multiply, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_17(float* p0, float* T_multiply, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_18(float* p0, float* T_multiply, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_19(float* p0, float* T_multiply, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_20(float* p0, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_21(float* p0, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_22(float* p0, float* T_multiply, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_23(float* p0, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_24(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_25(float* p0, float* T_multiply, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_26(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_4(float* p0, float* T_multiply, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_5(float* p0, float* T_multiply, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_6(float* p0, float* T_multiply, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_7(float* p0, float* T_multiply, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_8(float* p0, float* T_multiply, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_9(float* p0, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_clip_divide_add_multiply_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_squeeze_expand_dims_multiply_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_squeeze_expand_dims_multiply_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_subtract_exp(float* p0, float* p1, float* T_exp, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_sum(float* p0, float* p0_red, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float expf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_divide(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 250; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      T_divide[cse_var_1] = (p0[cse_var_1] / p1[0]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_max(float* p0, float* p0_red, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  p0_red[0] = -3.402823e+38f;
  for (int32_t k1 = 0; k1 < 1000; ++k1) {
    float v_ = p0_red[0];
    float v__1 = p0[k1];
    p0_red[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_adaptive_avg_pool2d(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_51_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 192; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 7; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 7; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 49) + (rv0 * 7)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 192; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.040816e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_adaptive_avg_pool2d_1(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_63_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 384; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 7; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 7; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 49) + (rv0 * 7)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 384; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.040816e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_contrib_dense_pack_add(float* p0, float* T_add, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_74_var[9373184]));
  void* fused_constant_32_let = (&(global_const_workspace_74_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 125; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_75_var[9152]));
    void* compute_global_let = (&(global_workspace_75_var[9120]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((float*)compute_global_let)[x_c_init] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 1280; ++k_outer) {
      for (int32_t x_c = 0; x_c < 8; ++x_c) {
        ((float*)compute_global_let)[x_c] = (((float*)compute_global_let)[x_c] + (p0[k_outer] * ((float*)fused_constant_32_let)[(((ax1_outer_ax0_outer_fused * 10240) + (k_outer * 8)) + x_c)]));
      }
    }
    for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
      ((float*)compute_let)[x_inner_inner] = ((float*)compute_global_let)[x_inner_inner];
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      T_add[cse_var_1] = (((float*)compute_let)[ax1_inner_inner] + ((float*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip(float* p0, float* compute, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_54_var[9397824]));
  void* fused_constant_25_let = (&(global_const_workspace_54_var[9115136]));
  void* data_vec_let = (&(global_workspace_55_var[0]));
  for (int32_t ci = 0; ci < 48; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 48; ++i1_outer) {
    void* conv_let = (&(global_workspace_55_var[192]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_25_let)[(((i1_outer * 192) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float v_ = ((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_25_let)[cse_var_1];
      float v__1 = (v_) < (1.000000e+00f) ? (v_) : (1.000000e+00f);
      compute[cse_var_1] = ((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_1(float* p0, float* compute, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_66_var[9390816]));
  void* fused_constant_29_let = (&(global_const_workspace_66_var[7970816]));
  void* data_vec_let = (&(global_workspace_67_var[0]));
  for (int32_t ci = 0; ci < 96; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 96; ++i1_outer) {
    void* conv_let = (&(global_workspace_67_var[384]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_29_let)[(((i1_outer * 384) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float v_ = ((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_29_let)[cse_var_1];
      float v__1 = (v_) < (1.000000e+00f) ? (v_) : (1.000000e+00f);
      compute[cse_var_1] = ((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[9411520]));
  void* fused_constant_let = (&(global_const_workspace_2_var[9387552]));
  void* data_vec_let = (&(global_workspace_3_var[0]));
  for (int32_t h = 0; h < 56; ++h) {
    for (int32_t w = 0; w < 56; ++w) {
      for (int32_t ci = 0; ci < 3; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 5; ++vw) {
            int32_t cse_var_1 = (w * 4);
            ((float*)data_vec_let)[(((((h * 4200) + (w * 75)) + (ci * 25)) + (vh * 5)) + vw)] = (((1 <= ((h * 4) + vh)) && (1 <= (cse_var_1 + vw))) ? p0[((((((ci * 50176) + (h * 896)) + (vh * 224)) + cse_var_1) + vw) - 225)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 56; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 56; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[1743616]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_1 * 2))] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_2 * 2)) + 10)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_4 = ((vw_3 * 4) + vc_1);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_3 * 2)) + 1)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_5 = (((vw_4 * 4) + vc_1) + 8);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_4 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_6 = ((vw_5 * 4) + vc_2);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_5 * 2)) + 2)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_7 = (((vw_6 * 4) + vc_2) + 8);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_6 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_8 = ((vw_7 * 4) + vc_3);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_7 * 2)) + 5)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_9 = (((vw_8 * 4) + vc_3) + 8);
              ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_8 * 2)) + 15)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
              int32_t cse_var_10 = ((vw_9 * 4) + vc_4);
              ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_9 * 2)) + 6)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
            for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
              int32_t cse_var_11 = (((vw_10 * 4) + vc_4) + 8);
              ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_10 * 2)) + 16)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
              int32_t cse_var_12 = ((vw_11 * 4) + vc_5);
              ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_11 * 2)) + 7)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
            for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
              int32_t cse_var_13 = (((vw_12 * 4) + vc_5) + 8);
              ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_12 * 2)) + 17)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
              int32_t cse_var_14 = ((vw_13 * 4) + vc_6);
              ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_13 * 2)) + 10)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
            for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
              int32_t cse_var_15 = (((vw_14 * 4) + vc_6) + 8);
              ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_14 * 2)) + 20)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            for (int32_t vw_15 = 0; vw_15 < 2; ++vw_15) {
              int32_t cse_var_16 = ((vw_15 * 4) + vc_7);
              ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_15 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
            for (int32_t vw_16 = 0; vw_16 < 2; ++vw_16) {
              int32_t cse_var_17 = (((vw_16 * 4) + vc_7) + 8);
              ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_16 * 2)) + 21)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
          }
          for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
            for (int32_t vw_17 = 0; vw_17 < 2; ++vw_17) {
              int32_t cse_var_18 = ((vw_17 * 4) + vc_8);
              ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_17 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
            for (int32_t vw_18 = 0; vw_18 < 2; ++vw_18) {
              int32_t cse_var_19 = (((vw_18 * 4) + vc_8) + 8);
              ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[(((((ax2_outer * 4200) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_18 * 2)) + 22)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_21 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner);
            float v_ = ((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_let)[cse_var_20];
            float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
            T_multiply[(((((ax1_outer * 50176) + (ax1_inner * 12544)) + (ax2_outer * 224)) + (ax3_outer * 2)) + ax3_inner)] = ((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_let)[cse_var_20]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_23 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_22 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float v__2 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_let)[cse_var_23];
            float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 50176) + (ax1_inner_1 * 12544)) + (ax2_outer * 224)) + (ax3_outer * 2)) + ax3_inner_1) + 112)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_let)[cse_var_23]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_4_var[9411456]));
  void* fused_constant_1_let = (&(global_const_workspace_4_var[9407808]));
  void* fused_constant_1_global_global_let = (&(global_workspace_5_var[813760]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 4; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_1_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_1_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_5_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 4; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 28; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_5_var[802816]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 114; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 456) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 113)) && (1 <= ax3_c_1)) && (ax3_c_1 < 113)) ? p0[((((((c_outer_c * 50176) + (ax1_inner_c * 12544)) + (i_c_outer * 448)) + (ax2_c_1 * 112)) + ax3_c_1) - 113)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 56; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 50176) + (i_c_outer * 1792)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 50176) + (i_c_outer * 1792)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 50176) + (i_c_outer * 1792)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 896)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 50176) + (i_c_outer * 1792)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 1344)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 50176) + (i_c_outer * 1792)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 456) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 50176) + (i_c_outer * 1792)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 456) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 456)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 50176) + (i_c_outer * 1792)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 896);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 456) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 912)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 50176) + (i_c_outer * 1792)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 1344);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 456) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 1368)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 112; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 112; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 50176) + (ax2 * 448)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_1_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 12544) + (ax2 * 112)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_10(float* p0, float* T_multiply, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_22_var[9409920]));
  void* fused_constant_10_let = (&(global_const_workspace_22_var[9188864]));
  void* data_vec_let = (&(global_workspace_23_var[301056]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 4; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 10752) + (w * 2688)) + (ci * 28)) + (vh * 7)) + vw)] = p0[(((((ci * 784) + (h * 112)) + (vh * 28)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_23_var[602112]));
        for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 7; ++vw_init_1) {
          for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init_1) + 28)] = 0.000000e+00f;
          }
        }
        for (int32_t vw_init_2 = 0; vw_init_2 < 7; ++vw_init_2) {
          for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
            ((float*)conv_let)[(((vw_init_2 * 4) + vc_init_2) + 56)] = 0.000000e+00f;
          }
        }
        for (int32_t vw_init_3 = 0; vw_init_3 < 7; ++vw_init_3) {
          for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
            ((float*)conv_let)[(((vw_init_3 * 4) + vc_init_3) + 84)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 10752) + (ax3_outer * 2688)) + (ci_1 * 28)) + vw_1)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
          for (int32_t vw_2 = 0; vw_2 < 7; ++vw_2) {
            for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc_1) + 28);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 10752) + (ax3_outer * 2688)) + (ci_1 * 28)) + vw_2) + 7)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc_1)]));
            }
          }
          for (int32_t vw_3 = 0; vw_3 < 7; ++vw_3) {
            for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc_2) + 56);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 10752) + (ax3_outer * 2688)) + (ci_1 * 28)) + vw_3) + 14)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc_2)]));
            }
          }
          for (int32_t vw_4 = 0; vw_4 < 7; ++vw_4) {
            for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc_3) + 84);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 10752) + (ax3_outer * 2688)) + (ci_1 * 28)) + vw_4) + 21)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc_3)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_5 = ((ax1_outer * 4) + ax1_inner);
            float v_ = ((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_5];
            float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
            T_multiply[(((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner)] = ((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_5]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_7 = (((ax3_inner_1 * 4) + ax1_inner_1) + 28);
            float v__2 = ((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_8];
            float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner_1) + 28)] = ((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_8]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 7; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_10 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_9 = (((ax3_inner_2 * 4) + ax1_inner_2) + 56);
            float v__4 = ((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_10];
            float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 3136) + (ax1_inner_2 * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner_2) + 56)] = ((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_10]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 7; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_11 = (((ax3_inner_3 * 4) + ax1_inner_3) + 84);
            float v__6 = ((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_12];
            float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 3136) + (ax1_inner_3 * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner_3) + 84)] = ((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_12]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_11(float* p0, float* T_multiply, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_24_var[9409536]));
  void* fused_constant_11_let = (&(global_const_workspace_24_var[9380640]));
  void* fused_constant_11_global_global_let = (&(global_workspace_25_var[389776]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_11_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_11_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_25_var[301056]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_25_var[376320]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 29; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 29; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 116) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ax2_c_1) && (1 <= ax3_c_1)) ? p0[(((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 116) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_5 = (dj * 4);
              int32_t cse_var_4 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 232)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 464)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_9 = (dj * 4);
              int32_t cse_var_8 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 696)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_4 * 4)) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_4 * 8)) + cse_var_11) + c_inner_c_4) + 928)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_5 * 4)) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_5 * 8)) + cse_var_13) + c_inner_c_5) + 1160)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_13) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_6 * 4)) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_6 * 8)) + cse_var_15) + c_inner_c_6) + 1392)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_17 = (dj * 4);
              int32_t cse_var_16 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_7 * 4)) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_16] = (((float*)DepthwiseConv2d_global_let)[cse_var_16] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_7 * 8)) + cse_var_17) + c_inner_c_7) + 1624)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_17) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_8 * 4)) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_8 * 8)) + cse_var_19) + c_inner_c_8) + 1856)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_21 = (dj * 4);
              int32_t cse_var_20 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_9 * 4)) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_9 * 8)) + cse_var_21) + c_inner_c_9) + 2088)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_21) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_10 * 4)) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_10 * 8)) + cse_var_23) + c_inner_c_10) + 2320)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_11 * 4)) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_11 * 8)) + cse_var_25) + c_inner_c_11) + 2552)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_25) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_12 * 4)) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_12 * 8)) + cse_var_27) + c_inner_c_12) + 2784)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_29 = (dj * 4);
              int32_t cse_var_28 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_13 * 4)) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_28] = (((float*)DepthwiseConv2d_global_let)[cse_var_28] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_13 * 8)) + cse_var_29) + c_inner_c_13) + 3016)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_29) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_30 = (((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_11_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_11_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_12(float* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_26_var[9407040]));
  void* fused_constant_12_let = (&(global_const_workspace_26_var[9003008]));
  void* data_vec_let = (&(global_workspace_27_var[150528]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 2688) + (w * 1344)) + (ci * 14)) + (vh * 7)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_27_var[225792]));
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 40)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 48)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 56)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 64)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 72)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 80)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 88)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 96)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 104)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_15 = (vc + 96);
            int32_t cse_var_14 = (vc + 88);
            int32_t cse_var_13 = (vc + 80);
            int32_t cse_var_12 = (vc + 8);
            int32_t cse_var_11 = (vc + 72);
            int32_t cse_var_10 = (vc + 64);
            int32_t cse_var_9 = (vc + 56);
            int32_t cse_var_8 = (vc + 48);
            int32_t cse_var_7 = (vc + 40);
            int32_t cse_var_6 = (vc + 32);
            int32_t cse_var_5 = (vc + 24);
            int32_t cse_var_4 = (vc + 16);
            int32_t cse_var_3 = (vc + 104);
            int32_t cse_var_2 = (((ax1_outer * 768) + (ci_1 * 8)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 2688) + (ax3_outer * 1344)) + (ci_1 * 14));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_1 + 3)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_1 + 4)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_1 + 5)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_1 + 6)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(cse_var_1 + 7)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(cse_var_1 + 8)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(cse_var_1 + 9)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(cse_var_1 + 10)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(cse_var_1 + 11)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(cse_var_1 + 12)] * ((float*)fused_constant_12_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 13)] * ((float*)fused_constant_12_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_16 = ((ax1_outer * 8) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_16];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 1568) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_16]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 8; ++ax1_inner_1) {
          int32_t cse_var_18 = (ax1_inner_1 + 8);
          int32_t cse_var_17 = ((ax1_outer * 8) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_17];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_17]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 8; ++ax1_inner_2) {
          int32_t cse_var_20 = (ax1_inner_2 + 16);
          int32_t cse_var_19 = ((ax1_outer * 8) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_19];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_2 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_19]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 8; ++ax1_inner_3) {
          int32_t cse_var_22 = (ax1_inner_3 + 24);
          int32_t cse_var_21 = ((ax1_outer * 8) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_21];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_3 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_21]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 8; ++ax1_inner_4) {
          int32_t cse_var_24 = (ax1_inner_4 + 32);
          int32_t cse_var_23 = ((ax1_outer * 8) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_23];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_4 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_23]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 8; ++ax1_inner_5) {
          int32_t cse_var_26 = (ax1_inner_5 + 40);
          int32_t cse_var_25 = ((ax1_outer * 8) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_25];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_5 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_25]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 8; ++ax1_inner_6) {
          int32_t cse_var_28 = (ax1_inner_6 + 48);
          int32_t cse_var_27 = ((ax1_outer * 8) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_27];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_6 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_27]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 8; ++ax1_inner_7) {
          int32_t cse_var_30 = (ax1_inner_7 + 56);
          int32_t cse_var_29 = ((ax1_outer * 8) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_29];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_7 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 14)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_29]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 8; ++ax1_inner_8) {
          int32_t cse_var_32 = (ax1_inner_8 + 64);
          int32_t cse_var_31 = ((ax1_outer * 8) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_31];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_8 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 15)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_31]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 8; ++ax1_inner_9) {
          int32_t cse_var_34 = (ax1_inner_9 + 72);
          int32_t cse_var_33 = ((ax1_outer * 8) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_33];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_9 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 16)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_33]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 8; ++ax1_inner_10) {
          int32_t cse_var_36 = (ax1_inner_10 + 80);
          int32_t cse_var_35 = ((ax1_outer * 8) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_35];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_10 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 17)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_35]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 8; ++ax1_inner_11) {
          int32_t cse_var_38 = (ax1_inner_11 + 88);
          int32_t cse_var_37 = ((ax1_outer * 8) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_37];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_11 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 18)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_37]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 8; ++ax1_inner_12) {
          int32_t cse_var_40 = (ax1_inner_12 + 96);
          int32_t cse_var_39 = ((ax1_outer * 8) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_39];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_12 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 19)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_39]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 8; ++ax1_inner_13) {
          int32_t cse_var_42 = (ax1_inner_13 + 104);
          int32_t cse_var_41 = ((ax1_outer * 8) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_41];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_13 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 20)] = ((((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_41]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_13(float* p0, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_28_var[9406272]));
  void* fused_constant_13_let = (&(global_const_workspace_28_var[9321728]));
  void* fused_constant_13_global_global_let = (&(global_workspace_29_var[301056]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_13_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_13_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_29_var[150528]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_29_var[320256]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 18; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 16)) && (2 <= ax3_c_1)) && (ax3_c_1 < 16)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 30)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 72)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 144)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 216)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 288)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 360)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 432)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 504)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 576)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 648)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 720)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 792)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 864)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 936)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_58 = (((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_13_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_14(float* p0, float* T_multiply, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_30_var[9405504]));
  void* fused_constant_14_let = (&(global_const_workspace_30_var[8855552]));
  void* data_vec_let = (&(global_workspace_31_var[150528]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 5376) + (w * 2688)) + (ci * 14)) + (vh * 7)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[301056]));
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 40)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 48)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 56)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 64)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 72)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 80)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 88)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 96)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 104)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_15 = (vc + 96);
            int32_t cse_var_14 = (vc + 88);
            int32_t cse_var_13 = (vc + 80);
            int32_t cse_var_12 = (vc + 8);
            int32_t cse_var_11 = (vc + 72);
            int32_t cse_var_10 = (vc + 64);
            int32_t cse_var_9 = (vc + 56);
            int32_t cse_var_8 = (vc + 48);
            int32_t cse_var_7 = (vc + 40);
            int32_t cse_var_6 = (vc + 32);
            int32_t cse_var_5 = (vc + 24);
            int32_t cse_var_4 = (vc + 16);
            int32_t cse_var_3 = (vc + 104);
            int32_t cse_var_2 = (((ax1_outer * 1536) + (ci_1 * 8)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 5376) + (ax3_outer * 2688)) + (ci_1 * 14));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_1 + 3)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_1 + 4)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_1 + 5)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_1 + 6)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(cse_var_1 + 7)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(cse_var_1 + 8)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(cse_var_1 + 9)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(cse_var_1 + 10)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(cse_var_1 + 11)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(cse_var_1 + 12)] * ((float*)fused_constant_14_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 13)] * ((float*)fused_constant_14_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_16 = ((ax1_outer * 8) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_16];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 1568) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_16]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 8; ++ax1_inner_1) {
          int32_t cse_var_18 = (ax1_inner_1 + 8);
          int32_t cse_var_17 = ((ax1_outer * 8) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_17];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_17]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 8; ++ax1_inner_2) {
          int32_t cse_var_20 = (ax1_inner_2 + 16);
          int32_t cse_var_19 = ((ax1_outer * 8) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_19];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_2 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_19]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 8; ++ax1_inner_3) {
          int32_t cse_var_22 = (ax1_inner_3 + 24);
          int32_t cse_var_21 = ((ax1_outer * 8) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_21];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_3 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_21]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 8; ++ax1_inner_4) {
          int32_t cse_var_24 = (ax1_inner_4 + 32);
          int32_t cse_var_23 = ((ax1_outer * 8) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_23];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_4 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_23]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 8; ++ax1_inner_5) {
          int32_t cse_var_26 = (ax1_inner_5 + 40);
          int32_t cse_var_25 = ((ax1_outer * 8) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_25];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_5 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_25]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 8; ++ax1_inner_6) {
          int32_t cse_var_28 = (ax1_inner_6 + 48);
          int32_t cse_var_27 = ((ax1_outer * 8) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_27];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_6 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_27]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 8; ++ax1_inner_7) {
          int32_t cse_var_30 = (ax1_inner_7 + 56);
          int32_t cse_var_29 = ((ax1_outer * 8) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_29];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_7 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 14)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_29]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 8; ++ax1_inner_8) {
          int32_t cse_var_32 = (ax1_inner_8 + 64);
          int32_t cse_var_31 = ((ax1_outer * 8) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_31];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_8 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 15)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_31]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 8; ++ax1_inner_9) {
          int32_t cse_var_34 = (ax1_inner_9 + 72);
          int32_t cse_var_33 = ((ax1_outer * 8) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_33];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_9 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 16)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_33]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 8; ++ax1_inner_10) {
          int32_t cse_var_36 = (ax1_inner_10 + 80);
          int32_t cse_var_35 = ((ax1_outer * 8) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_35];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_10 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 17)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_35]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 8; ++ax1_inner_11) {
          int32_t cse_var_38 = (ax1_inner_11 + 88);
          int32_t cse_var_37 = ((ax1_outer * 8) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_37];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_11 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 18)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_37]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 8; ++ax1_inner_12) {
          int32_t cse_var_40 = (ax1_inner_12 + 96);
          int32_t cse_var_39 = ((ax1_outer * 8) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_39];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_12 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 19)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_39]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 8; ++ax1_inner_13) {
          int32_t cse_var_42 = (ax1_inner_13 + 104);
          int32_t cse_var_41 = ((ax1_outer * 8) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_41];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_13 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 20)] = ((((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_41]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_15(float* p0, float* T_multiply, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_32_var[9404736]));
  void* fused_constant_15_let = (&(global_const_workspace_32_var[9302528]));
  void* fused_constant_15_global_global_let = (&(global_workspace_33_var[301056]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_15_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_15_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_33_var[150528]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_33_var[320256]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 18; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 16)) && (2 <= ax3_c_1)) && (ax3_c_1 < 16)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 30)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 72)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 144)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 216)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 288)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 360)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 432)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 504)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 576)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 648)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 720)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 792)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 864)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 936)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_58 = (((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_15_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_16(float* p0, float* T_multiply, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_34_var[9403968]));
  void* fused_constant_16_let = (&(global_const_workspace_34_var[8708096]));
  void* data_vec_let = (&(global_workspace_35_var[150528]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 5376) + (w * 2688)) + (ci * 14)) + (vh * 7)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_35_var[301056]));
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 40)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 48)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 56)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 64)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 72)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 80)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 88)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 96)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 104)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_15 = (vc + 96);
            int32_t cse_var_14 = (vc + 88);
            int32_t cse_var_13 = (vc + 80);
            int32_t cse_var_12 = (vc + 8);
            int32_t cse_var_11 = (vc + 72);
            int32_t cse_var_10 = (vc + 64);
            int32_t cse_var_9 = (vc + 56);
            int32_t cse_var_8 = (vc + 48);
            int32_t cse_var_7 = (vc + 40);
            int32_t cse_var_6 = (vc + 32);
            int32_t cse_var_5 = (vc + 24);
            int32_t cse_var_4 = (vc + 16);
            int32_t cse_var_3 = (vc + 104);
            int32_t cse_var_2 = (((ax1_outer * 1536) + (ci_1 * 8)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 5376) + (ax3_outer * 2688)) + (ci_1 * 14));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_1 + 3)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_1 + 4)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_1 + 5)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_1 + 6)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(cse_var_1 + 7)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(cse_var_1 + 8)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(cse_var_1 + 9)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(cse_var_1 + 10)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(cse_var_1 + 11)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(cse_var_1 + 12)] * ((float*)fused_constant_16_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 13)] * ((float*)fused_constant_16_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_16 = ((ax1_outer * 8) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_16];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 1568) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_16]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 8; ++ax1_inner_1) {
          int32_t cse_var_18 = (ax1_inner_1 + 8);
          int32_t cse_var_17 = ((ax1_outer * 8) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_17];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_17]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 8; ++ax1_inner_2) {
          int32_t cse_var_20 = (ax1_inner_2 + 16);
          int32_t cse_var_19 = ((ax1_outer * 8) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_19];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_2 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_19]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 8; ++ax1_inner_3) {
          int32_t cse_var_22 = (ax1_inner_3 + 24);
          int32_t cse_var_21 = ((ax1_outer * 8) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_21];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_3 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_21]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 8; ++ax1_inner_4) {
          int32_t cse_var_24 = (ax1_inner_4 + 32);
          int32_t cse_var_23 = ((ax1_outer * 8) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_23];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_4 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_23]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 8; ++ax1_inner_5) {
          int32_t cse_var_26 = (ax1_inner_5 + 40);
          int32_t cse_var_25 = ((ax1_outer * 8) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_25];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_5 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_25]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 8; ++ax1_inner_6) {
          int32_t cse_var_28 = (ax1_inner_6 + 48);
          int32_t cse_var_27 = ((ax1_outer * 8) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_27];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_6 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_27]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 8; ++ax1_inner_7) {
          int32_t cse_var_30 = (ax1_inner_7 + 56);
          int32_t cse_var_29 = ((ax1_outer * 8) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_29];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_7 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 14)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_29]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 8; ++ax1_inner_8) {
          int32_t cse_var_32 = (ax1_inner_8 + 64);
          int32_t cse_var_31 = ((ax1_outer * 8) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_31];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_8 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 15)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_31]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 8; ++ax1_inner_9) {
          int32_t cse_var_34 = (ax1_inner_9 + 72);
          int32_t cse_var_33 = ((ax1_outer * 8) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_33];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_9 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 16)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_33]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 8; ++ax1_inner_10) {
          int32_t cse_var_36 = (ax1_inner_10 + 80);
          int32_t cse_var_35 = ((ax1_outer * 8) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_35];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_10 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 17)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_35]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 8; ++ax1_inner_11) {
          int32_t cse_var_38 = (ax1_inner_11 + 88);
          int32_t cse_var_37 = ((ax1_outer * 8) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_37];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_11 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 18)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_37]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 8; ++ax1_inner_12) {
          int32_t cse_var_40 = (ax1_inner_12 + 96);
          int32_t cse_var_39 = ((ax1_outer * 8) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_39];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_12 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 19)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_39]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 8; ++ax1_inner_13) {
          int32_t cse_var_42 = (ax1_inner_13 + 104);
          int32_t cse_var_41 = ((ax1_outer * 8) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_41];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_13 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 20)] = ((((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_41]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_17(float* p0, float* T_multiply, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_36_var[9403200]));
  void* fused_constant_17_let = (&(global_const_workspace_36_var[9283328]));
  void* fused_constant_17_global_global_let = (&(global_workspace_37_var[301056]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_17_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_17_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[150528]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_37_var[320256]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 18; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 16)) && (2 <= ax3_c_1)) && (ax3_c_1 < 16)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 30)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 72)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 144)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 216)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 288)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 360)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 432)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 504)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 576)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 648)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 720)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 792)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 864)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 936)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_58 = (((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_17_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_17_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_18(float* p0, float* T_multiply, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_38_var[9402432]));
  void* fused_constant_18_let = (&(global_const_workspace_38_var[8560640]));
  void* data_vec_let = (&(global_workspace_39_var[150528]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 5376) + (w * 2688)) + (ci * 14)) + (vh * 7)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_39_var[301056]));
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 40)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 48)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 56)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 64)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 72)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 80)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 88)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 96)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 104)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_15 = (vc + 96);
            int32_t cse_var_14 = (vc + 88);
            int32_t cse_var_13 = (vc + 80);
            int32_t cse_var_12 = (vc + 8);
            int32_t cse_var_11 = (vc + 72);
            int32_t cse_var_10 = (vc + 64);
            int32_t cse_var_9 = (vc + 56);
            int32_t cse_var_8 = (vc + 48);
            int32_t cse_var_7 = (vc + 40);
            int32_t cse_var_6 = (vc + 32);
            int32_t cse_var_5 = (vc + 24);
            int32_t cse_var_4 = (vc + 16);
            int32_t cse_var_3 = (vc + 104);
            int32_t cse_var_2 = (((ax1_outer * 1536) + (ci_1 * 8)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 5376) + (ax3_outer * 2688)) + (ci_1 * 14));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_1 + 3)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_1 + 4)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_1 + 5)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_1 + 6)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(cse_var_1 + 7)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(cse_var_1 + 8)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(cse_var_1 + 9)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(cse_var_1 + 10)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(cse_var_1 + 11)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(cse_var_1 + 12)] * ((float*)fused_constant_18_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 13)] * ((float*)fused_constant_18_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_16 = ((ax1_outer * 8) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_16];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 1568) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_16]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 8; ++ax1_inner_1) {
          int32_t cse_var_18 = (ax1_inner_1 + 8);
          int32_t cse_var_17 = ((ax1_outer * 8) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_17];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_17]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 8; ++ax1_inner_2) {
          int32_t cse_var_20 = (ax1_inner_2 + 16);
          int32_t cse_var_19 = ((ax1_outer * 8) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_19];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_2 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_19]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 8; ++ax1_inner_3) {
          int32_t cse_var_22 = (ax1_inner_3 + 24);
          int32_t cse_var_21 = ((ax1_outer * 8) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_21];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_3 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_21]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 8; ++ax1_inner_4) {
          int32_t cse_var_24 = (ax1_inner_4 + 32);
          int32_t cse_var_23 = ((ax1_outer * 8) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_23];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_4 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_23]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 8; ++ax1_inner_5) {
          int32_t cse_var_26 = (ax1_inner_5 + 40);
          int32_t cse_var_25 = ((ax1_outer * 8) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_25];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_5 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_25]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 8; ++ax1_inner_6) {
          int32_t cse_var_28 = (ax1_inner_6 + 48);
          int32_t cse_var_27 = ((ax1_outer * 8) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_27];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_6 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_27]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 8; ++ax1_inner_7) {
          int32_t cse_var_30 = (ax1_inner_7 + 56);
          int32_t cse_var_29 = ((ax1_outer * 8) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_29];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_7 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 14)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_29]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 8; ++ax1_inner_8) {
          int32_t cse_var_32 = (ax1_inner_8 + 64);
          int32_t cse_var_31 = ((ax1_outer * 8) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_31];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_8 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 15)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_31]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 8; ++ax1_inner_9) {
          int32_t cse_var_34 = (ax1_inner_9 + 72);
          int32_t cse_var_33 = ((ax1_outer * 8) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_33];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_9 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 16)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_33]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 8; ++ax1_inner_10) {
          int32_t cse_var_36 = (ax1_inner_10 + 80);
          int32_t cse_var_35 = ((ax1_outer * 8) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_35];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_10 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 17)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_35]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 8; ++ax1_inner_11) {
          int32_t cse_var_38 = (ax1_inner_11 + 88);
          int32_t cse_var_37 = ((ax1_outer * 8) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_37];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_11 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 18)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_37]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 8; ++ax1_inner_12) {
          int32_t cse_var_40 = (ax1_inner_12 + 96);
          int32_t cse_var_39 = ((ax1_outer * 8) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_39];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_12 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 19)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_39]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 8; ++ax1_inner_13) {
          int32_t cse_var_42 = (ax1_inner_13 + 104);
          int32_t cse_var_41 = ((ax1_outer * 8) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_41];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_13 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 20)] = ((((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_41]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_19(float* p0, float* T_multiply, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_40_var[9401664]));
  void* fused_constant_19_let = (&(global_const_workspace_40_var[9264128]));
  void* fused_constant_19_global_global_let = (&(global_workspace_41_var[301056]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_19_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_19_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_41_var[150528]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_41_var[320256]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 18; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 16)) && (2 <= ax3_c_1)) && (ax3_c_1 < 16)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 30)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 72)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 144)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 216)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 288)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 360)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 432)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 504)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 576)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 648)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 720)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 792)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 864)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 936)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_58 = (((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_19_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_19_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_6_var[9411360]));
  void* fused_constant_2_let = (&(global_const_workspace_6_var[9395424]));
  void* data_vec_let = (&(global_workspace_7_var[0]));
  for (int32_t h = 0; h < 112; ++h) {
    for (int32_t w = 0; w < 56; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((h * 1792) + (w * 32)) + (ci * 2)) + vw)] = p0[((((ci * 12544) + (h * 112)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 3; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 112; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 56; ++ax3_outer) {
        void* conv_let = (&(global_workspace_7_var[2007040]));
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
            ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            for (int32_t vc = 0; vc < 8; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 8) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1792) + (ax3_outer * 32)) + (ci_1 * 2)) + vw_1)] * ((float*)fused_constant_2_let)[(((ax1_outer * 128) + (ci_1 * 8)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
            float v_ = ((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_2_let)[cse_var_2];
            float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
            T_multiply[(((((ax1_outer * 100352) + (ax1_inner * 12544)) + (ax2_outer * 112)) + (ax3_outer * 2)) + ax3_inner)] = ((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_2_let)[cse_var_2]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_20(float* p0, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_42_var[9400896]));
  void* fused_constant_20_let = (&(global_const_workspace_42_var[8413184]));
  void* data_vec_let = (&(global_workspace_43_var[150528]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 5376) + (w * 2688)) + (ci * 14)) + (vh * 7)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_43_var[301056]));
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 40)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 48)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 56)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 64)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 72)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 80)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 88)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 96)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 104)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_15 = (vc + 96);
            int32_t cse_var_14 = (vc + 88);
            int32_t cse_var_13 = (vc + 80);
            int32_t cse_var_12 = (vc + 8);
            int32_t cse_var_11 = (vc + 72);
            int32_t cse_var_10 = (vc + 64);
            int32_t cse_var_9 = (vc + 56);
            int32_t cse_var_8 = (vc + 48);
            int32_t cse_var_7 = (vc + 40);
            int32_t cse_var_6 = (vc + 32);
            int32_t cse_var_5 = (vc + 24);
            int32_t cse_var_4 = (vc + 16);
            int32_t cse_var_3 = (vc + 104);
            int32_t cse_var_2 = (((ax1_outer * 1536) + (ci_1 * 8)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 5376) + (ax3_outer * 2688)) + (ci_1 * 14));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_1 + 3)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_1 + 4)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_1 + 5)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_1 + 6)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(cse_var_1 + 7)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(cse_var_1 + 8)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(cse_var_1 + 9)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(cse_var_1 + 10)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(cse_var_1 + 11)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(cse_var_1 + 12)] * ((float*)fused_constant_20_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 13)] * ((float*)fused_constant_20_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_16 = ((ax1_outer * 8) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_16];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 1568) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_16]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 8; ++ax1_inner_1) {
          int32_t cse_var_18 = (ax1_inner_1 + 8);
          int32_t cse_var_17 = ((ax1_outer * 8) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_17];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_17]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 8; ++ax1_inner_2) {
          int32_t cse_var_20 = (ax1_inner_2 + 16);
          int32_t cse_var_19 = ((ax1_outer * 8) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_19];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_2 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_19]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 8; ++ax1_inner_3) {
          int32_t cse_var_22 = (ax1_inner_3 + 24);
          int32_t cse_var_21 = ((ax1_outer * 8) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_21];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_3 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_21]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 8; ++ax1_inner_4) {
          int32_t cse_var_24 = (ax1_inner_4 + 32);
          int32_t cse_var_23 = ((ax1_outer * 8) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_23];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_4 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_23]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 8; ++ax1_inner_5) {
          int32_t cse_var_26 = (ax1_inner_5 + 40);
          int32_t cse_var_25 = ((ax1_outer * 8) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_25];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_5 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_25]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 8; ++ax1_inner_6) {
          int32_t cse_var_28 = (ax1_inner_6 + 48);
          int32_t cse_var_27 = ((ax1_outer * 8) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_27];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_6 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_27]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 8; ++ax1_inner_7) {
          int32_t cse_var_30 = (ax1_inner_7 + 56);
          int32_t cse_var_29 = ((ax1_outer * 8) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_29];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_7 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 14)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_29]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 8; ++ax1_inner_8) {
          int32_t cse_var_32 = (ax1_inner_8 + 64);
          int32_t cse_var_31 = ((ax1_outer * 8) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_31];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_8 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 15)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_31]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 8; ++ax1_inner_9) {
          int32_t cse_var_34 = (ax1_inner_9 + 72);
          int32_t cse_var_33 = ((ax1_outer * 8) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_33];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_9 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 16)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_33]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 8; ++ax1_inner_10) {
          int32_t cse_var_36 = (ax1_inner_10 + 80);
          int32_t cse_var_35 = ((ax1_outer * 8) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_35];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_10 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 17)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_35]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 8; ++ax1_inner_11) {
          int32_t cse_var_38 = (ax1_inner_11 + 88);
          int32_t cse_var_37 = ((ax1_outer * 8) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_37];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_11 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 18)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_37]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 8; ++ax1_inner_12) {
          int32_t cse_var_40 = (ax1_inner_12 + 96);
          int32_t cse_var_39 = ((ax1_outer * 8) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_39];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_12 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 19)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_39]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 8; ++ax1_inner_13) {
          int32_t cse_var_42 = (ax1_inner_13 + 104);
          int32_t cse_var_41 = ((ax1_outer * 8) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_41];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_13 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 20)] = ((((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_41]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_21(float* p0, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_44_var[9400128]));
  void* fused_constant_21_let = (&(global_const_workspace_44_var[9244928]));
  void* fused_constant_21_global_global_let = (&(global_workspace_45_var[301056]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_21_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_21_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_45_var[150528]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_45_var[320256]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 18; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 16)) && (2 <= ax3_c_1)) && (ax3_c_1 < 16)) ? p0[(((((c_outer_c * 784) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 30)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + cse_var_9) + cse_var_8) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 72)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + cse_var_13) + cse_var_12) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 144)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + cse_var_17) + cse_var_16) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 216)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + cse_var_21) + cse_var_20) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 288)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + cse_var_25) + cse_var_24) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 360)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + cse_var_29) + cse_var_28) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 432)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 784) + cse_var_33) + cse_var_32) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 504)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 784) + cse_var_37) + cse_var_36) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 576)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 784) + cse_var_41) + cse_var_40) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 648)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_45 = (j_c_outer * 8);
              int32_t cse_var_44 = (j_c_inner_10 * 4);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 784) + cse_var_45) + cse_var_44) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_45) + cse_var_44) + cse_var_43) + c_inner_c_10) + 720)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_49 = (j_c_outer * 8);
              int32_t cse_var_48 = (j_c_inner_11 * 4);
              int32_t cse_var_47 = (dj * 4);
              int32_t cse_var_46 = (((((c_outer_c * 784) + cse_var_49) + cse_var_48) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_46] = (((float*)DepthwiseConv2d_global_let)[cse_var_46] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_49) + cse_var_48) + cse_var_47) + c_inner_c_11) + 792)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_47) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_53 = (j_c_outer * 8);
              int32_t cse_var_52 = (j_c_inner_12 * 4);
              int32_t cse_var_51 = (dj * 4);
              int32_t cse_var_50 = (((((c_outer_c * 784) + cse_var_53) + cse_var_52) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_53) + cse_var_52) + cse_var_51) + c_inner_c_12) + 864)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_51) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_57 = (j_c_outer * 8);
              int32_t cse_var_56 = (j_c_inner_13 * 4);
              int32_t cse_var_55 = (dj * 4);
              int32_t cse_var_54 = (((((c_outer_c * 784) + cse_var_57) + cse_var_56) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_57) + cse_var_56) + cse_var_55) + c_inner_c_13) + 936)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_55) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_58 = (((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_21_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_58] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_22(float* p0, float* T_multiply, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_46_var[9399360]));
  void* fused_constant_22_let = (&(global_const_workspace_46_var[8265728]));
  void* data_vec_let = (&(global_workspace_47_var[150528]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 5376) + (w * 2688)) + (ci * 14)) + (vh * 7)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_47_var[301056]));
        for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 40)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 48)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 56)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 64)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 72)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 80)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 88)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 96)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 104)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 8; ++vc) {
            int32_t cse_var_15 = (vc + 96);
            int32_t cse_var_14 = (vc + 88);
            int32_t cse_var_13 = (vc + 80);
            int32_t cse_var_12 = (vc + 8);
            int32_t cse_var_11 = (vc + 72);
            int32_t cse_var_10 = (vc + 64);
            int32_t cse_var_9 = (vc + 56);
            int32_t cse_var_8 = (vc + 48);
            int32_t cse_var_7 = (vc + 40);
            int32_t cse_var_6 = (vc + 32);
            int32_t cse_var_5 = (vc + 24);
            int32_t cse_var_4 = (vc + 16);
            int32_t cse_var_3 = (vc + 104);
            int32_t cse_var_2 = (((ax1_outer * 1536) + (ci_1 * 8)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 5376) + (ax3_outer * 2688)) + (ci_1 * 14));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_1 + 3)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_1 + 4)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_1 + 5)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_1 + 6)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(cse_var_1 + 7)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(cse_var_1 + 8)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(cse_var_1 + 9)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(cse_var_1 + 10)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(cse_var_1 + 11)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(cse_var_1 + 12)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 13)] * ((float*)fused_constant_22_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_16 = ((ax1_outer * 8) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_16];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 1568) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_16]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 8; ++ax1_inner_1) {
          int32_t cse_var_18 = (ax1_inner_1 + 8);
          int32_t cse_var_17 = ((ax1_outer * 8) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_17];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_17]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 8; ++ax1_inner_2) {
          int32_t cse_var_20 = (ax1_inner_2 + 16);
          int32_t cse_var_19 = ((ax1_outer * 8) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_19];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_2 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_19]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 8; ++ax1_inner_3) {
          int32_t cse_var_22 = (ax1_inner_3 + 24);
          int32_t cse_var_21 = ((ax1_outer * 8) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_21];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_3 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_21]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 8; ++ax1_inner_4) {
          int32_t cse_var_24 = (ax1_inner_4 + 32);
          int32_t cse_var_23 = ((ax1_outer * 8) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_23];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_4 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_23]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 8; ++ax1_inner_5) {
          int32_t cse_var_26 = (ax1_inner_5 + 40);
          int32_t cse_var_25 = ((ax1_outer * 8) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_25];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_5 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_25]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 8; ++ax1_inner_6) {
          int32_t cse_var_28 = (ax1_inner_6 + 48);
          int32_t cse_var_27 = ((ax1_outer * 8) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_27];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_6 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_27]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 8; ++ax1_inner_7) {
          int32_t cse_var_30 = (ax1_inner_7 + 56);
          int32_t cse_var_29 = ((ax1_outer * 8) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_29];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_7 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 14)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_29]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 8; ++ax1_inner_8) {
          int32_t cse_var_32 = (ax1_inner_8 + 64);
          int32_t cse_var_31 = ((ax1_outer * 8) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_31];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_8 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 15)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_31]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 8; ++ax1_inner_9) {
          int32_t cse_var_34 = (ax1_inner_9 + 72);
          int32_t cse_var_33 = ((ax1_outer * 8) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_33];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_9 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 16)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_33]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 8; ++ax1_inner_10) {
          int32_t cse_var_36 = (ax1_inner_10 + 80);
          int32_t cse_var_35 = ((ax1_outer * 8) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_35];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_10 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 17)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_35]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 8; ++ax1_inner_11) {
          int32_t cse_var_38 = (ax1_inner_11 + 88);
          int32_t cse_var_37 = ((ax1_outer * 8) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_37];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_11 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 18)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_37]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 8; ++ax1_inner_12) {
          int32_t cse_var_40 = (ax1_inner_12 + 96);
          int32_t cse_var_39 = ((ax1_outer * 8) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_39];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_12 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 19)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_39]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 8; ++ax1_inner_13) {
          int32_t cse_var_42 = (ax1_inner_13 + 104);
          int32_t cse_var_41 = ((ax1_outer * 8) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_41];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 1568) + (ax1_inner_13 * 196)) + (ax2_outer * 28)) + (ax3_outer * 7)) + 20)] = ((((float*)conv_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_41]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_23(float* p0, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_48_var[9398592]));
  void* fused_constant_23_let = (&(global_const_workspace_48_var[9225728]));
  void* fused_constant_23_global_global_let = (&(global_workspace_49_var[188160]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 96; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_23_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_23_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_49_var[150528]));
  for (int32_t c_outer_c = 0; c_outer_c < 96; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_49_var[207360]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 17; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 17; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 34) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 16)) && (2 <= ax3_c_1)) && (ax3_c_1 < 16)) ? p0[(((((c_outer_c * 392) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 30)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_1) + 14)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_2) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_3) + 42)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_4) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 2; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_5) + 70)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 2; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_6) + 84)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 34) + (j_c_outer * 4)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_5 = (dj * 2);
            int32_t cse_var_4 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_1) + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[(((((di * 34) + (j_c_outer * 4)) + cse_var_5) + c_inner_c_1) + 68)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_5) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_7 = (dj * 2);
            int32_t cse_var_6 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_2) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 34) + (j_c_outer * 4)) + cse_var_7) + c_inner_c_2) + 136)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_7) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_3) + 42);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 34) + (j_c_outer * 4)) + cse_var_9) + c_inner_c_3) + 204)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_9) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_11 = (dj * 2);
            int32_t cse_var_10 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_4) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[(((((di * 34) + (j_c_outer * 4)) + cse_var_11) + c_inner_c_4) + 272)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_11) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 2; ++c_inner_c_5) {
            int32_t cse_var_13 = (dj * 2);
            int32_t cse_var_12 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_5) + 70);
            ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 34) + (j_c_outer * 4)) + cse_var_13) + c_inner_c_5) + 340)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_13) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 2; ++c_inner_c_6) {
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_6) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 34) + (j_c_outer * 4)) + cse_var_15) + c_inner_c_6) + 408)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_15) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_16 = (((((ax1 >> 1) * 98) + (ax2 * 14)) + (ax3 * 2)) + (ax1 & 1));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_16] + ((float*)fused_nn_conv2d_constant_23_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 49) + (ax2 * 7)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_16] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_24(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_58_var[9393888]));
  void* data_vec_let = (&(global_workspace_59_var[370176]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 192; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 1344) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 96; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_59_var[407808]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 4)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 12)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 20)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          int32_t cse_var_8 = (vc + 8);
          int32_t cse_var_7 = (vc + 4);
          int32_t cse_var_6 = (vc + 24);
          int32_t cse_var_5 = (vc + 20);
          int32_t cse_var_4 = (vc + 16);
          int32_t cse_var_3 = (vc + 12);
          int32_t cse_var_2 = ((ax2_outer * 1344) + (ci_1 * 7));
          int32_t cse_var_1 = (((ax1_outer * 768) + (ci_1 * 4)) + vc);
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_2] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_2 + 1)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_2 + 2)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_2 + 3)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_2 + 4)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_2 + 5)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_2 + 6)] * p1[cse_var_1]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
        float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_9];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1_outer * 196) + (ax1_inner * 49)) + (ax2_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_9]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_11 = (ax1_inner_1 + 4);
        int32_t cse_var_10 = ((ax1_outer * 4) + ax1_inner_1);
        float v__2 = ((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_10];
        float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_1 * 49)) + (ax2_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_10]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
        int32_t cse_var_13 = (ax1_inner_2 + 8);
        int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_2);
        float v__4 = ((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_12];
        float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_2 * 49)) + (ax2_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_12]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
        int32_t cse_var_15 = (ax1_inner_3 + 12);
        int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_3);
        float v__6 = ((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_14];
        float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_3 * 49)) + (ax2_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_14]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
        int32_t cse_var_17 = (ax1_inner_4 + 16);
        int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_4);
        float v__8 = ((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_16];
        float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_4 * 49)) + (ax2_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_16]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
        int32_t cse_var_19 = (ax1_inner_5 + 20);
        int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_5);
        float v__10 = ((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_18];
        float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_5 * 49)) + (ax2_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_18]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
        int32_t cse_var_21 = (ax1_inner_6 + 24);
        int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_6);
        float v__12 = ((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_20];
        float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_6 * 49)) + (ax2_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_20]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_25(float* p0, float* T_multiply, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_60_var[9392352]));
  void* fused_constant_27_let = (&(global_const_workspace_60_var[9076736]));
  void* fused_constant_27_global_global_let = (&(global_workspace_61_var[75264]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 96; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_27_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_27_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_61_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 96; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_61_var[113664]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 11; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 11; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 44) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 9)) && (2 <= ax3_c_1)) && (ax3_c_1 < 9)) ? p0[(((((c_outer_c * 196) + (ax1_inner_c * 49)) + (ax2_c_1 * 7)) + ax3_c_1) - 16)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init_1) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init_2) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init_3) + 84)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init_4) + 112)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init_5) + 140)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 196) + (j_c_outer * 4)) + c_inner_c_init_6) + 168)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_outer * 4);
            int32_t cse_var_3 = (dj * 4);
            int32_t cse_var_2 = (((c_outer_c * 196) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 44) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_outer * 4);
            int32_t cse_var_6 = (dj * 4);
            int32_t cse_var_5 = ((((c_outer_c * 196) + cse_var_7) + c_inner_c_1) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + cse_var_7) + cse_var_6) + c_inner_c_1) + 44)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
            int32_t cse_var_10 = (j_c_outer * 4);
            int32_t cse_var_9 = (dj * 4);
            int32_t cse_var_8 = ((((c_outer_c * 196) + cse_var_10) + c_inner_c_2) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + cse_var_10) + cse_var_9) + c_inner_c_2) + 88)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
            int32_t cse_var_13 = (j_c_outer * 4);
            int32_t cse_var_12 = (dj * 4);
            int32_t cse_var_11 = ((((c_outer_c * 196) + cse_var_13) + c_inner_c_3) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + cse_var_13) + cse_var_12) + c_inner_c_3) + 132)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
            int32_t cse_var_16 = (j_c_outer * 4);
            int32_t cse_var_15 = (dj * 4);
            int32_t cse_var_14 = ((((c_outer_c * 196) + cse_var_16) + c_inner_c_4) + 112);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + cse_var_16) + cse_var_15) + c_inner_c_4) + 176)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
            int32_t cse_var_19 = (j_c_outer * 4);
            int32_t cse_var_18 = (dj * 4);
            int32_t cse_var_17 = ((((c_outer_c * 196) + cse_var_19) + c_inner_c_5) + 140);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + cse_var_19) + cse_var_18) + c_inner_c_5) + 220)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_18) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
            int32_t cse_var_22 = (j_c_outer * 4);
            int32_t cse_var_21 = (dj * 4);
            int32_t cse_var_20 = ((((c_outer_c * 196) + cse_var_22) + c_inner_c_6) + 168);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + cse_var_22) + cse_var_21) + c_inner_c_6) + 264)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_21) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 384; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_23 = (((((ax1 >> 2) * 196) + (ax2 * 28)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_27_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 49) + (ax2 * 7)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_26(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_70_var[9389280]));
  void* data_vec_let = (&(global_workspace_71_var[665088]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t ci = 0; ci < 384; ++ci) {
      for (int32_t vw = 0; vw < 7; ++vw) {
        ((float*)data_vec_let)[(((h * 2688) + (ci * 7)) + vw)] = p0[(((ci * 49) + (h * 7)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 96; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      void* conv_let = (&(global_workspace_71_var[740352]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 4)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 8)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 12)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 20)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 24)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 384; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          int32_t cse_var_8 = (vc + 8);
          int32_t cse_var_7 = (vc + 4);
          int32_t cse_var_6 = (vc + 24);
          int32_t cse_var_5 = (vc + 20);
          int32_t cse_var_4 = (vc + 16);
          int32_t cse_var_3 = (vc + 12);
          int32_t cse_var_2 = ((ax2_outer * 2688) + (ci_1 * 7));
          int32_t cse_var_1 = (((ax1_outer * 1536) + (ci_1 * 4)) + vc);
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_2] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(cse_var_2 + 1)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(cse_var_2 + 2)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_2 + 3)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_2 + 4)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(cse_var_2 + 5)] * p1[cse_var_1]));
          ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(cse_var_2 + 6)] * p1[cse_var_1]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
        float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_9];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1_outer * 196) + (ax1_inner * 49)) + (ax2_outer * 7))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_9]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_11 = (ax1_inner_1 + 4);
        int32_t cse_var_10 = ((ax1_outer * 4) + ax1_inner_1);
        float v__2 = ((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_10];
        float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_1 * 49)) + (ax2_outer * 7)) + 1)] = ((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_10]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
        int32_t cse_var_13 = (ax1_inner_2 + 8);
        int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_2);
        float v__4 = ((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_12];
        float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_2 * 49)) + (ax2_outer * 7)) + 2)] = ((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_12]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
        int32_t cse_var_15 = (ax1_inner_3 + 12);
        int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_3);
        float v__6 = ((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_14];
        float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_3 * 49)) + (ax2_outer * 7)) + 3)] = ((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_14]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
        int32_t cse_var_17 = (ax1_inner_4 + 16);
        int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_4);
        float v__8 = ((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_16];
        float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_4 * 49)) + (ax2_outer * 7)) + 4)] = ((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_16]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
        int32_t cse_var_19 = (ax1_inner_5 + 20);
        int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_5);
        float v__10 = ((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_18];
        float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_5 * 49)) + (ax2_outer * 7)) + 5)] = ((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_18]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
      for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
        int32_t cse_var_21 = (ax1_inner_6 + 24);
        int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_6);
        float v__12 = ((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_20];
        float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
        T_multiply[((((ax1_outer * 196) + (ax1_inner_6 * 49)) + (ax2_outer * 7)) + 6)] = ((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_20]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_8_var[9411264]));
  void* fused_constant_3_let = (&(global_const_workspace_8_var[9396960]));
  void* fused_constant_3_global_global_let = (&(global_workspace_9_var[317328]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 6; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_3_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_3_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_9_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 6; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 14; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_9_var[301056]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 113; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 452) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ((i_c_outer * 8) + ax2_c_1)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 50176) + (ax1_inner_c * 12544)) + (i_c_outer * 896)) + (ax2_c_1 * 112)) + ax3_c_1) - 113)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 28; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 452) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 452) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 904)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 452) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 1808)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 452) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 2712)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 24; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 12544) + (ax2 * 224)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_3_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 3136) + (ax2 * 56)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_3_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_4(float* p0, float* T_multiply, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_10_var[9410880]));
  void* fused_constant_4_let = (&(global_const_workspace_10_var[9368576]));
  void* data_vec_let = (&(global_workspace_11_var[602112]));
  for (int32_t h = 0; h < 56; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 24; ++ci) {
        for (int32_t vw = 0; vw < 14; ++vw) {
          ((float*)data_vec_let)[((((h * 1344) + (w * 336)) + (ci * 14)) + vw)] = p0[((((ci * 3136) + (h * 56)) + (w * 14)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 56; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_11_var[903168]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t vc_init_8 = 0; vc_init_8 < 4; ++vc_init_8) {
          ((float*)conv_let)[(vc_init_8 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_9 = 0; vc_init_9 < 4; ++vc_init_9) {
          ((float*)conv_let)[(vc_init_9 + 36)] = 0.000000e+00f;
        }
        for (int32_t vc_init_10 = 0; vc_init_10 < 4; ++vc_init_10) {
          ((float*)conv_let)[(vc_init_10 + 40)] = 0.000000e+00f;
        }
        for (int32_t vc_init_11 = 0; vc_init_11 < 4; ++vc_init_11) {
          ((float*)conv_let)[(vc_init_11 + 44)] = 0.000000e+00f;
        }
        for (int32_t vc_init_12 = 0; vc_init_12 < 4; ++vc_init_12) {
          ((float*)conv_let)[(vc_init_12 + 48)] = 0.000000e+00f;
        }
        for (int32_t vc_init_13 = 0; vc_init_13 < 4; ++vc_init_13) {
          ((float*)conv_let)[(vc_init_13 + 52)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 24; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14))] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 1)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 2)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 3)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 4)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 5)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 6)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 7)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_7)]));
          }
          for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
            int32_t cse_var_8 = (vc_8 + 32);
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 8)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_8)]));
          }
          for (int32_t vc_9 = 0; vc_9 < 4; ++vc_9) {
            int32_t cse_var_9 = (vc_9 + 36);
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 9)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_9)]));
          }
          for (int32_t vc_10 = 0; vc_10 < 4; ++vc_10) {
            int32_t cse_var_10 = (vc_10 + 40);
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 10)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_10)]));
          }
          for (int32_t vc_11 = 0; vc_11 < 4; ++vc_11) {
            int32_t cse_var_11 = (vc_11 + 44);
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 11)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_11)]));
          }
          for (int32_t vc_12 = 0; vc_12 < 4; ++vc_12) {
            int32_t cse_var_12 = (vc_12 + 48);
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 12)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_12)]));
          }
          for (int32_t vc_13 = 0; vc_13 < 4; ++vc_13) {
            int32_t cse_var_13 = (vc_13 + 52);
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[((((ax2_outer * 1344) + (ax3_outer * 336)) + (ci_1 * 14)) + 13)] * ((float*)fused_constant_4_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc_13)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_14];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 12544) + (ax1_inner * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_14]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_16 = (ax1_inner_1 + 4);
          int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_16] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_15];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_1 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 1)] = ((((float*)conv_let)[cse_var_16] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_15]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          int32_t cse_var_18 = (ax1_inner_2 + 8);
          int32_t cse_var_17 = ((ax1_outer * 4) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_17];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_2 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 2)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_17]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          int32_t cse_var_20 = (ax1_inner_3 + 12);
          int32_t cse_var_19 = ((ax1_outer * 4) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_19];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_3 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 3)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_19]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          int32_t cse_var_22 = (ax1_inner_4 + 16);
          int32_t cse_var_21 = ((ax1_outer * 4) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_21];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_4 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 4)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_21]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          int32_t cse_var_24 = (ax1_inner_5 + 20);
          int32_t cse_var_23 = ((ax1_outer * 4) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_23];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_5 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 5)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_23]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          int32_t cse_var_26 = (ax1_inner_6 + 24);
          int32_t cse_var_25 = ((ax1_outer * 4) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_25];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_6 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 6)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_25]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          int32_t cse_var_28 = (ax1_inner_7 + 28);
          int32_t cse_var_27 = ((ax1_outer * 4) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_27];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_7 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 7)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_27]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 4; ++ax1_inner_8) {
          int32_t cse_var_30 = (ax1_inner_8 + 32);
          int32_t cse_var_29 = ((ax1_outer * 4) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_29];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_8 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 8)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_29]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 4; ++ax1_inner_9) {
          int32_t cse_var_32 = (ax1_inner_9 + 36);
          int32_t cse_var_31 = ((ax1_outer * 4) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_31];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_9 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 9)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_31]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 4; ++ax1_inner_10) {
          int32_t cse_var_34 = (ax1_inner_10 + 40);
          int32_t cse_var_33 = ((ax1_outer * 4) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_33];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_10 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 10)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_33]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 4; ++ax1_inner_11) {
          int32_t cse_var_36 = (ax1_inner_11 + 44);
          int32_t cse_var_35 = ((ax1_outer * 4) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_35];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_11 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 11)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_35]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 4; ++ax1_inner_12) {
          int32_t cse_var_38 = (ax1_inner_12 + 48);
          int32_t cse_var_37 = ((ax1_outer * 4) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_37];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_12 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 12)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_37]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 4; ++ax1_inner_13) {
          int32_t cse_var_40 = (ax1_inner_13 + 52);
          int32_t cse_var_39 = ((ax1_outer * 4) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_39];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_13 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 13)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_39]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_5(float* p0, float* T_multiply, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_12_var[9410688]));
  void* fused_constant_5_let = (&(global_const_workspace_12_var[9385824]));
  void* fused_constant_5_global_global_let = (&(global_workspace_13_var[1209792]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 12; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_5_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_5_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_13_var[602112]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 14; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_13_var[1204224]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 58; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 232) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 57)) && (1 <= ax3_c_1)) && (ax3_c_1 < 57)) ? p0[((((((c_outer_c * 12544) + (ax1_inner_c * 3136)) + (i_c_outer * 224)) + (ax2_c_1 * 56)) + ax3_c_1) - 57)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 28; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 448)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 12544) + (i_c_outer * 896)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 672)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 232) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 232) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 232)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 448);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 232) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 464)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 12544) + (i_c_outer * 896)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 672);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 232) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 696)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 12544) + (ax2 * 224)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_5_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 3136) + (ax2 * 56)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_5_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_6(float* p0, float* T_multiply, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_14_var[9410496]));
  void* fused_constant_6_let = (&(global_const_workspace_14_var[9359360]));
  void* data_vec_let = (&(global_workspace_15_var[602112]));
  for (int32_t h = 0; h < 56; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 48; ++ci) {
        for (int32_t vw = 0; vw < 14; ++vw) {
          ((float*)data_vec_let)[((((h * 2688) + (w * 672)) + (ci * 14)) + vw)] = p0[((((ci * 3136) + (h * 56)) + (w * 14)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 56; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_15_var[1204224]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t vc_init_8 = 0; vc_init_8 < 4; ++vc_init_8) {
          ((float*)conv_let)[(vc_init_8 + 32)] = 0.000000e+00f;
        }
        for (int32_t vc_init_9 = 0; vc_init_9 < 4; ++vc_init_9) {
          ((float*)conv_let)[(vc_init_9 + 36)] = 0.000000e+00f;
        }
        for (int32_t vc_init_10 = 0; vc_init_10 < 4; ++vc_init_10) {
          ((float*)conv_let)[(vc_init_10 + 40)] = 0.000000e+00f;
        }
        for (int32_t vc_init_11 = 0; vc_init_11 < 4; ++vc_init_11) {
          ((float*)conv_let)[(vc_init_11 + 44)] = 0.000000e+00f;
        }
        for (int32_t vc_init_12 = 0; vc_init_12 < 4; ++vc_init_12) {
          ((float*)conv_let)[(vc_init_12 + 48)] = 0.000000e+00f;
        }
        for (int32_t vc_init_13 = 0; vc_init_13 < 4; ++vc_init_13) {
          ((float*)conv_let)[(vc_init_13 + 52)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14))] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 1)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 2)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 3)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 4)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 5)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 6)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 7)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_7)]));
          }
          for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
            int32_t cse_var_8 = (vc_8 + 32);
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 8)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_8)]));
          }
          for (int32_t vc_9 = 0; vc_9 < 4; ++vc_9) {
            int32_t cse_var_9 = (vc_9 + 36);
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 9)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_9)]));
          }
          for (int32_t vc_10 = 0; vc_10 < 4; ++vc_10) {
            int32_t cse_var_10 = (vc_10 + 40);
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 10)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_10)]));
          }
          for (int32_t vc_11 = 0; vc_11 < 4; ++vc_11) {
            int32_t cse_var_11 = (vc_11 + 44);
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 11)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_11)]));
          }
          for (int32_t vc_12 = 0; vc_12 < 4; ++vc_12) {
            int32_t cse_var_12 = (vc_12 + 48);
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 12)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_12)]));
          }
          for (int32_t vc_13 = 0; vc_13 < 4; ++vc_13) {
            int32_t cse_var_13 = (vc_13 + 52);
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[((((ax2_outer * 2688) + (ax3_outer * 672)) + (ci_1 * 14)) + 13)] * ((float*)fused_constant_6_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_13)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner);
          float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_14];
          float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
          T_multiply[((((ax1_outer * 12544) + (ax1_inner * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14))] = ((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_14]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_16 = (ax1_inner_1 + 4);
          int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_1);
          float v__2 = ((float*)conv_let)[cse_var_16] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_15];
          float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_1 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 1)] = ((((float*)conv_let)[cse_var_16] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_15]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          int32_t cse_var_18 = (ax1_inner_2 + 8);
          int32_t cse_var_17 = ((ax1_outer * 4) + ax1_inner_2);
          float v__4 = ((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_17];
          float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_2 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 2)] = ((((float*)conv_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_17]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          int32_t cse_var_20 = (ax1_inner_3 + 12);
          int32_t cse_var_19 = ((ax1_outer * 4) + ax1_inner_3);
          float v__6 = ((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_19];
          float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_3 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 3)] = ((((float*)conv_let)[cse_var_20] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_19]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          int32_t cse_var_22 = (ax1_inner_4 + 16);
          int32_t cse_var_21 = ((ax1_outer * 4) + ax1_inner_4);
          float v__8 = ((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_21];
          float v__9 = (v__8) < (3.000000e+00f) ? (v__8) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_4 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 4)] = ((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_21]) * ((((v__9) > (-3.000000e+00f) ? (v__9) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          int32_t cse_var_24 = (ax1_inner_5 + 20);
          int32_t cse_var_23 = ((ax1_outer * 4) + ax1_inner_5);
          float v__10 = ((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_23];
          float v__11 = (v__10) < (3.000000e+00f) ? (v__10) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_5 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 5)] = ((((float*)conv_let)[cse_var_24] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_23]) * ((((v__11) > (-3.000000e+00f) ? (v__11) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          int32_t cse_var_26 = (ax1_inner_6 + 24);
          int32_t cse_var_25 = ((ax1_outer * 4) + ax1_inner_6);
          float v__12 = ((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_25];
          float v__13 = (v__12) < (3.000000e+00f) ? (v__12) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_6 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 6)] = ((((float*)conv_let)[cse_var_26] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_25]) * ((((v__13) > (-3.000000e+00f) ? (v__13) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          int32_t cse_var_28 = (ax1_inner_7 + 28);
          int32_t cse_var_27 = ((ax1_outer * 4) + ax1_inner_7);
          float v__14 = ((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_27];
          float v__15 = (v__14) < (3.000000e+00f) ? (v__14) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_7 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 7)] = ((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_27]) * ((((v__15) > (-3.000000e+00f) ? (v__15) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 4; ++ax1_inner_8) {
          int32_t cse_var_30 = (ax1_inner_8 + 32);
          int32_t cse_var_29 = ((ax1_outer * 4) + ax1_inner_8);
          float v__16 = ((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_29];
          float v__17 = (v__16) < (3.000000e+00f) ? (v__16) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_8 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 8)] = ((((float*)conv_let)[cse_var_30] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_29]) * ((((v__17) > (-3.000000e+00f) ? (v__17) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 4; ++ax1_inner_9) {
          int32_t cse_var_32 = (ax1_inner_9 + 36);
          int32_t cse_var_31 = ((ax1_outer * 4) + ax1_inner_9);
          float v__18 = ((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_31];
          float v__19 = (v__18) < (3.000000e+00f) ? (v__18) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_9 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 9)] = ((((float*)conv_let)[cse_var_32] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_31]) * ((((v__19) > (-3.000000e+00f) ? (v__19) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 4; ++ax1_inner_10) {
          int32_t cse_var_34 = (ax1_inner_10 + 40);
          int32_t cse_var_33 = ((ax1_outer * 4) + ax1_inner_10);
          float v__20 = ((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_33];
          float v__21 = (v__20) < (3.000000e+00f) ? (v__20) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_10 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 10)] = ((((float*)conv_let)[cse_var_34] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_33]) * ((((v__21) > (-3.000000e+00f) ? (v__21) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 4; ++ax1_inner_11) {
          int32_t cse_var_36 = (ax1_inner_11 + 44);
          int32_t cse_var_35 = ((ax1_outer * 4) + ax1_inner_11);
          float v__22 = ((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_35];
          float v__23 = (v__22) < (3.000000e+00f) ? (v__22) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_11 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 11)] = ((((float*)conv_let)[cse_var_36] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_35]) * ((((v__23) > (-3.000000e+00f) ? (v__23) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 4; ++ax1_inner_12) {
          int32_t cse_var_38 = (ax1_inner_12 + 48);
          int32_t cse_var_37 = ((ax1_outer * 4) + ax1_inner_12);
          float v__24 = ((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_37];
          float v__25 = (v__24) < (3.000000e+00f) ? (v__24) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_12 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 12)] = ((((float*)conv_let)[cse_var_38] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_37]) * ((((v__25) > (-3.000000e+00f) ? (v__25) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 4; ++ax1_inner_13) {
          int32_t cse_var_40 = (ax1_inner_13 + 52);
          int32_t cse_var_39 = ((ax1_outer * 4) + ax1_inner_13);
          float v__26 = ((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_39];
          float v__27 = (v__26) < (3.000000e+00f) ? (v__26) : (3.000000e+00f);
          T_multiply[(((((ax1_outer * 12544) + (ax1_inner_13 * 3136)) + (ax2_outer * 56)) + (ax3_outer * 14)) + 13)] = ((((float*)conv_let)[cse_var_40] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_39]) * ((((v__27) > (-3.000000e+00f) ? (v__27) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_7(float* p0, float* T_multiply, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_16_var[9410304]));
  void* fused_constant_7_let = (&(global_const_workspace_16_var[9384096]));
  void* fused_constant_7_global_global_let = (&(global_workspace_17_var[760848]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 12; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_7_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_7_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_17_var[602112]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 7; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_17_var[752640]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 57; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 228) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ((i_c_outer * 8) + ax2_c_1)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 12544) + (ax1_inner_c * 3136)) + (i_c_outer * 448)) + (ax2_c_1 * 56)) + ax3_c_1) - 57)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 228) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 456)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 912)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 228) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 1368)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_7_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 784) + (ax2 * 28)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_7_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_8(float* p0, float* T_multiply, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_18_var[9408768]));
  void* fused_constant_8_let = (&(global_const_workspace_18_var[9340928]));
  void* data_vec_let = (&(global_workspace_19_var[301056]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 48; ++ci) {
        for (int32_t vh = 0; vh < 4; ++vh) {
          for (int32_t vw = 0; vw < 7; ++vw) {
            ((float*)data_vec_let)[(((((h * 5376) + (w * 1344)) + (ci * 28)) + (vh * 7)) + vw)] = p0[(((((ci * 784) + (h * 112)) + (vh * 28)) + (w * 7)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_19_var[451584]));
        for (int32_t vw_init = 0; vw_init < 7; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 7; ++vw_init_1) {
          for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init_1) + 28)] = 0.000000e+00f;
          }
        }
        for (int32_t vw_init_2 = 0; vw_init_2 < 7; ++vw_init_2) {
          for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
            ((float*)conv_let)[(((vw_init_2 * 4) + vc_init_2) + 56)] = 0.000000e+00f;
          }
        }
        for (int32_t vw_init_3 = 0; vw_init_3 < 7; ++vw_init_3) {
          for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
            ((float*)conv_let)[(((vw_init_3 * 4) + vc_init_3) + 84)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 7; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 5376) + (ax3_outer * 1344)) + (ci_1 * 28)) + vw_1)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
          }
          for (int32_t vw_2 = 0; vw_2 < 7; ++vw_2) {
            for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc_1) + 28);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 5376) + (ax3_outer * 1344)) + (ci_1 * 28)) + vw_2) + 7)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_1)]));
            }
          }
          for (int32_t vw_3 = 0; vw_3 < 7; ++vw_3) {
            for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc_2) + 56);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 5376) + (ax3_outer * 1344)) + (ci_1 * 28)) + vw_3) + 14)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_2)]));
            }
          }
          for (int32_t vw_4 = 0; vw_4 < 7; ++vw_4) {
            for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc_3) + 84);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 5376) + (ax3_outer * 1344)) + (ci_1 * 28)) + vw_4) + 21)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc_3)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_5 = ((ax1_outer * 4) + ax1_inner);
            float v_ = ((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_5];
            float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
            T_multiply[(((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner)] = ((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_5]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_7 = (((ax3_inner_1 * 4) + ax1_inner_1) + 28);
            float v__2 = ((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_8];
            float v__3 = (v__2) < (3.000000e+00f) ? (v__2) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner_1) + 28)] = ((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_8]) * ((((v__3) > (-3.000000e+00f) ? (v__3) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 7; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_10 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_9 = (((ax3_inner_2 * 4) + ax1_inner_2) + 56);
            float v__4 = ((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_10];
            float v__5 = (v__4) < (3.000000e+00f) ? (v__4) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 3136) + (ax1_inner_2 * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner_2) + 56)] = ((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_10]) * ((((v__5) > (-3.000000e+00f) ? (v__5) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 7; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_11 = (((ax3_inner_3 * 4) + ax1_inner_3) + 84);
            float v__6 = ((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_12];
            float v__7 = (v__6) < (3.000000e+00f) ? (v__6) : (3.000000e+00f);
            T_multiply[((((((ax1_outer * 3136) + (ax1_inner_3 * 784)) + (ax2_outer * 112)) + (ax3_outer * 7)) + ax3_inner_3) + 84)] = ((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_12]) * ((((v__7) > (-3.000000e+00f) ? (v__7) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_9(float* p0, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_20_var[9408384]));
  void* fused_constant_9_let = (&(global_const_workspace_20_var[9377184]));
  void* fused_constant_9_global_global_let = (&(global_workspace_21_var[602112]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_9_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_9_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_21_var[301056]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 7; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_21_var[605568]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 30; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 120) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= ax3_c_1)) && (ax3_c_1 < 29)) ? p0[((((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (i_c_outer * 112)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 14; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 112)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 224)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 3136) + (i_c_outer * 448)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 336)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 3136) + (i_c_outer * 448)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 120) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 3136) + (i_c_outer * 448)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 112);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 120)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 3136) + (i_c_outer * 448)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 224);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 240)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 3136) + (i_c_outer * 448)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 336);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 120) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 360)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 3136) + (ax2 * 112)) + (ax3 * 4)) + (ax1 & 3));
        float v_ = ((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_9_let)[ax1];
        float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
        T_multiply[(((ax1 * 784) + (ax2 * 28)) + ax3)] = ((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_9_let)[ax1]) * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_52_var[9411072]));
  void* fused_constant_24_let = (&(global_const_workspace_52_var[9152000]));
  void* data_vec_let = (&(global_workspace_53_var[0]));
  for (int32_t ci = 0; ci < 192; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    void* conv_let = (&(global_workspace_53_var[960]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_24_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_24_let)[cse_var_1];
      T_relu[cse_var_1] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_64_var[9409152]));
  void* fused_constant_28_let = (&(global_const_workspace_64_var[8118272]));
  void* data_vec_let = (&(global_workspace_65_var[0]));
  for (int32_t ci = 0; ci < 384; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    void* conv_let = (&(global_workspace_65_var[1920]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 384; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_28_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      float v_ = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_28_let)[cse_var_1];
      T_relu[cse_var_1] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_nn_conv2d_clip_divide_add_multiply_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_constant_31_let = (&(global_const_workspace_72_var[5120000]));
  void* data_vec_let = (&(global_workspace_73_var[5120]));
  for (int32_t ci = 0; ci < 384; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 160; ++ax1_outer) {
    void* conv_let = (&(global_workspace_73_var[6656]));
    for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 384; ++ci_1) {
      for (int32_t vc = 0; vc < 8; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_31_let)[(((ax1_outer * 3072) + (ci_1 * 8)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
      float v_ = ((float*)conv_let)[ax1_inner];
      float v__1 = (v_) < (3.000000e+00f) ? (v_) : (3.000000e+00f);
      T_multiply[((ax1_outer * 8) + ax1_inner)] = ((((float*)conv_let)[ax1_inner] * ((((v__1) > (-3.000000e+00f) ? (v__1) : (-3.000000e+00f)) * 1.666667e-01f) + 5.000000e-01f)) * 8.000000e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_squeeze_expand_dims_multiply_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_constant_26_let = (&(global_const_workspace_56_var[7675904]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 18432; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 192);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_fused / 192) * 768) + (ax4_inner * 192)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_squeeze_expand_dims_multiply_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_constant_30_let = (&(global_const_workspace_68_var[7086080]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36864; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 384);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_fused / 384) * 1536) + (ax4_inner * 384)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_subtract_exp(float* p0, float* p1, float* T_exp, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 250; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      T_exp[cse_var_1] = expf((p0[cse_var_1] - p1[0]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas_fused_sum(float* p0, float* p0_red, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  p0_red[0] = 0.000000e+00f;
  for (int32_t k1 = 0; k1 < 1000; ++k1) {
    p0_red[0] = (p0_red[0] + p0[k1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_clas___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[294912]));
  void* sid_25_let = (&(global_workspace_1_var[768]));
  void* sid_27_let = (&(global_workspace_1_var[332544]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[940800]));
  void* sid_2_let = (&(global_workspace_1_var[802816]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[301056]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[802816]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_29_let = (&(global_workspace_1_var[294912]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_26_let = (&(global_workspace_1_var[768]));
  void* sid_14_let = (&(global_workspace_1_var[0]));
  void* sid_30_let = (&(global_workspace_1_var[589824]));
  void* sid_31_let = (&(global_workspace_1_var[1536]));
  void* sid_32_let = (&(global_workspace_1_var[1536]));
  void* sid_33_let = (&(global_workspace_1_var[665088]));
  void* sid_34_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[589824]));
  void* sid_36_let = (&(global_workspace_1_var[1536]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_38_let = (&(global_workspace_1_var[5120]));
  void* sid_39_let = (&(global_workspace_1_var[4000]));
  void* sid_40_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[4000]));
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_1(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_2(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_3(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_4(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_5(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_6(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_7(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_8(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_9(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_10(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_11(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_12(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_13(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_14(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_15(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_16(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_17(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_18(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_19(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_20(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_21(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_22(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_23(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_adaptive_avg_pool2d(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_nn_relu(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_squeeze_expand_dims_multiply_layout_transform(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_24(sid_24_let, sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_25(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_adaptive_avg_pool2d_1(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_nn_relu_1(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_1(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_squeeze_expand_dims_multiply_layout_transform_1(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_add_clip_divide_add_multiply_26(sid_30_let, sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_adaptive_avg_pool2d_1(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_conv2d_clip_divide_add_multiply_multiply(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_nn_contrib_dense_pack_add(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_max(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_subtract_exp(sid_38_let, sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_sum(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_clas_fused_divide(sid_40_let, sid_41_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

