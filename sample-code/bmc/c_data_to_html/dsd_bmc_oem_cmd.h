#pragma once

#pragma pack(1)

#define BIOS_INFO_LEN   0x20

#ifndef PACKED
#define PACKED 
#endif

//set bios information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char   Vendor[BIOS_INFO_LEN];
    unsigned char   Version[BIOS_INFO_LEN];
    unsigned char   ReleaseDate[BIOS_INFO_LEN];
}PACKED  SetBiosInfoReq_T;

//get bios information from bmc
typedef struct {
    unsigned char   CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char   Vendor[BIOS_INFO_LEN];
    unsigned char   Version[BIOS_INFO_LEN];
    unsigned char   ReleaseDate[BIOS_INFO_LEN];
}PACKED  GetBiosInfoRes_T;

#define BOARD_INFO_LEN   0x20

#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set board information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char    Manufacturer[BOARD_INFO_LEN];
    unsigned char    ProductName[BOARD_INFO_LEN];
    unsigned char    Version[BOARD_INFO_LEN];
}PACKED  SetBoardInfoReq_T;

//get board information from bmc
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char    Manufacturer[BOARD_INFO_LEN];
    unsigned char    ProductName[BOARD_INFO_LEN];
    unsigned char    Version[BOARD_INFO_LEN];
}PACKED  GetBoradInfoRes_T;

#define CPLD_INFO_LEN 0x20 
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set CPLD information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char   Manufacturer[CPLD_INFO_LEN];
    unsigned char   Firmware[CPLD_INFO_LEN]; 	//STRING
}PACKED   SetCpldInfoReq_T;

//Get CPLD information from BMC
typedef struct {
    unsigned char   CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char   Manufacturer[CPLD_INFO_LEN];
    unsigned char   Firmware[CPLD_INFO_LEN]; 	//STRING
}PACKED   GetCpldInfoRes_T;


#define CPU_INFO_LEN 0x20 
#define CPU_MAX_COUNT   0x2
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set CPU information to BMC
typedef struct {
    unsigned char    Index;//0-255  
    unsigned char    SocketDesignation[CPU_INFO_LEN];
    unsigned char    Manufacturer[CPU_INFO_LEN];
    unsigned char    Version[CPU_INFO_LEN]; 	//STRING
    unsigned char    ProcessorID[8];//	QWORD
    unsigned char    Voltage;
    unsigned char    Status;
    unsigned short   ExternalClock;
    unsigned short   MaxSpeed;
    unsigned short   CurrentSpeed;
}PACKED   SetCpuInfoReq_T;


//Get CPU information from BMC
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char    SocketDesignation[CPU_INFO_LEN];
    unsigned char    Manufacturer[CPU_INFO_LEN];
    unsigned char    Version[CPU_INFO_LEN]; 	//STRING
    unsigned char    ProcessorID[8];//	QWORD
    unsigned char    Voltage;
    unsigned char    Status;
    unsigned short   ExternalClock;
    unsigned short   MaxSpeed;
    unsigned short   CurrentSpeed;
}PACKED   GetCpuInfoRes_T;

#define FPGA_INFO_LEN 0x20 
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set FPGA information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char   Manufacturer[FPGA_INFO_LEN];
    unsigned char   Firmware[FPGA_INFO_LEN]; 	//STRING
}PACKED   SetFpgaInfoReq_T;



//Get FPGA information from BMC
typedef struct {
    unsigned char   CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char   Manufacturer[FPGA_INFO_LEN];
    unsigned char   Firmware[FPGA_INFO_LEN]; 	//STRING
}PACKED   GetFpgaInfoRes_T;


#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set PCIE GPU information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char    Bus;
    unsigned char    Dev;
    unsigned char    Fun;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned char    ClassCode[3];
    unsigned char    BridgeBus;
    unsigned char    BridgeDev;
    unsigned char    BridgeFun;
    unsigned int     LinkCap; //Link Capabilities
    unsigned short   LinkStatus;
}PACKED  SetGpuInfoReq_T;


//Get PCIE GPU information from BMC
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char    Bus;
    unsigned char    Dev;
    unsigned char    Fun;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned char    ClassCode[3];
    unsigned char    BridgeBus;
    unsigned char    BridgeDev;
    unsigned char    BridgeFun;
    unsigned int     LinkCap; //Link Capabilities
    unsigned short   LinkStatus;
}PACKED  GetGpuInfoRes_T;


#define MEMORY_INFO_LEN   0x20
#define MEMORY_MAX_SLOT_COUNT   0x20
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set memory information to BMC
typedef struct {
    unsigned char    Index;//0-255  
    unsigned char    MemoryDeviceType;
    unsigned short   Size;
    unsigned short   Speed;
    unsigned short   ConfiguredSpeed;
    unsigned char    Manufacturer[MEMORY_INFO_LEN];
    unsigned char    PartNumber[MEMORY_INFO_LEN];
    unsigned char    Locator[MEMORY_INFO_LEN];
}PACKED  SetMemoryInfoReq_T;

//Get memory information from BMC
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-32  
    unsigned char    MemoryDeviceType;
    unsigned short   Size;
    unsigned short   Speed;
    unsigned short   ConfiguredSpeed;
    unsigned char    Manufacturer[MEMORY_INFO_LEN];
    unsigned char    PartNumber[MEMORY_INFO_LEN];
    unsigned char    Locator[MEMORY_INFO_LEN];
}PACKED  GetMemoryInfoRes_T;


#define NVME_INFO_LEN 0x20
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set PCIE NVME information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char    Bus;
    unsigned char    Dev;
    unsigned char    Fun;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned char    ClassCode[3];
    unsigned char    BridgeBus;
    unsigned char    BridgeDev;
    unsigned char    BridgeFun;
    unsigned int     LinkCap; //Link Capabilities
    unsigned short   LinkStatus;
    unsigned char    ModelName[NVME_INFO_LEN]; //model string 
}PACKED  SetNvmeInfoReq_T;


//Get PCIE NVME information from BMC
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char    Bus;
    unsigned char    Dev;
    unsigned char    Fun;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned char    ClassCode[3];
    unsigned char    BridgeBus;
    unsigned char    BridgeDev;
    unsigned char    BridgeFun;
    unsigned int     LinkCap; //Link Capabilities
    unsigned short   LinkStatus;
    unsigned char    ModelName[NVME_INFO_LEN]; //model string
}PACKED  GetNvmeInfoRes_T;


#define CPU_IIO_BUS_TAB {0x42,0x6E,0x9A,0xC6,0xF2,0xFE,0xFF}

#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set PCIE information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char    Bus;
    unsigned char    Dev;
    unsigned char    Fun;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned char    ClassCode[3];
    unsigned int     LinkCap; //Link Capabilities
    unsigned short   LinkStatus;
}PACKED  SetPcieInfoReq_T;


//Get PCIE information from BMC
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char    Bus;
    unsigned char    Dev;
    unsigned char    Fun;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned char    ClassCode[3];
    unsigned int     LinkCap; //Link Capabilities for P2P bridge
    unsigned short   LinkStatus; //Link Status for P2P bridge
}PACKED  GetPcieInfoRes_T;

#define POWER_INFO_LEN 0x20 
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set Power information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char   Manufacturer[POWER_INFO_LEN];
    unsigned char   Firmware[POWER_INFO_LEN]; 	//STRING
}PACKED  SetPowerInfoReq_T;

//Get Power information from BMC
typedef struct {
    unsigned char   CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char   Manufacturer[POWER_INFO_LEN];
    unsigned char   Firmware[POWER_INFO_LEN]; 	//STRING
}PACKED  GetPowerInfoRes_T;


#define SATA_INFO_LEN 0x20
#ifndef PACKED
#define PACKED __attribute__ ((packed))
#endif
//set SATA information to BMC
typedef struct {
    unsigned char    Index;//0-255 
    unsigned char    Controller;  //1-2-3
    unsigned char    Port;//
    unsigned char    ModelName[SATA_INFO_LEN]; //model string 
}PACKED  SetSataInfoReq_T;

//Get SATA information from BMC
typedef struct {
    unsigned char    CompletionCode;
    unsigned char    Index;//0-255 
    unsigned char    Controller;  //1-2-3
    unsigned char    Port;//
    unsigned char    ModelName[SATA_INFO_LEN]; //model string 
}PACKED  GetSataInfoRes_T;


#define MAX_CPU_COUNT 2 
#define MAX_GPU_COUNT 0x20
#define MAX_PCIE_COUNT 255
#define MAX_MEMORY_COUNT 32
#define MAX_NVME_COUNT 0x20
#define MAX_SATA_COUNT 20
#define MAX_POWER_COUNT 4

typedef struct {
    void* bios;
    void* board;

    int    cpu_count;
    void* cpu[MAX_CPU_COUNT];

    int    gpu_count;
    void* gpu[MAX_GPU_COUNT];

    int    memory_count;
    void* memory[MAX_MEMORY_COUNT];

    int    pcie_count;
    void* pcie[MAX_PCIE_COUNT];

    int    nvme_count;
    void* nvme[MAX_NVME_COUNT];

    int    sata_count;
    void* sata[MAX_SATA_COUNT];

    int    power_count;
    void* power[MAX_POWER_COUNT];

    void* cpld;
    void* fpga;
}PACKED  DsdOemInfo_T;

#pragma pack()

extern SetBiosInfoReq_T  bios_info;

extern SetBoardInfoReq_T board_info;

extern SetCpldInfoReq_T  cpld_info;

extern SetFpgaInfoReq_T  fpga_info;

extern SetCpuInfoReq_T   cpu_info[MAX_CPU_COUNT];

extern SetGpuInfoReq_T   gpu_info[MAX_GPU_COUNT];

extern SetMemoryInfoReq_T memory_info[MAX_MEMORY_COUNT];

extern SetNvmeInfoReq_T   nvme_info[MAX_NVME_COUNT];

extern SetPcieInfoReq_T   pcie_info[MAX_PCIE_COUNT];

extern SetPowerInfoReq_T  power_info[MAX_POWER_COUNT];

extern SetSataInfoReq_T   sata_info[MAX_SATA_COUNT];

extern DsdOemInfo_T dsd_oem_info ; //init all data to 0 ;
