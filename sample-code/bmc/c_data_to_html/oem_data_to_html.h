#pragma once

#include <stdio.h>
#include "dsd_bmc_oem_cmd.h"
#include "oem_data_to_file.h"

#define SYSTEM_INFO_HTML "system_information.html"
#define MEMORY_INFO_HTML "memory_information.html"
#define PCIE_INFO_HTML   "pcie_information.html"
#define GPU_INFO_HTML    "gpu_information.html"
#define NVME_INFO_HTML   "nvme_information.html"
#define SATA_INFO_HTML   "sata_information.html"

#define SYSTEM_INFO_CSS "system_information.css"
#define MEMORY_INFO_CSS "memory_information.css"
#define PCIE_INFO_CSS   "pcie_information.css"
#define GPU_INFO_CSS    "gpu_information.css"
#define NVME_INFO_CSS   "nvme_information.css"
#define SATA_INFO_CSS   "sata_information.css"

typedef struct
{
	int value;
	unsigned char description[10];
}LinkCapabilities;

void check_and_init_css_file();
void oem_data_to_html();
int memory_data_to_html(char* html_file);
int system_data_to_html(char* html_file);
int pcie_data_to_html(char* html_file);
int gpu_data_to_html(char* html_file);
int nvme_data_to_html(char* html_file);

char* get_link_cap(int value, LinkCapabilities* cap, int cap_count);
int bios_info_to_html(FILE* fp, SetBiosInfoReq_T * bios_info);
int board_info_to_html(FILE* fp, SetBoardInfoReq_T * board_info);
int power_info_to_html(FILE* fp, SetPowerInfoReq_T * power_info, int power_count);
int cpld_info_to_html(FILE* fp, SetCpldInfoReq_T * cpld_info);
int fpga_info_to_html(FILE* fp, SetFpgaInfoReq_T * fpga_info);
int cpu_info_to_html(FILE* fp, SetCpuInfoReq_T * cpu_info, int cpu_count);
int gpu_info_to_html(FILE* fp, SetGpuInfoReq_T * gpu_info, int gpu_count);
int memory_info_to_html(FILE* fp, SetMemoryInfoReq_T* memory_info, int memory_count);
int nvme_info_to_html(FILE* fp, SetNvmeInfoReq_T* nvme_info, int nvme_count);
int sata_info_to_html(FILE* fp, SetSataInfoReq_T* sata_info, int sata_count);
int pcie_info_to_html(FILE* fp, SetPcieInfoReq_T* pcie_info, int pcie_count);
