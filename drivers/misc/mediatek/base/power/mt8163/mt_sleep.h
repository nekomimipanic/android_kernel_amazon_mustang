/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _MT_SLEEP_
#define _MT_SLEEP_

#include <linux/kernel.h>
#include "mt_spm.h"
#include "mt_spm_sleep.h"

#define WAKE_SRC_CFG_KEY            (1U << 31)

extern int slp_set_wakesrc(u32 wakesrc, bool enable, bool ck26m_on);

extern int slp_get_wake_reason(void);
extern bool slp_will_infra_pdn(void);
extern void slp_pasr_en(bool en, u32 value);
extern void slp_dpd_en(bool en);

extern void slp_set_auto_suspend_wakelock(bool lock);
extern void slp_start_auto_suspend_resume_timer(u32 sec);
extern void slp_create_auto_suspend_resume_thread(void);

extern void slp_cpu_dvs_en(bool en);

extern void mt_power_gs_dump_suspend(void);
extern void mtkpasr_phaseone_ops(void);
extern int configure_mrw_pasr(u32 segment_rank0, u32 segment_rank1);
extern int pasr_enter(u32 *sr, u32 *dpd);
extern int pasr_exit(void);
extern unsigned long mtkpasr_enable_sr;
extern void systracker_enable(void);
extern bool spm_cpusys0_can_power_down(void);

#endif
