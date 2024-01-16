/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Evita_Paredes_Sist_Completo_private.h
 *
 * Code generated for Simulink model 'Evita_Paredes_Sist_Completo'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Nov 12 16:46:18 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Evita_Paredes_Sist_Completo_private_h_
#define RTW_HEADER_Evita_Paredes_Sist_Completo_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Evita_Paredes_Sist_Completo_types.h"
#include "Evita_Paredes_Sist_Completo.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern void uMultiWordMul(const uint32_T u1[], int16_T n1, const uint32_T u2[],
  int16_T n2, uint32_T y[], int16_T n);
extern void uMultiWord2MultiWord(const uint32_T u1[], int16_T n1, uint32_T y[],
  int16_T n);
extern boolean_T sMultiWordGe(const uint32_T u1[], const uint32_T u2[], int16_T
  n);
extern int16_T sMultiWordCmp(const uint32_T u1[], const uint32_T u2[], int16_T n);
extern void sMultiWordShl(const uint32_T u1[], int16_T n1, uint16_T n2, uint32_T
  y[], int16_T n);
extern void sLong2MultiWord(int32_T u, uint32_T y[], int16_T n);
extern boolean_T sMultiWordLe(const uint32_T u1[], const uint32_T u2[], int16_T
  n);
extern int32_T MultiWord2sLong(const uint32_T u[]);
extern void uMultiWordShr(const uint32_T u1[], int16_T n1, uint16_T n2, uint32_T
  y[], int16_T n);

#endif                   /* RTW_HEADER_Evita_Paredes_Sist_Completo_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */