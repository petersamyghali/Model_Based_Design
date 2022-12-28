/*
 * File: Factorial_Using_Mat_.h
 *
 * Code generated for Simulink model 'Factorial_Using_Mat_'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Dec 28 14:37:56 2022
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

#ifndef RTW_HEADER_Factorial_Using_Mat__h_
#define RTW_HEADER_Factorial_Using_Mat__h_
#include <stddef.h>
#ifndef Factorial_Using_Mat__COMMON_INCLUDES_
# define Factorial_Using_Mat__COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_Using_Mat__COMMON_INCLUDES_ */

#include "Factorial_Using_Mat__types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_Using_Mat__T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Factorial_Using_Mat__initialize(void);
extern void Factorial_Using_Mat__step(void);
extern void Factorial_Using_Mat__terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_Using_Mat__T *const Factorial_Using_Mat__M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'Factorial_Using_Mat_'
 * '<S1>'   : 'Factorial_Using_Mat_/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Factorial_Using_Mat__h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
