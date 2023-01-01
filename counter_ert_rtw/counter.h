/*
 * File: counter.h
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

#ifndef RTW_HEADER_counter_h_
#define RTW_HEADER_counter_h_
#include <stddef.h>
#include <string.h>
#ifndef counter_COMMON_INCLUDES_
# define counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* counter_COMMON_INCLUDES_ */

#include "counter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<Root>/Unit Delay1' */
} DW_counter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_counter_T;

/* Real-time Model Data Structure */
struct tag_RTM_counter_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_counter_T counter_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_counter_T counter_Y;

/* Model entry point functions */
extern void counter_initialize(void);
extern void counter_step(void);
extern void counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_counter_T *const counter_M;

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
 * '<Root>' : 'counter'
 */
#endif                                 /* RTW_HEADER_counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
