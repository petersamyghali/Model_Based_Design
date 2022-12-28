/*
 * File: A_Simple_Calculator.c
 *
 * Code generated for Simulink model 'A_Simple_Calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Dec 28 14:23:11 2022
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

#include "A_Simple_Calculator.h"
#include "A_Simple_Calculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_A_Simple_Calculator_T A_Simple_Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_A_Simple_Calculator_T A_Simple_Calculator_Y;

/* Real-time model */
RT_MODEL_A_Simple_Calculator_T A_Simple_Calculator_M_;
RT_MODEL_A_Simple_Calculator_T *const A_Simple_Calculator_M =
  &A_Simple_Calculator_M_;

/* Model step function */
void A_Simple_Calculator_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/A simple Calculator' */
  /* Outport: '<Root>/ADD' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  A_Simple_Calculator_Y.ADD = A_Simple_Calculator_U.Input +
    A_Simple_Calculator_U.Input1;

  /* Outport: '<Root>/Sum ' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Subtract'
   */
  A_Simple_Calculator_Y.Sum = A_Simple_Calculator_U.Input -
    A_Simple_Calculator_U.Input1;

  /* Outport: '<Root>/Mul ' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Multiply'
   */
  A_Simple_Calculator_Y.Mul = A_Simple_Calculator_U.Input *
    A_Simple_Calculator_U.Input1;

  /* Outport: '<Root>/Div ' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Divide'
   */
  A_Simple_Calculator_Y.Div = A_Simple_Calculator_U.Input /
    A_Simple_Calculator_U.Input1;

  /* End of Outputs for SubSystem: '<Root>/A simple Calculator' */
}

/* Model initialize function */
void A_Simple_Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(A_Simple_Calculator_M, (NULL));

  /* external inputs */
  (void)memset(&A_Simple_Calculator_U, 0, sizeof(ExtU_A_Simple_Calculator_T));

  /* external outputs */
  (void) memset((void *)&A_Simple_Calculator_Y, 0,
                sizeof(ExtY_A_Simple_Calculator_T));
}

/* Model terminate function */
void A_Simple_Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
