/*
 * File: A_Simple_Logic_Claculator.c
 *
 * Code generated for Simulink model 'A_Simple_Logic_Claculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Dec 28 14:27:30 2022
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

#include "A_Simple_Logic_Claculator.h"
#include "A_Simple_Logic_Claculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_A_Simple_Logic_Claculato_T A_Simple_Logic_Claculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_A_Simple_Logic_Claculato_T A_Simple_Logic_Claculator_Y;

/* Real-time model */
RT_MODEL_A_Simple_Logic_Clacu_T A_Simple_Logic_Claculator_M_;
RT_MODEL_A_Simple_Logic_Clacu_T *const A_Simple_Logic_Claculator_M =
  &A_Simple_Logic_Claculator_M_;

/* Model step function */
void A_Simple_Logic_Claculator_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input'
   *  Logic: '<S1>/NOT1'
   */
  A_Simple_Logic_Claculator_Y.Out1 = !A_Simple_Logic_Claculator_U.Input;
}

/* Model initialize function */
void A_Simple_Logic_Claculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(A_Simple_Logic_Claculator_M, (NULL));

  /* external inputs */
  (void)memset(&A_Simple_Logic_Claculator_U, 0, sizeof
               (ExtU_A_Simple_Logic_Claculato_T));

  /* external outputs */
  A_Simple_Logic_Claculator_Y.Out1 = false;
}

/* Model terminate function */
void A_Simple_Logic_Claculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
