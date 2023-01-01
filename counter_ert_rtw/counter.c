/*
 * File: counter.c
 *
 * Code generated for Simulink model 'counter'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Dec 27 13:10:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Debugging
 *    2. Execution efficiency
 *    3. ROM efficiency
 *    4. RAM efficiency
 *    5. MISRA C:2012 guidelines
 * Validation result: Not run
 */

#include "counter.h"
#include "counter_private.h"

/* Block states (default storage) */
DW_counter_T counter_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_counter_T counter_Y;

/* Real-time model */
RT_MODEL_counter_T counter_M_;
RT_MODEL_counter_T *const counter_M = &counter_M_;

/* Model step function */
void counter_step(void)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Sum: '<Root>/Add'
   *  UnitDelay: '<Root>/Unit Delay'
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  if (counter_Y.Output >= 10.0) {
    counter_Y.Output = 0.0;
  } else {
    counter_Y.Output += counter_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Update for UnitDelay: '<Root>/Unit Delay1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  counter_DW.UnitDelay1_DSTATE = 1.0;
}

/* Model initialize function */
void counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(counter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&counter_DW, 0,
                sizeof(DW_counter_T));

  /* external outputs */
  counter_Y.Output = 0.0;
}

/* Model terminate function */
void counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
