#include "dsd_bmc_oem_cmd.h"

SetBiosInfoReq_T  bios_info = { 0,{"INSYDE Corp"},{"105"},"08/18/2023"};
SetBiosInfoReq_T  bios_info2 = { 0 };
SetBoardInfoReq_T board_info = { 0,{"Decenta"},{"S22-EGS-SERVER01"},"V1.01" };

SetCpldInfoReq_T  cpld_info = { 0,{"Decenta"},{"6900top_impl1_230627"} }; 

SetFpgaInfoReq_T  fpga_info = { 0,{"Decenta"},{"FPGA_FW.1.01"} };

SetCpuInfoReq_T   cpu_info[MAX_CPU_COUNT] = {
	{0,{"CPU0"},{"Intel(R) Corporation"},{" Intel(R) Xeon(R) Silver 4410Y"},{0xF8, 0x06 ,0x08 ,0x00 ,0xFF, 0xFB ,0xEB ,0xBF},16,0x65,100,4000,2000},
	{1,{"CPU1"},{"Intel(R) Corporation"},{" Intel(R) Xeon(R) Silver 4410Y"},{0xF8, 0x06 ,0x08 ,0x00 ,0xFF, 0xFB ,0xEB ,0xBF},16,0x65,100,4000,2000},
};

SetGpuInfoReq_T   gpu_info[MAX_GPU_COUNT];

SetMemoryInfoReq_T memory_info[MAX_MEMORY_COUNT] = {
	{0,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_A1"},},
	{1,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_A2"},},
	{2,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_B1"},},
	{3,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_B2"},},
	{4,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_C1"},},
	{5,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_C2"},},
	{6,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_D1"},},
	{7,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_D2"},},
	{8,34,16384,4800,4000,{"Hynix"},{"HMCG78MEBRA113N"},{"CPU0_DIMM_E1"},},
	{9,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_E2"},},
	{10,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_F1"},},
	{11,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_F2"},},
	{12,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_G1"},},
	{13,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_G2"},},
	{14,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_H1"},},
	{15,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU0_DIMM_H2"},},
	{16,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_A1"},},
	{17,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_A2"},},
	{18,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_B1"},},
	{19,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_B2"},},
	{20,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_C1"},},
	{21,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_C2"},},
	{22,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_D1"},},
	{23,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_D2"},},
	{24,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_E1"},},
	{25,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_E2"},},
	{26,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_F1"},},
	{27,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_F2"},},
	{28,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_G1"},},
	{29,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_G2"},},
	{30,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_H1"},},
	{31,2,0,0,0,{"NO DIMM"},{"NO DIMM"},{"CPU1_DIMM_H2"},},
};

SetNvmeInfoReq_T   nvme_info[MAX_NVME_COUNT];

SetPcieInfoReq_T   pcie_info[MAX_PCIE_COUNT];

SetPowerInfoReq_T  power_info[MAX_POWER_COUNT] = {
	{ 0,{"Decenta"},{"PowerFW1.01"} },
	{ 1,{"Decenta"},{"PowerFW1.01"} },
	{ 2,{"Decenta"},{"PowerFW1.01"} },
	{ 3,{"Decenta"},{"PowerFW1.01"} }
};

SetSataInfoReq_T   sata_info[MAX_SATA_COUNT];

DsdOemInfo_T dsd_oem_info = { 0 }; //init all data to 0 ;
