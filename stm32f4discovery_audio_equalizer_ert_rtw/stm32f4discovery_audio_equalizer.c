/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stm32f4discovery_audio_equalizer.c
 *
 * Code generated for Simulink model 'stm32f4discovery_audio_equalizer'.
 *
 * Model version                  : 5.3
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Jun 11 16:42:35 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stm32f4discovery_audio_equalizer.h"
#include "stm32f4discovery_audio_equalizer_private.h"

/* Block signals (default storage) */
B_stm32f4discovery_audio_equa_T stm32f4discovery_audio_equali_B;

/* Block states (default storage) */
DW_stm32f4discovery_audio_equ_T stm32f4discovery_audio_equal_DW;

/* Real-time model */
static RT_MODEL_stm32f4discovery_aud_T stm32f4discovery_audio_equal_M_;
RT_MODEL_stm32f4discovery_aud_T *const stm32f4discovery_audio_equal_M =
  &stm32f4discovery_audio_equal_M_;

/* Forward declaration for local functions */
static void stm3_BiquadFilter1_coefficients(const real32_T u2[9], const real32_T
  u3[6], real32_T y[15]);

/* System initialize for atomic system: '<S2>/Band 1' */
void stm32f4discovery_aud_Band1_Init(void)
{
  int32_T i;

  /* InitializeConditions for DiscreteFilter: '<S4>/Discrete Filter' */
  for (i = 0; i < 5; i++) {
    stm32f4discovery_audio_equal_DW.DiscreteFilter_states_l[i] =
      stm32f4discovery_audio_equali_P.DiscreteFilter_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S4>/Discrete Filter' */
}

/* Output and update for atomic system: '<S2>/Band 1' */
void stm32f4discovery_audio_eq_Band1(void)
{
  int32_T k;
  real32_T DiscreteFilter_tmp_n[5];
  real32_T DiscreteFilter_tmp_n_p;

  /* DiscreteFilter: '<S4>/Discrete Filter' incorporates:
   *  Constant: '<S1>/Coeffs for Band1'
   */
  for (k = 0; k < 5; k++) {
    DiscreteFilter_tmp_n_p = (CoeffsMatrix1[k] -
      stm32f4discovery_audio_equali_P.DiscreteFilter_DenCoef[1] *
      stm32f4discovery_audio_equal_DW.DiscreteFilter_states_l[k]) /
      stm32f4discovery_audio_equali_P.DiscreteFilter_DenCoef[0];
    stm32f4discovery_audio_equali_B.DiscreteFilter_n[k] =
      stm32f4discovery_audio_equali_P.DiscreteFilter_NumCoef *
      DiscreteFilter_tmp_n_p;
    DiscreteFilter_tmp_n[k] = DiscreteFilter_tmp_n_p;
  }

  /* End of DiscreteFilter: '<S4>/Discrete Filter' */

  /* Update for DiscreteFilter: '<S4>/Discrete Filter' */
  for (k = 0; k < 5; k++) {
    stm32f4discovery_audio_equal_DW.DiscreteFilter_states_l[k] =
      DiscreteFilter_tmp_n[k];
  }

  /* End of Update for DiscreteFilter: '<S4>/Discrete Filter' */
}

/* System initialize for atomic system: '<S2>/Band 2' */
void stm32f4discovery_aud_Band2_Init(void)
{
  int32_T i;

  /* InitializeConditions for DiscreteFilter: '<S5>/Discrete Filter' */
  for (i = 0; i < 5; i++) {
    stm32f4discovery_audio_equal_DW.DiscreteFilter_states_p[i] =
      stm32f4discovery_audio_equali_P.DiscreteFilter_InitialStates_j;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S5>/Discrete Filter' */
}

/* Output and update for atomic system: '<S2>/Band 2' */
void stm32f4discovery_audio_eq_Band2(void)
{
  int32_T k;
  real32_T DiscreteFilter_tmp_e[5];
  real32_T DiscreteFilter_tmp_e_p;

  /* DiscreteFilter: '<S5>/Discrete Filter' incorporates:
   *  Constant: '<S1>/Coeffs for Band2'
   */
  for (k = 0; k < 5; k++) {
    DiscreteFilter_tmp_e_p = (CoeffsMatrix2[k] -
      stm32f4discovery_audio_equali_P.DiscreteFilter_DenCoef_k[1] *
      stm32f4discovery_audio_equal_DW.DiscreteFilter_states_p[k]) /
      stm32f4discovery_audio_equali_P.DiscreteFilter_DenCoef_k[0];
    stm32f4discovery_audio_equali_B.DiscreteFilter_g[k] =
      stm32f4discovery_audio_equali_P.DiscreteFilter_NumCoef_k *
      DiscreteFilter_tmp_e_p;
    DiscreteFilter_tmp_e[k] = DiscreteFilter_tmp_e_p;
  }

  /* End of DiscreteFilter: '<S5>/Discrete Filter' */

  /* Update for DiscreteFilter: '<S5>/Discrete Filter' */
  for (k = 0; k < 5; k++) {
    stm32f4discovery_audio_equal_DW.DiscreteFilter_states_p[k] =
      DiscreteFilter_tmp_e[k];
  }

  /* End of Update for DiscreteFilter: '<S5>/Discrete Filter' */
}

/* System initialize for atomic system: '<S2>/Band 3' */
void stm32f4discovery_aud_Band3_Init(void)
{
  int32_T i;

  /* InitializeConditions for DiscreteFilter: '<S6>/Discrete Filter' */
  for (i = 0; i < 5; i++) {
    stm32f4discovery_audio_equal_DW.DiscreteFilter_states[i] =
      stm32f4discovery_audio_equali_P.DiscreteFilter_InitialStates_i;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S6>/Discrete Filter' */
}

/* Output and update for atomic system: '<S2>/Band 3' */
void stm32f4discovery_audio_eq_Band3(void)
{
  int32_T k;
  real32_T DiscreteFilter_tmp[5];
  real32_T DiscreteFilter_tmp_p;

  /* DiscreteFilter: '<S6>/Discrete Filter' incorporates:
   *  Constant: '<S1>/Coeffs for Band3'
   */
  for (k = 0; k < 5; k++) {
    DiscreteFilter_tmp_p = (CoeffsMatrix3[k] -
      stm32f4discovery_audio_equali_P.DiscreteFilter_DenCoef_m[1] *
      stm32f4discovery_audio_equal_DW.DiscreteFilter_states[k]) /
      stm32f4discovery_audio_equali_P.DiscreteFilter_DenCoef_m[0];
    stm32f4discovery_audio_equali_B.DiscreteFilter[k] =
      stm32f4discovery_audio_equali_P.DiscreteFilter_NumCoef_b *
      DiscreteFilter_tmp_p;
    DiscreteFilter_tmp[k] = DiscreteFilter_tmp_p;
  }

  /* End of DiscreteFilter: '<S6>/Discrete Filter' */

  /* Update for DiscreteFilter: '<S6>/Discrete Filter' */
  for (k = 0; k < 5; k++) {
    stm32f4discovery_audio_equal_DW.DiscreteFilter_states[k] =
      DiscreteFilter_tmp[k];
  }

  /* End of Update for DiscreteFilter: '<S6>/Discrete Filter' */
}

/* System initialize for atomic system: '<S1>/Bands' */
void stm32f4discovery_aud_Bands_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S2>/Band 1' */
  stm32f4discovery_aud_Band1_Init();

  /* End of SystemInitialize for SubSystem: '<S2>/Band 1' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/Band 2' */
  stm32f4discovery_aud_Band2_Init();

  /* End of SystemInitialize for SubSystem: '<S2>/Band 2' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/Band 3' */
  stm32f4discovery_aud_Band3_Init();

  /* End of SystemInitialize for SubSystem: '<S2>/Band 3' */
}

/* Output and update for atomic system: '<S1>/Bands' */
void stm32f4discovery_audio_eq_Bands(void)
{
  /* Outputs for Atomic SubSystem: '<S2>/Band 1' */
  stm32f4discovery_audio_eq_Band1();

  /* End of Outputs for SubSystem: '<S2>/Band 1' */

  /* Outputs for Atomic SubSystem: '<S2>/Band 2' */
  stm32f4discovery_audio_eq_Band2();

  /* End of Outputs for SubSystem: '<S2>/Band 2' */

  /* Outputs for Atomic SubSystem: '<S2>/Band 3' */
  stm32f4discovery_audio_eq_Band3();

  /* End of Outputs for SubSystem: '<S2>/Band 3' */

  /* SignalConversion generated from: '<S2>/Matrix Concatenate1' */
  stm32f4discovery_audio_equali_B.MatrixConcatenate1[0] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_n[3];
  stm32f4discovery_audio_equali_B.MatrixConcatenate1[1] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_n[4];

  /* SignalConversion generated from: '<S2>/Matrix Concatenate1' */
  stm32f4discovery_audio_equali_B.MatrixConcatenate1[2] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_g[3];
  stm32f4discovery_audio_equali_B.MatrixConcatenate1[3] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_g[4];

  /* SignalConversion generated from: '<S2>/Matrix Concatenate1' */
  stm32f4discovery_audio_equali_B.MatrixConcatenate1[4] =
    stm32f4discovery_audio_equali_B.DiscreteFilter[3];
  stm32f4discovery_audio_equali_B.MatrixConcatenate1[5] =
    stm32f4discovery_audio_equali_B.DiscreteFilter[4];

  /* SignalConversion generated from: '<S2>/Matrix Concatenate' */
  stm32f4discovery_audio_equali_B.MatrixConcatenate[0] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_n[0];
  stm32f4discovery_audio_equali_B.MatrixConcatenate[1] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_n[1];
  stm32f4discovery_audio_equali_B.MatrixConcatenate[2] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_n[2];

  /* SignalConversion generated from: '<S2>/Matrix Concatenate' */
  stm32f4discovery_audio_equali_B.MatrixConcatenate[3] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_g[0];
  stm32f4discovery_audio_equali_B.MatrixConcatenate[4] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_g[1];
  stm32f4discovery_audio_equali_B.MatrixConcatenate[5] =
    stm32f4discovery_audio_equali_B.DiscreteFilter_g[2];

  /* SignalConversion generated from: '<S2>/Matrix Concatenate' */
  stm32f4discovery_audio_equali_B.MatrixConcatenate[6] =
    stm32f4discovery_audio_equali_B.DiscreteFilter[0];
  stm32f4discovery_audio_equali_B.MatrixConcatenate[7] =
    stm32f4discovery_audio_equali_B.DiscreteFilter[1];
  stm32f4discovery_audio_equali_B.MatrixConcatenate[8] =
    stm32f4discovery_audio_equali_B.DiscreteFilter[2];
}

static void stm3_BiquadFilter1_coefficients(const real32_T u2[9], const real32_T
  u3[6], real32_T y[15])
{
  int32_T denumValues_tmp;
  int32_T i;
  real32_T denumValues[6];

  /* Update for S-Function (sdspbiquad): '<S3>/Biquad Filter 1' */
  for (i = 0; i < 6; i++) {
    denumValues[i] = u3[i];
  }

  for (i = 0; i < 3; i++) {
    denumValues_tmp = i << 1;
    denumValues[denumValues_tmp] = -denumValues[denumValues_tmp];
    denumValues[denumValues_tmp + 1] = -denumValues[denumValues_tmp + 1];
  }

  for (i = 0; i < 3; i++) {
    y[5 * i] = u2[3 * i];
    y[5 * i + 1] = u2[3 * i + 1];
    y[5 * i + 2] = u2[3 * i + 2];
    y[5 * i + 3] = denumValues[i << 1];
    y[5 * i + 4] = denumValues[(i << 1) + 1];
  }

  /* End of Update for S-Function (sdspbiquad): '<S3>/Biquad Filter 1' */
}

/* System initialize for atomic system: '<S1>/BiquadFilter' */
void stm32f4discov_BiquadFilter_Init(void)
{
  /* InitializeConditions for S-Function (sdspbiquad): '<S3>/Biquad Filter 1' incorporates:
   *  Concatenate: '<S2>/Matrix Concatenate'
   *  Concatenate: '<S2>/Matrix Concatenate1'
   */
  stm3_BiquadFilter1_coefficients
    (stm32f4discovery_audio_equali_B.MatrixConcatenate,
     stm32f4discovery_audio_equali_B.MatrixConcatenate1,
     stm32f4discovery_audio_equal_DW.coefficients);
  arm_biquad_cascade_df2T_init_f32(&stm32f4discovery_audio_equal_DW.S, 3U,
    &stm32f4discovery_audio_equal_DW.coefficients[0],
    &stm32f4discovery_audio_equal_DW.pState[0]);
}

/* Output and update for atomic system: '<S1>/BiquadFilter' */
void stm32f4discovery_a_BiquadFilter(void)
{
  /* S-Function (sdspbiquad): '<S3>/Biquad Filter 1' incorporates:
   *  Concatenate: '<S2>/Matrix Concatenate'
   *  Concatenate: '<S2>/Matrix Concatenate1'
   *  CrlBlock: '<S3>/Biquad Filter 1'
   *  Gain: '<Root>/Normalizing the audio signal between -1.0 to 1.0'
   */
  stm3_BiquadFilter1_coefficients
    (stm32f4discovery_audio_equali_B.MatrixConcatenate,
     stm32f4discovery_audio_equali_B.MatrixConcatenate1,
     stm32f4discovery_audio_equal_DW.coefficients);
  arm_biquad_cascade_df2T_f32(&stm32f4discovery_audio_equal_DW.S,
    &stm32f4discovery_audio_equali_B.Normalizingtheaudiosignalbetwee[0],
    &stm32f4discovery_audio_equali_B.BiquadFilter1[0], 882U);
}

/* Model step function */
void stm32f4discovery_audio_equalizer_step(void)
{
  int32_T i;
  real32_T tmp;

  /* Gain: '<Root>/Normalizing the audio signal between -1.0 to 1.0' incorporates:
   *  S-Function (stm32f4_discovery_mic_in): '<Root>/Mic In'
   */
  for (i = 0; i < 882; i++) {
    stm32f4discovery_audio_equali_B.Normalizingtheaudiosignalbetwee[i] =
      stm32f4discovery_audio_equali_P.Normalizingtheaudiosignalbetwee *
      (real32_T)stm32f4discovery_audio_equali_B.MicIn[i];
  }

  /* End of Gain: '<Root>/Normalizing the audio signal between -1.0 to 1.0' */

  /* Outputs for Atomic SubSystem: '<Root>/Equalizer' */
  /* Outputs for Atomic SubSystem: '<S1>/Bands' */
  stm32f4discovery_audio_eq_Bands();

  /* End of Outputs for SubSystem: '<S1>/Bands' */

  /* Outputs for Atomic SubSystem: '<S1>/BiquadFilter' */
  stm32f4discovery_a_BiquadFilter();

  /* End of Outputs for SubSystem: '<S1>/BiquadFilter' */
  /* End of Outputs for SubSystem: '<Root>/Equalizer' */

  /* Gain: '<Root>/Denormalizing the audio signal to int16 range' incorporates:
   *  CrlBlock: '<S3>/Biquad Filter 1'
   */
  for (i = 0; i < 882; i++) {
    tmp = (real32_T)floor
      (stm32f4discovery_audio_equali_P.Denormalizingtheaudiosignaltoin *
       stm32f4discovery_audio_equali_B.BiquadFilter1[i]);
    if (tmp < 32768.0F) {
      if (tmp >= -32768.0F) {
        stm32f4discovery_audio_equali_B.iv[i] = (int16_T)tmp;
      } else {
        stm32f4discovery_audio_equali_B.iv[i] = MIN_int16_T;
      }
    } else {
      stm32f4discovery_audio_equali_B.iv[i] = MAX_int16_T;
    }
  }

  /* End of Gain: '<Root>/Denormalizing the audio signal to int16 range' */

  /* S-Function (stm32f4_discovery_audio_out): '<Root>/Audio Out' */
  stm32f4_audio_output(stm32f4discovery_audio_equali_B.iv, 882U);
}

/* Model initialize function */
void stm32f4discovery_audio_equalizer_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(stm32f4discovery_audio_equal_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &stm32f4discovery_audio_equali_B), 0,
                sizeof(B_stm32f4discovery_audio_equa_T));

  /* states (dwork) */
  (void) memset((void *)&stm32f4discovery_audio_equal_DW, 0,
                sizeof(DW_stm32f4discovery_audio_equ_T));

  /* Start for S-Function (stm32f4_discovery_mic_in): '<Root>/Mic In' */
  stm32f4_mems_mic_init(44100U, 22050U, 10U, 1U,
                        stm32f4discovery_audio_equali_B.MicIn);

  /* Start for S-Function (stm32f4_discovery_audio_out): '<Root>/Audio Out' */
  stm32f4_audio_codec_init(44100U);

  /* SystemInitialize for Atomic SubSystem: '<Root>/Equalizer' */
  /* SystemInitialize for Atomic SubSystem: '<S1>/Bands' */
  stm32f4discovery_aud_Bands_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/Bands' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/BiquadFilter' */
  stm32f4discov_BiquadFilter_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/BiquadFilter' */
  /* End of SystemInitialize for SubSystem: '<Root>/Equalizer' */
}

/* Model terminate function */
void stm32f4discovery_audio_equalizer_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
