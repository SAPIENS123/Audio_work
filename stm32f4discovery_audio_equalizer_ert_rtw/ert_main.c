/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  __enable_irq();
  stm32f4discovery_audio_equalizer_step();

  /* Get model outputs here */
  __disable_irq();
  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(int argc, char **argv)
{
  float modelBaseRate = 0.02;
  float systemClock = 168;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;

#ifndef USE_RTX
#if defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  __disable_irq();

#endif

  ;
  stm32f4xx_init_board();
  SystemCoreClockUpdate();
  bootloaderInit();
  rtmSetErrorStatus(stm32f4discovery_audio_equal_M, 0);
  stm32f4discovery_audio_equalizer_initialize();
  __disable_irq();
  ARMCM_SysTick_Config(modelBaseRate);
  runModel =
    rtmGetErrorStatus(stm32f4discovery_audio_equal_M) == (NULL);
  __enable_irq();
  __enable_irq();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(stm32f4discovery_audio_equal_M) == (NULL));
    runModel = !(stopRequested);
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  stm32f4discovery_audio_equalizer_terminate();

#ifndef USE_RTX

  (void)systemClock;

#endif

  ;
  __disable_irq();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
