

#include "dsd_pcie_black_white_device_list.h"

SetPcieDeviceBlackWhiteList_T pcie_device_black_white_list_buffer [PCIE_DEVICE_BLACK_WHITE_LIST_COUNT] = { 0 };


SetPcieDeviceBlackWhiteList_T * GetPcieBlackWhiteList(SetPcieDeviceBlackWhiteList_T* device)
{
	int i;//index
	for (i = 0; i < PCIE_DEVICE_BLACK_WHITE_LIST_COUNT; i++)
	{
		if (pcie_device_black_white_list_buffer[i].DeviceID == device->DeviceID && pcie_device_black_white_list_buffer[i].VendorID == device->VendorID)
		{
			return & pcie_device_black_white_list_buffer[i];
		}
	}

	return (SetPcieDeviceBlackWhiteList_T*) 0; //not exist 
}

int SetPcieBlackWhiteList(SetPcieDeviceBlackWhiteList_T* device)
{
	SetPcieDeviceBlackWhiteList_T * dev;
	SetPcieDeviceBlackWhiteList_T  null_dev = { 0 };

	if (device->VendorID == 0|| device->VendorID == 0xFFFF) { return -1; } // check VendorID 

	dev =GetPcieBlackWhiteList(device); //get device in list 
	
	if (dev != 0) //find device locate in list ,update the device flag and type
	{
		dev->DeviceFlag = device->DeviceFlag;
		dev->DeviceType = device->DeviceType;
		return 0;//ret sucess 
	}
	
	//dev ==0  not find ,add the device to list buffer 
	dev = GetPcieBlackWhiteList(&null_dev); //get null device in list buffer 

	if (dev == 0) {//error out of buffer check: PCIE_DEVICE_BLACK_WHITE_LIST_COUNT
		return -1;
	}

	//copy device to list buffer 
	dev->VendorID = device->VendorID;
	dev->DeviceID = device->DeviceID;
	dev->DeviceFlag = device->DeviceFlag;
	dev->DeviceType = device->DeviceType;

	return 0;//ret sucess 
}
