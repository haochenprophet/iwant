
#include "oem_data_to_html.h"
//html
#define HTML_START "\
<!DOCTYPEhtml>\n\
<html>\n\
<head>\n\
<metacharset=\"utf-8\">\n\
<title>%s</title>\n\
<style type=\"text/css\">\n\
 @import\"%s\";\n\
</style>\n\
</head>\n\
<body>\n"
//bios
char* bios_info_start = (char*)"<div class = \"bios_information\">\n";
char* bios_info_end = (char*)"</div>\n\n";
//board
char* board_info_start = (char*)"<div class = \"board_information\">\n";
char* board_info_end = (char*)"</div>\n\n";
//power
char* power_info_start = (char*)"<div class = \"power_information\">\n";
char* power_info_end = (char*)"</div>\n\n";
//cpld
char* cpld_info_start = (char*)"<div class = \"cpld_information\">\n";
char* cpld_info_end = (char*)"</div>\n\n";
//fpga
char* fpga_info_start = (char*)"<div class = \"fpga_information\">\n";
char* fpga_info_end = (char*)"</div>\n\n";
//cpu
char* cpu_info_start = (char*)"<div class = \"cpu_information\">\n";
char* cpu_info_end = (char*)"</div>\n\n";
//gpu
char* gpu_info_start = (char*)"<div class = \"gpu_information\">\n";
char* gpu_info_end = (char*)"</div>\n\n";
//memory
char* memory_info_start = (char*)"<div class = \"memory_information\">\n";
char* memory_info_end = (char*)"</div>\n\n";
//nvme
char* nvme_info_start = (char*)"<div class = \"nvme_information\">\n";
char* nvme_info_end = (char*)"</div>\n\n";
//sata
char* sata_info_start = (char*)"<div class = \"sata_information\">\n";
char* sata_info_end = (char*)"</div>\n\n";
//pcie
char* pcie_info_start = (char*)"<div class = \"pcie_information\">\n";
char* pcie_info_end = (char*)"</div>\n\n";

//html end
char* html_end = (char*)"</body>\n</html>\n";

unsigned char na_str[] = "NA";
LinkCapabilities  link_speed[] = {
	{1,{"2 Gb"},},
	{2,{"5 Gb"},},
	{3,{"8 Gb"},},
	{4,{"16 Gb"},},
	{5,{"32 Gb"},},
};
#define LINK_SPEED_COUNT  (sizeof(link_speed)/sizeof(LinkCapabilities))

LinkCapabilities  link_width[] = {
	{0x1,{"x1"},},
	{0x2,{"x2"},},
	{0x4,{"x4"},},
	{0x8,{"x8"},},
	{0x10,{"x16"},},
	{0x20,{"x32"},},
};
#define LINK_WIDTH_COUNT  (sizeof(link_width)/sizeof(LinkCapabilities))


int bios_info_to_html(FILE* fp, SetBiosInfoReq_T * bios_info)
{
	fprintf(fp, "%s", bios_info_start);

	fprintf(fp, "<font size = \"5\" color=\"black\">BIOS Information:</font>\n");
	fprintf(fp, "<table border = \"0\" class= bios_table>\n");

//	fprintf(fp, "<tr><td>Index:</td><td>%d</td></tr>\n", bios_info->Index);
	fprintf(fp, "<tr><td>BIOS Vendor:</td><td>%s</td></tr>\n", bios_info->Vendor);
	fprintf(fp, "<tr><td>BIOS Version:</td><td>%s</td></tr>\n", bios_info->Version);
	fprintf(fp, "<tr><td>Release Date:</td><td>%s</td></tr>\n", bios_info->ReleaseDate);
	
    fprintf(fp, "</table>\n");
	fprintf(fp, "%s", bios_info_end);
	return 0;
}

int board_info_to_html(FILE* fp, SetBoardInfoReq_T * board_info)
{
	fprintf(fp, "%s", board_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>Board Information:</font>\n");
	fprintf(fp, "<table border = \"0\" class= board_table>\n");

	//	fprintf(fp, "<tr><td>Index:</td><td>%d</td></tr>\n", board_info->Index);
	fprintf(fp, "<tr><td>Manufacturer:</td><td>%s</td></tr>\n", board_info->Manufacturer);
	fprintf(fp, "<tr><td>ProductName:</td><td>%s</td></tr>\n", board_info->ProductName);
	fprintf(fp, "<tr><td>Version:</td><td>%s</td></tr>\n", board_info->Version);

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", board_info_end);
	return 0;
}

int power_info_to_html(FILE* fp, SetPowerInfoReq_T * power_info , int power_count)
{
	int i;
	fprintf(fp, "%s", power_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>Power Information:%d</font>\n", power_count);
	fprintf(fp, "<table border = \"0\" class= power_table>\n");

	fprintf(fp, "<tr> <th>PowerID</th> <th>Manufacturer</th>  <th>Firmware</th>  </tr>\n");
	for(i=0;i< power_count;i++){
		fprintf(fp, "<tr> <td>%d</td> <td>%s</td> <td>%s</td> </tr>\n", power_info[i].Index, power_info[i].Manufacturer, power_info[i].Firmware);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", power_info_end);
	return 0;
}

int cpld_info_to_html(FILE* fp, SetCpldInfoReq_T * cpld_info)
{
	fprintf(fp, "%s", cpld_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>CPLD Information:</font>\n");
	fprintf(fp, "<table border = \"0\" class= cpld_table>\n");

	//	fprintf(fp, "<tr><td>Index:</td><td>%d</td></tr>\n", cpld_info->Index);
	fprintf(fp, "<tr><td>Manufacturer:</td><td>%s</td></tr>\n", cpld_info->Manufacturer);
	fprintf(fp, "<tr><td>Firmware:</td><td>%s</td></tr>\n", cpld_info->Firmware);

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", cpld_info_end);
	return 0;
}

int fpga_info_to_html(FILE* fp, SetFpgaInfoReq_T * fpga_info)
{
	fprintf(fp, "%s", fpga_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>FPGA Information:</font>\n");
	fprintf(fp, "<table border = \"0\" class= fpga_table>\n");

	//	fprintf(fp, "<tr><td>Index:</td><td>%d</td></tr>\n", fpga_info->Index);
	fprintf(fp, "<tr><td>Manufacturer:</td><td>%s</td></tr>\n", fpga_info->Manufacturer);
	fprintf(fp, "<tr><td>Firmware:</td><td>%s</td></tr>\n", fpga_info->Firmware);

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", fpga_info_end);
	return 0;
}

int cpu_info_to_html(FILE* fp, SetCpuInfoReq_T * cpu_info,int cpu_count )
{
	int i;
	fprintf(fp, "%s", cpu_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>CPU Information:%d</font>\n", cpu_count);
	fprintf(fp, "<table border = \"0\" class= cpu_table>\n");

	fprintf(fp, "<tr> <th>CpuID</th> <th>Socket</th>  <th>Manufacturer</th>   <th>Version</th> </tr>\n");
	for (i = 0; i < cpu_count; i++) {
		fprintf(fp, "<tr> <td>%d</td> <td>%s</td> <td>%s</td>  <td>%s</td> </tr>\n", cpu_info[i].Index, cpu_info[i].SocketDesignation, cpu_info[i].Manufacturer, cpu_info[i].Version);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", cpu_info_end);
	return 0;
}

int gpu_info_to_html(FILE* fp, SetGpuInfoReq_T * gpu_info,int gpu_count)
{
	int i;
	fprintf(fp, "%s", gpu_info_start);

	fprintf(fp, "<font size = \"5\" color=\"black\"><br>GPU Information:%d</font>\n", gpu_count);
	fprintf(fp, "<table class= gpu_table>\n");

	fprintf(fp, "<tr> <th>GpuID</th> <th>Bus</th>  <th>Device</th>   <th>Function</th> <th>VendorID</th>  <th>DeviceID</th>   <th>BridgeBus</th>  <th>BridgeDev</th>  <th>BridgeFun</th> <th>LinkCapabilities</th>  <th>LinkStatus</th>  </tr>\n");
	for (i = 0; i < gpu_count; i++) {
		fprintf(fp, "<tr> <td>%d</td> <td>0x%02X</td> <td>0x%02X</td>  <td>0x%02X</td>  <td>0x%04X</td> <td>0x%04X</td>  <td>0x%02X</td>  <td>0x%02X</td>  <td>0x%02X</td>   <td>%s , %s</td>   <td>%s , %s</td> </tr>\n",
			gpu_info[i].Index,
			gpu_info[i].Bus,
			gpu_info[i].Dev,
			gpu_info[i].Fun,
			gpu_info[i].VendorID,
			gpu_info[i].DeviceID,
			gpu_info[i].BridgeBus,
			gpu_info[i].BridgeDev,
			gpu_info[i].BridgeFun,
			get_link_cap(gpu_info[i].LinkCap & 0xF, link_speed, LINK_SPEED_COUNT),
			get_link_cap((gpu_info[i].LinkCap >> 4) & 0x3F, link_width, LINK_WIDTH_COUNT),
			get_link_cap(gpu_info[i].LinkStatus & 0xF, link_speed, LINK_SPEED_COUNT),
			get_link_cap((gpu_info[i].LinkStatus >> 4) & 0x3F, link_width, LINK_WIDTH_COUNT)
		);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", gpu_info_end);
	return 0;
}

int memory_info_to_html(FILE* fp, SetMemoryInfoReq_T * memory_info,int memory_count)
{
	int i;
	fprintf(fp, "%s", memory_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>Memory Information:%d</font>\n", memory_count);
	fprintf(fp, "<table border = \"0\" class= memory_table>\n");

	fprintf(fp, "<tr> <th>MemoryID</th> <th>Locator</th>  <th>Manufacturer</th>   <th>PartNumber</th> <th>Size</th>  <th>Speed</th>   <th>ConfiguredSpeed</th> </tr>\n");
	for (i = 0; i < memory_count; i++) {
		fprintf(fp, "<tr> <td>%d</td> <td>%s</td> <td>%s</td>  <td>%s</td>  <td>%d MB</td> <td>%d MHz</td>  <td>%d MHz</td> </tr>\n",
			memory_info[i].Index,
			memory_info[i].Locator,
			memory_info[i].Manufacturer,
			memory_info[i].PartNumber,
			memory_info[i].Size,
			memory_info[i].Speed,
			memory_info[i].ConfiguredSpeed
		);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", memory_info_end);
	return 0;
}

int nvme_info_to_html(FILE* fp, SetNvmeInfoReq_T * nvme_info,int nvme_count)
{
	int i;
	fprintf(fp, "%s", nvme_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>NVME Information:%d</font>\n", nvme_count);
	fprintf(fp, "<table class= nvme_table>\n");

	fprintf(fp, "<tr> <th>NvmeID</th> <th>Bus</th>  <th>Device</th>   <th>Function</th> <th>VendorID</th>  <th>DeviceID</th>   <th>BridgeBus</th>  <th>BridgeDev</th>  <th>BridgeFun</th> <th>LinkCapabilities</th>  <th>LinkStatus</th>  <th>ModelName</th>  </tr>\n");
	for (i = 0; i < nvme_count; i++) {
		fprintf(fp, "<tr> <td>%d</td> <td>0x%02X</td> <td>0x%02X</td>  <td>0x%02X</td>  <td>0x%04X</td> <td>0x%04X</td>  <td>0x%02X</td>  <td>0x%02X</td>  <td>0x%02X</td>   <td>%s , %s</td>   <td>%s , %s</td> <td>%s</td> </tr>\n",
			nvme_info[i].Index,
			nvme_info[i].Bus,
			nvme_info[i].Dev,
			nvme_info[i].Fun,
			nvme_info[i].VendorID,
			nvme_info[i].DeviceID,
			nvme_info[i].BridgeBus,
			nvme_info[i].BridgeDev,
			nvme_info[i].BridgeFun,
			get_link_cap(nvme_info[i].LinkCap & 0xF, link_speed, LINK_SPEED_COUNT),
			get_link_cap((nvme_info[i].LinkCap >> 4) & 0x3F, link_width, LINK_WIDTH_COUNT),
			get_link_cap(nvme_info[i].LinkStatus & 0xF, link_speed, LINK_SPEED_COUNT),
			get_link_cap((nvme_info[i].LinkStatus >> 4) & 0x3F, link_width, LINK_WIDTH_COUNT),
			nvme_info[i].ModelName
		);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", nvme_info_end);
	return 0;
}

int sata_info_to_html(FILE* fp, SetSataInfoReq_T * sata_info,int sata_count)
{
	int i;
	fprintf(fp, "%s", sata_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>SATA Information:%d</font>\n", sata_count);
	fprintf(fp, "<table border = \"0\" class= sata_table>\n");

	fprintf(fp, "<tr> <th>SataID</th> <th>Controller</th>  <th>Port</th>  <th>ModelName</th>   </tr>\n");
	for (i = 0; i < sata_count; i++) {
		fprintf(fp, "<tr> <td>%d</td> <td>%d</td> <td>%d</td>  <td>%s</td> </tr>\n", sata_info[i].Index, sata_info[i].Controller, sata_info[i].Port, sata_info[i].ModelName);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", sata_info_end);
	return 0;
}

char * get_link_cap(int value, LinkCapabilities* cap, int cap_count)
{
	int n;
	for (n = 0; n < cap_count; n++)
	{
		if (cap[n].value == value)
		{
			return (char*)cap[n].description;
		}
	}

//	printf("Error: get_link_cap() not find cap value =%d \n ", value);
//	return (char*)cap[0].description;
	return na_str;
}

int pcie_info_to_html(FILE* fp, SetPcieInfoReq_T * pcie_info,int pcie_count)
{
	int i;
	fprintf(fp, "%s", pcie_info_start);
	fprintf(fp, "<font size = \"5\" color=\"black\"><br>PCIE Information:%d</font>\n", pcie_count);
	fprintf(fp, "<table border = \"0\" class= pcie_table>\n");

	fprintf(fp, "<tr> <th>PcieID</th> <th>Bus</th>  <th>Device</th>   <th>Function</th> <th>VendorID</th>  <th>DeviceID</th>   <th>ClassCode</th>  <th>LinkCapabilities</th>  <th>LinkStatus</th>  </tr>\n");
	for (i = 0; i < pcie_count; i++) {
		fprintf(fp, "<tr> <td>%d</td> <td>0x%02X</td> <td>0x%02X</td>  <td>0x%02X</td>  <td>0x%04X</td> <td>0x%04X</td>  <td>0x%02X,0x%02X,0x%02X</td>  <td>%s , %s</td>   <td>%s , %s</td> </tr>\n",
			pcie_info[i].Index,
			pcie_info[i].Bus,
			pcie_info[i].Dev,
			pcie_info[i].Fun,
			pcie_info[i].VendorID,
			pcie_info[i].DeviceID,
			pcie_info[i].ClassCode[0],
			pcie_info[i].ClassCode[1],
			pcie_info[i].ClassCode[2],
			get_link_cap( pcie_info[i].LinkCap & 0xF, link_speed, LINK_SPEED_COUNT),
			get_link_cap( (pcie_info[i].LinkCap >>4) & 0x3F, link_width, LINK_WIDTH_COUNT),
			get_link_cap( pcie_info[i].LinkStatus & 0xF, link_speed, LINK_SPEED_COUNT),
			get_link_cap( (pcie_info[i].LinkStatus >> 4) & 0x3F, link_width, LINK_WIDTH_COUNT)
		);
	}

	fprintf(fp, "</table>\n");
	fprintf(fp, "%s", pcie_info_end);
	return 0;
}

int gpu_data_to_html(char* html_file)
{
	FILE* fp;
	if (!(fp = fopen(html_file, "w+"))) {
		printf("Error:can not open the %s file.\n", html_file);
		return -1;
	}

	fprintf(fp, HTML_START, "GPU Information", "gpu_information.css");
	gpu_info_to_html(fp, gpu_info, (int)sizeof(gpu_info) / sizeof(SetGpuInfoReq_T));
	fprintf(fp, "\n%s", html_end);

	fclose(fp);
	return 0;
}

int nvme_data_to_html(char* html_file)
{
	FILE* fp;
	if (!(fp = fopen(html_file, "w+"))) {
		printf("Error:can not open the %s file.\n", html_file);
		return -1;
	}

	fprintf(fp, HTML_START, "NVME Information", "nvme_information.css");
	nvme_info_to_html(fp, nvme_info, (int)sizeof(nvme_info) / sizeof(SetNvmeInfoReq_T));
	fprintf(fp, "\n%s", html_end);

	fclose(fp);
	return 0;
}

int sata_data_to_html(char* html_file)
{
	FILE* fp;
	if (!(fp = fopen(html_file, "w+"))) {
		printf("Error:can not open the %s file.\n", html_file);
		return -1;
	}

	fprintf(fp, HTML_START, "SATA Information", "sata_information.css");
	sata_info_to_html(fp, sata_info, (int)sizeof(sata_info) / sizeof(SetSataInfoReq_T));
	fprintf(fp, "\n%s", html_end);

	fclose(fp);
	return 0;
}

int pcie_data_to_html(char* html_file)
{
	FILE* fp;
	if (!(fp = fopen(html_file, "w+"))) {
		printf("Error:can not open the %s file.\n", html_file);
		return -1;
	}

	fprintf(fp, HTML_START, "PCIE Information", "pcie_information.css");
	pcie_info_to_html(fp, pcie_info, (int)sizeof(pcie_info) / sizeof(SetPcieInfoReq_T));
	fprintf(fp, "\n%s", html_end);

	fclose(fp);
	return 0;
}

int memory_data_to_html(char* html_file)
{
	FILE* fp;
	if (!(fp = fopen(html_file, "w+"))) {
		printf("Error:can not open the %s file.\n", html_file);
		return -1;
	}

	fprintf(fp, HTML_START, "Memory Information","memory_information.css");
	memory_info_to_html(fp, memory_info, (int)sizeof(memory_info) / sizeof(SetMemoryInfoReq_T));
	fprintf(fp, "\n%s", html_end);

	fclose(fp);
	return 0;
}

int system_data_to_html(char * html_file)
{
	FILE* fp;
	if (!(fp = fopen(html_file, "w+"))) {
		printf("Error:can not open the %s file.\n", html_file);
		return -1;
	}

	fprintf(fp, HTML_START, "System Information","system_information.css");

	bios_info_to_html(fp, &bios_info);
	board_info_to_html(fp,&board_info);
	power_info_to_html(fp,power_info, (int)sizeof(power_info) / sizeof(SetPowerInfoReq_T));
	cpld_info_to_html(fp,&cpld_info);
	fpga_info_to_html(fp,&fpga_info);
	cpu_info_to_html(fp, cpu_info, (int) sizeof(cpu_info)/sizeof(SetCpuInfoReq_T) );

	fprintf(fp,"\n%s", html_end);

	fclose(fp);
	return 0;
}

char css_info[]="table, th, td { \n\
border - left: 1px solid black; \n\
border - right: 1px solid black; \n\
border - top: 1px solid black; \n\
border - bottom: 1px solid black; \n\
border - collapse:collapse; \n\
}";

#define CSS_INFO_SIZE (sizeof(css_info))

void check_and_init_css_file()
{

	if (0 == file_is_exist((char*) SYSTEM_INFO_CSS))
	{
		data_info_to_file((char*)SYSTEM_INFO_CSS,(void*)css_info,(int) CSS_INFO_SIZE-1);
	}
	if (0 == file_is_exist((char*)MEMORY_INFO_CSS))
	{
		data_info_to_file((char*)MEMORY_INFO_CSS, (void*)css_info, (int)CSS_INFO_SIZE-1);
	}
	if (0 == file_is_exist((char*)PCIE_INFO_CSS))
	{
		data_info_to_file((char*)PCIE_INFO_CSS, (void*)css_info, (int)CSS_INFO_SIZE-1);
	}
	if (0 == file_is_exist((char*)GPU_INFO_CSS))
	{
		data_info_to_file((char*)GPU_INFO_CSS, (void*)css_info, (int)CSS_INFO_SIZE-1);
	}
	if (0 == file_is_exist((char*)NVME_INFO_CSS))
	{
		data_info_to_file((char*)NVME_INFO_CSS, (void*)css_info, (int)CSS_INFO_SIZE-1);
	}
	if (0 == file_is_exist((char*)SATA_INFO_CSS))
	{
		data_info_to_file((char*)SATA_INFO_CSS, (void*)css_info, (int)CSS_INFO_SIZE-1);
	}
}

void oem_data_to_html()
{
	check_and_init_css_file();
	system_data_to_html((char*)SYSTEM_INFO_HTML);
	memory_data_to_html((char*)MEMORY_INFO_HTML);
	pcie_data_to_html((char*)PCIE_INFO_HTML);
	gpu_data_to_html((char*)GPU_INFO_HTML);
	nvme_data_to_html((char*)NVME_INFO_HTML);
	sata_data_to_html((char*)SATA_INFO_HTML);
}