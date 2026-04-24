# Copyright (c) 2026 Manikanda Bharathi
# SPDX-License-Identifier: Apache-2.0

set(SOC_LINKER_SCRIPT ${ZEPHYR_BASE}/include/zephyr/arch/arm/cortex_a_r/scripts/linker.ld CACHE INTERNAL "")
zephyr_library()
zephyr_library_sources(soc.c mmu_regions.c)
