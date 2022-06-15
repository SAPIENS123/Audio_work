/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stm32f4discovery_audio_equalizer_data.c
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

/* Block parameters (default storage) */
P_stm32f4discovery_audio_equa_T stm32f4discovery_audio_equali_P = {
  /* Computed Parameter: DiscreteFilter_NumCoef
   * Referenced by: '<S4>/Discrete Filter'
   */
  0.25F,

  /* Computed Parameter: DiscreteFilter_DenCoef
   * Referenced by: '<S4>/Discrete Filter'
   */
  { 1.0F, -0.75F },

  /* Computed Parameter: DiscreteFilter_InitialStates
   * Referenced by: '<S4>/Discrete Filter'
   */
  0.0F,

  /* Computed Parameter: DiscreteFilter_NumCoef_k
   * Referenced by: '<S5>/Discrete Filter'
   */
  0.25F,

  /* Computed Parameter: DiscreteFilter_DenCoef_k
   * Referenced by: '<S5>/Discrete Filter'
   */
  { 1.0F, -0.75F },

  /* Computed Parameter: DiscreteFilter_InitialStates_j
   * Referenced by: '<S5>/Discrete Filter'
   */
  0.0F,

  /* Computed Parameter: DiscreteFilter_NumCoef_b
   * Referenced by: '<S6>/Discrete Filter'
   */
  0.25F,

  /* Computed Parameter: DiscreteFilter_DenCoef_m
   * Referenced by: '<S6>/Discrete Filter'
   */
  { 1.0F, -0.75F },

  /* Computed Parameter: DiscreteFilter_InitialStates_i
   * Referenced by: '<S6>/Discrete Filter'
   */
  0.0F,

  /* Computed Parameter: Normalizingtheaudiosignalbetwee
   * Referenced by: '<Root>/Normalizing the audio signal between -1.0 to 1.0'
   */
  3.05175781E-5F,

  /* Computed Parameter: Denormalizingtheaudiosignaltoin
   * Referenced by: '<Root>/Denormalizing the audio signal to int16 range'
   */
  32768.0F
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
