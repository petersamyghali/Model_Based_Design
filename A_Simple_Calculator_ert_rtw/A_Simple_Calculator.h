/*
 * File: A_Simple_Calculator.h
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

#ifndef RTW_HEADER_A_Simple_Calculator_h_
#define RTW_HEADER_A_Simple_Calculator_h_
#include <string.h>
#include <stddef.h>
#ifndef A_Simple_Calculator_COMMON_INCLUDES_
# define A_Simple_Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* A_Simple_Calculator_COMMON_INCLUDES_ */

#include "A_Simple_Calculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
} ExtU_A_Simple_Calculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T ADD;                          /* '<Root>/ADD' */
  real_T Sum;                          /* '<Root>/Sum ' */
  real_T Mul;                          /* '<Root>/Mul ' */
  real_T Div;                          /* '<Root>/Div ' */
} ExtY_A_Simple_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_A_Simple_Calculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_A_Simple_Calculator_T A_Simple_Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_A_Simple_Calculator_T A_Simple_Calculator_Y;

/* Model entry point functions */
extern void A_Simple_Calculator_initialize(void);
extern void A_Simple_Calculator_step(void);
extern void A_Simple_Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_A_Simple_Calculator_T *const A_Simple_Calculator_M;

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
 * '<Root>' : 'A_Simple_Calculator'
 * '<S1>'   : 'A_Simple_Calculator/A simple Calculator'
 */
#endif                                 /* RTW_HEADER_A_Simple_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
