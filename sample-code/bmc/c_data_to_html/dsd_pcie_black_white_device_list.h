#pragma once

#pragma pack(1)


#ifndef PACKED
#define PACKED 
#endif

#define PCIE_DEVICE_BLACK_WHITE_LIST_COUNT  0x1000

enum DsdDeviceType
{
    UnknowDevice = 0,//bit[0-15] =0
    PcieDevice = 1,//bit 0 =1 
    GpuDevice = 2,//bit 1 =1  
    NvmeDevice = 4,//bit 2=1 
    NetworkDevice = 8,//bit 3=1 
    RaidDevice = 0x10,//bit 4=1
    UsbDevice=0x20,//bit 5=1
};

enum DsdDeviceFlag
{
    UnverifiedDevice = 0,//bit[0-15] =0 action: need test 
    BlacklistDevice = 1,//bit 0 =1  action: neet remove device 
    WhitelistedDevice = 2,//bit 1 =1  pass 
    DamagedDevice = 4,//bit 2=1  action: neet remove device 
    UnsupportedDevice = 8,//bit 3=1  action: neet remove device 
};

typedef struct {
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned short   DeviceType;//PCIE : GPU , NVME ,NETWORK ; RAID ; USB
    unsigned int     DeviceFlag;//
}PACKED  SetPcieDeviceBlackWhiteList_T;

typedef struct {
    unsigned char    CompletionCode;
    unsigned short   DeviceID;
    unsigned short   VendorID;
    unsigned short   DeviceType;//PCIE : GPU , NVME ,NETWORK ; RAID ; USB
    unsigned int     DeviceFlag;//Unverified,Black,Whitelist,Damaged , Unsupported
}PACKED  GetPcieDeviceBlackWhiteList_T;
