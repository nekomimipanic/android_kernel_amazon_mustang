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

#ifndef _MT_SPM_SLEEP_
#define _MT_SPM_SLEEP_

#include <linux/kernel.h>
#include "mt_spm.h"
/*
 * for suspend
 */
extern int spm_set_sleep_wakesrc(u32 wakesrc, bool enable, bool replace);
extern u32 spm_get_sleep_wakesrc(void);
extern int spm_go_to_sleep(u32 spm_flags, u32 spm_data);

extern bool spm_is_conn_sleep(void);
extern void spm_set_wakeup_src_check(void);
extern bool spm_check_wakeup_src(void);
extern void spm_poweron_config_set(void);
extern void spm_md32_sram_con(u32 value);
extern bool spm_set_suspned_pcm_init_flag(u32 *suspend_flags);

extern void spm_output_sleep_option(void);

#ifdef CONFIG_MTK_SMART_BATTERY
extern int get_dynamic_period(int first_use,
        int first_wakeup_time, int battery_capacity_level);
#else
#define get_dynamic_period(first_use, first_wakeup_time, battery_capacity_level)        ({ 0; })
#endif
#endif
