/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stm32f4discovery_audio_equalizer.h
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

#ifndef RTW_HEADER_stm32f4discovery_audio_equalizer_h_
#define RTW_HEADER_stm32f4discovery_audio_equalizer_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef stm32f4discovery_audio_equalizer_COMMON_INCLUDES_
#define stm32f4discovery_audio_equalizer_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "stm32f4discovery_wrapper.h"
#endif                   /* stm32f4discovery_audio_equalizer_COMMON_INCLUDES_ */

#include "stm32f4discovery_audio_equalizer_types.h"
#include "MW_target_hardware_resources.h"

/* Includes for objects with custom storage classes. */
#include "biquad_coeffs.h"
#include "arm_math.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define stm32f4discovery_audio_equalizer_M (stm32f4discovery_audio_equal_M)

/* Block signals (default storage) */
typedef struct {
  real32_T Normalizingtheaudiosignalbetwee[882];
                 /* '<Root>/Normalizing the audio signal between -1.0 to 1.0' */
  real32_T BiquadFilter1[882];
  real32_T MatrixConcatenate[9];       /* '<S2>/Matrix Concatenate' */
  real32_T MatrixConcatenate1[6];      /* '<S2>/Matrix Concatenate1' */
  real32_T DiscreteFilter[5];          /* '<S6>/Discrete Filter' */
  real32_T DiscreteFilter_g[5];        /* '<S5>/Discrete Filter' */
  real32_T DiscreteFilter_n[5];        /* '<S4>/Discrete Filter' */
  int16_T MicIn[882];                  /* '<Root>/Mic In' */
  int16_T iv[882];
} B_stm32f4discovery_audio_equa_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  arm_biquad_cascade_df2T_instance_f32 S;/* synthesized block */
  real32_T DiscreteFilter_states[5];   /* '<S6>/Discrete Filter' */
  real32_T DiscreteFilter_states_p[5]; /* '<S5>/Discrete Filter' */
  real32_T DiscreteFilter_states_l[5]; /* '<S4>/Discrete Filter' */
  real32_T coefficients[15];           /* synthesized block */
  real32_T pState[12];                 /* synthesized block */
} DW_stm32f4discovery_audio_equ_T;

/* Parameters (default storage) */
struct P_stm32f4discovery_audio_equa_T_ {
  real32_T DiscreteFilter_NumCoef; /* Computed Parameter: DiscreteFilter_NumCoef
                                    * Referenced by: '<S4>/Discrete Filter'
                                    */
  real32_T DiscreteFilter_DenCoef[2];
                                   /* Computed Parameter: DiscreteFilter_DenCoef
                                    * Referenced by: '<S4>/Discrete Filter'
                                    */
  real32_T DiscreteFilter_InitialStates;
                             /* Computed Parameter: DiscreteFilter_InitialStates
                              * Referenced by: '<S4>/Discrete Filter'
                              */
  real32_T DiscreteFilter_NumCoef_k;
                                 /* Computed Parameter: DiscreteFilter_NumCoef_k
                                  * Referenced by: '<S5>/Discrete Filter'
                                  */
  real32_T DiscreteFilter_DenCoef_k[2];
                                 /* Computed Parameter: DiscreteFilter_DenCoef_k
                                  * Referenced by: '<S5>/Discrete Filter'
                                  */
  real32_T DiscreteFilter_InitialStates_j;
                           /* Computed Parameter: DiscreteFilter_InitialStates_j
                            * Referenced by: '<S5>/Discrete Filter'
                            */
  real32_T DiscreteFilter_NumCoef_b;
                                 /* Computed Parameter: DiscreteFilter_NumCoef_b
                                  * Referenced by: '<S6>/Discrete Filter'
                                  */
  real32_T DiscreteFilter_DenCoef_m[2];
                                 /* Computed Parameter: DiscreteFilter_DenCoef_m
                                  * Referenced by: '<S6>/Discrete Filter'
                                  */
  real32_T DiscreteFilter_InitialStates_i;
                           /* Computed Parameter: DiscreteFilter_InitialStates_i
                            * Referenced by: '<S6>/Discrete Filter'
                            */
  real32_T Normalizingtheaudiosignalbetwee;
                          /* Computed Parameter: Normalizingtheaudiosignalbetwee
                           * Referenced by: '<Root>/Normalizing the audio signal between -1.0 to 1.0'
                           */
  real32_T Denormalizingtheaudiosignaltoin;
                          /* Computed Parameter: Denormalizingtheaudiosignaltoin
                           * Referenced by: '<Root>/Denormalizing the audio signal to int16 range'
                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_stm32f4discovery_audi_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_stm32f4discovery_audio_equa_T stm32f4discovery_audio_equali_P;

/* Block signals (default storage) */
extern B_stm32f4discovery_audio_equa_T stm32f4discovery_audio_equali_B;

/* Block states (default storage) */
extern DW_stm32f4discovery_audio_equ_T stm32f4discovery_audio_equal_DW;

/* Model entry point functions */
extern void stm32f4discovery_audio_equalizer_initialize(void);
extern void stm32f4discovery_audio_equalizer_step(void);
extern void stm32f4discovery_audio_equalizer_terminate(void);

/* Real-time Model object */
extern RT_MODEL_stm32f4discovery_aud_T *const stm32f4discovery_audio_equal_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'stm32f4discovery_audio_equalizer'
 * '<S1>'   : 'stm32f4discovery_audio_equalizer/Equalizer'
 * '<S2>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands'
 * '<S3>'   : 'stm32f4discovery_audio_equalizer/Equalizer/BiquadFilter'
 * '<S4>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands/Band 1'
 * '<S5>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands/Band 2'
 * '<S6>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands/Band 3'
 * '<S7>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands/Band 1/Split Coefficients'
 * '<S8>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands/Band 2/Split Coefficients'
 * '<S9>'   : 'stm32f4discovery_audio_equalizer/Equalizer/Bands/Band 3/Split Coefficients'
 */
#endif                      /* RTW_HEADER_stm32f4discovery_audio_equalizer_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
