/* ========================================
 * File Name: `$INSTANCE_NAME`.h  
 * Version `$CY_MAJOR_VERSION`.`$CY_MINOR_VERSION`
 *
 * Copyright Cypress Semiconductor, 2012
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#if !defined(CJCU_FSQRT_`$INSTANCE_NAME`_H)
#define CJCU_FSQRT_`$INSTANCE_NAME`_H

#include "cytypes.h"
#include "cyfitter.h"

#define `$INSTANCE_NAME`_WIDTH `$dpWidth`
#define `$INSTANCE_NAME`_CPU_MODE `$isCPUmode`

/* F0 and F1 */
#define `$INSTANCE_NAME`_F1 `$INSTANCE_NAME`_B_Fsqrt`$dpWidth`_dp_u0__F1_REG

#if `$INSTANCE_NAME`_CPU_MODE
	/* APIs and Control/Status registers are only available in SW Mode */
	#define `$INSTANCE_NAME`_CTL `$INSTANCE_NAME`_ctl_Sync_ctrl_reg__CONTROL_REG
	#define `$INSTANCE_NAME`_STS `$INSTANCE_NAME`_sts_sts_sts_reg__STATUS_REG

	uint`$regWidth` `$INSTANCE_NAME`_ComputeFsqrt(uint`$regWidth` square);
	void `$INSTANCE_NAME`_ComputeFsqrtAsync(uint`$regWidth` square);
	uint`$regWidth` `$INSTANCE_NAME`_ReadFsqrtAsync();
	uint8 `$INSTANCE_NAME`_AsyncComplete();

#endif

#endif  /* CJCU_FSQRT_`$INSTANCE_NAME`_H */

//[] END OF FILE