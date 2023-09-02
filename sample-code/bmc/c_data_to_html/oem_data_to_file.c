
#include "oem_data_to_file.h"

int data_info_to_file(char* file,void * data,int size)
{
	FILE* fp;
	if (!(fp = fopen(file, "wb+"))) {
		printf("Error:can not open the %s file.\n", file);
		return -1;
	}
	fwrite(data,size,1, fp);
	fclose(fp);
	return 0;
}

int file_to_data_info(char* file, void* data, int size)
{
	FILE* fp;
	if (!(fp = fopen(file, "rb"))) {
		printf("Error:can not open the %s file.\n", file);
		return -1;
	}
	fread(data, size, 1, fp);
	fclose(fp);
	return 0;
}

void oem_data_to_file()
{
	data_info_to_file((char*)BIOS_INFO_BIN, (void *) & bios_info, sizeof(bios_info));

	data_info_to_file((char*)BOARD_INFO_BIN,(void*) & board_info, sizeof(board_info));

	data_info_to_file((char*)CPLD_INFO_BIN, (void*)&cpld_info, sizeof(cpld_info));

	data_info_to_file((char*)FPGA_INFO_BIN, (void*)&fpga_info, sizeof(fpga_info));

	data_info_to_file((char*)CPU_INFO_BIN, (void*)cpu_info, sizeof(cpu_info));

	data_info_to_file((char*)GPU_INFO_BIN, (void*)gpu_info, sizeof(gpu_info));

	data_info_to_file((char*)MEMORY_INFO_BINT, (void*)memory_info, sizeof(memory_info));

	data_info_to_file((char*)NVME_INFO_BIN, (void*)nvme_info, sizeof(nvme_info));

	data_info_to_file((char*)PCIE_INFO_BIN, (void*)pcie_info, sizeof(pcie_info));

	data_info_to_file((char*)POWER_INFO_BIN, (void*)power_info, sizeof(power_info));

	data_info_to_file((char*)SATA_INFO_BIN, (void*)sata_info, sizeof(sata_info));

}


void file_to_oem_data()
{
	file_to_data_info((char*)BIOS_INFO_BIN, (void*)&bios_info, sizeof(bios_info));

	file_to_data_info((char*)BOARD_INFO_BIN, (void*)&board_info, sizeof(board_info));

	file_to_data_info((char*)CPLD_INFO_BIN, (void*)&cpld_info, sizeof(cpld_info));

	file_to_data_info((char*)FPGA_INFO_BIN, (void*)&fpga_info, sizeof(fpga_info));

	file_to_data_info((char*)CPU_INFO_BIN, (void*)cpu_info, sizeof(cpu_info));

	file_to_data_info((char*)GPU_INFO_BIN, (void*)gpu_info, sizeof(gpu_info));

	file_to_data_info((char*)MEMORY_INFO_BINT, (void*)memory_info, sizeof(memory_info));

	file_to_data_info((char*)NVME_INFO_BIN, (void*)nvme_info, sizeof(nvme_info));

	file_to_data_info((char*)PCIE_INFO_BIN, (void*)pcie_info, sizeof(pcie_info));

	file_to_data_info((char*)POWER_INFO_BIN, (void*)power_info, sizeof(power_info));

	file_to_data_info((char*)SATA_INFO_BIN, (void*)sata_info, sizeof(sata_info));

}
