/*
 * Copyright (c) 2026 Manikanda Bharathi
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/devicetree.h>
#include <zephyr/sys/util.h>
#include <zephyr/arch/arm/mmu/arm_mmu.h>

static const struct arm_mmu_region mmu_regions[] = {
	/* Map RAM */
	MMU_REGION_FLAT_ENTRY("RAM",
			      0x80000000,
			      0x20000000,
			      MT_NORMAL | MPERM_R | MPERM_W | MPERM_X),
	/* Map Peripherals */
	MMU_REGION_FLAT_ENTRY("PERIPH",
			      0x40000000,
			      0x10000000,
			      MT_DEVICE | MATTR_SHARED | MPERM_R | MPERM_W),
};

const struct arm_mmu_config mmu_config = {
	.num_regions = ARRAY_SIZE(mmu_regions),
	.mmu_regions = mmu_regions,
};
