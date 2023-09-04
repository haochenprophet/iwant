#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "dsd_bmc_oem_cmd.h"

#define BIOS_INFO_BIN   "bios_info.bin"

#define BOARD_INFO_BIN  "board_info.bin"

#define CPLD_INFO_BIN   "cpld_info.bin"

#define FPGA_INFO_BIN   "fpga_info.bin"

#define CPU_INFO_BIN    "cpu_info.bin"

#define GPU_INFO_BIN    "gpu_info.bin"

#define MEMORY_INFO_BINT "memory_info.bin"

#define NVME_INFO_BIN    "nvme_info.bin"

#define PCIE_INFO_BIN    "pcie_info.bin"

#define POWER_INFO_BIN   "power_info.bin"

#define SATA_INFO_BIN    "sata_info.bin"

void oem_data_to_file();
void file_to_oem_data();
int  data_info_to_file(char* file, void* data, int size);
int  file_to_data_info(char* file, void* data, int size);
