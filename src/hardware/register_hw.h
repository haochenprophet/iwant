#ifndef REGISTER_HW_H
#define REGISTER_HW_H

#include "../object.h"

namespace n_register_hw {

	enum class hw_reg_addr_type
	{
		none=0,
		io,//IO address
		mmio,//Memory Map IO register address 
		memory,//physical memory address or mmio address 
		cpu_msr,//x86 CPU MSR address 
		cpu,//cpu register address 
		pci,//memory map io pci space
		acpi,//memory acpi table space
		hdd,//memory hard disk mmio
		audio,//memory audio codec mmio
		ec,//EC 
		bmc,//server BMC
		sio,//super io 
		cpld,//CPLD MMIO or IO 
		fpga,//FPGA MMIO or IO 
		me,//intel ME
		usb,//usb mm IO 
		network,//network 
		gpu,//VGA HDMI .... 
	};

	enum class hw_reg_access_mode
	{
		byte,//8bit access 
		word,//word 16 bit access 
		dword,//double word 32 bit access 
		qword,//quad word sh64 bit access 
	};

	typedef long long hw_reg_addr;//64 bit hardware register address typedef 
	typedef long long hw_reg_data;//64 bit hardware register data typedef 
	typedef int (*hw_reg_func)(void* input, void* output);
//	class  Chardware_register
	typedef struct hardware_register_struct
	{
//	public:
		hw_reg_addr_type   type;//io,pci,memory ,memio,cpu,cpu_msr
		hw_reg_access_mode mode;//access mode: byte,word,dword,qword read and write
		hw_reg_addr      address;//Hardware Register Physical address :I/O, Memory, MMIO,MSR ,...
		hw_reg_data      and_data;//set and_data ,or data for clear bit or keep bit ,AND_DATA_NONE 
		hw_reg_data      or_data;//reg=reg_value & and_data | or_data ; //for  bit set or clear ,OR_DATA_NONE
		hw_reg_data      read_data;//runtime store read() data to read_data ,READ_DATA_INIT
		hw_reg_data      write_data;//runtime store write() data to write_data ,WRITE_DATA_INIT
		int  read_back;//0 :reg_data = will read to reg_data ,READ_BACK_NONE
		int  delay;//hardware register access delay or function delay
		void * input;//function input parameter //INPUT_NULL
		void * output;//function output data //OUTPUT_NULL
		hw_reg_func function;//FUNC_NULL
		int func_ret;//runtime function return data , ret_data=function(input,output); FUNC_RET_INIT
		int ret;//runtime return hardware register access and or ,read write ,return data ;HW_REG_RET_INIT
	}hardware_register;


	#define AND_DATA_NONE -1
	#define OR_DATA_NONE 0
	#define READ_DATA_INIT 0
	#define WRITE_DATA_INIT 0
	#define READ_BACK_NONE 0
	#define DELAY_NONE 0
	#define INPUT_NULL nullptr
	#define OUTPUT_NULL nullptr
	#define FUNC_NULL nullptr
	#define FUNC_RET_INIT -1
	#define HW_REG_RET_INIT -1

	#define HW_REG_BUF_LEN  0x400

	class Cregister_hw :public Object
	{
	public:
		char hw_reg_buf[HW_REG_BUF_LEN];//public buffer for function share data 
	public:
		Cregister_hw();
		~Cregister_hw();
		int my_init(void *p=nullptr);
		int execute(hardware_register* hw_reg);
		int execute(hardware_register* hw_reg, int count);
		int execute(hw_reg_func function, void * input, void * output);

		int read(hardware_register* hw_reg);
		int write(hardware_register* hw_reg);
		int set(hardware_register * hw_reg, hw_reg_func function, void* input, void* output);//set function 
		int reset(hardware_register* hw_reg, hw_reg_func function=nullptr, void* input=nullptr, void* output=nullptr);//clear function 
		virtual void delay(int count);
		virtual int byte_read(hardware_register* hw_reg);//8bit access 
		virtual int word_read(hardware_register* hw_reg);//word 16 bit access 
		virtual int dword_read(hardware_register* hw_reg);//double word 32 bit access 
		virtual int qword_read(hardware_register* hw_reg);//quad word sh64 bit access 
		virtual int byte_write(hardware_register* hw_reg);//8bit access 
		virtual int word_write(hardware_register* hw_reg);//word 16 bit access 
		virtual int dword_write(hardware_register* hw_reg);//double word 32 bit access 
		virtual int qword_write(hardware_register* hw_reg);//quad word sh64 bit access 
	};
}

using namespace n_register_hw;

#endif
