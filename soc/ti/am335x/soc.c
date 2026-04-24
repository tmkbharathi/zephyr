/*
 * Copyright (c) 2026 Manikanda Bharathi
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/arch/cpu.h>
#include <zephyr/init.h>

/* Stub interrupt controller functions */
void z_soc_irq_init(void) {}
unsigned int z_soc_irq_get_active(void) { return 0; }
void z_soc_irq_eoi(unsigned int irq) { ARG_UNUSED(irq); }
void z_soc_irq_enable(unsigned int irq) { ARG_UNUSED(irq); }
void z_soc_irq_disable(unsigned int irq) { ARG_UNUSED(irq); }
int z_soc_irq_is_enabled(unsigned int irq) { ARG_UNUSED(irq); return 0; }
void z_soc_irq_priority_set(unsigned int irq, unsigned int prio, unsigned int flags)
{
	ARG_UNUSED(irq);
	ARG_UNUSED(prio);
	ARG_UNUSED(flags);
}

/* Stub timer function to resolve sys_clock_elapsed */
uint32_t sys_clock_elapsed(void) { return 0; }
