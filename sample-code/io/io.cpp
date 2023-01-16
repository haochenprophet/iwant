
typedef unsigned short IoAddress_T;//16bit io address 
typedef unsigned char  IoData_T; //8 bit io data 

typedef struct IoAndOrStruct
{
	IoAddress_T address;
	IoData_T and_data;
	IoData_T or_data;
	int delay;
	//io function 
	void* input;//function input parameter
	void* output;//function output data
	int(* function)(void* input, void* output);
	int return_data;//function return data
}IoAndOrStruct_S ;

//test function
unsigned char input_buf[256];
unsigned char output_buf[256];

int test_function(void* input, void* output)
{
	return 0;
}

//io table
#define IO_BASE_ADDRESS  0x500

IoAndOrStruct_S InitTestTable [] = {
	{IO_BASE_ADDRESS + 0,0xFF,0x1,0,0,0,0},//and FF Or 1 :bit0=1, delay 0 ,no function
	{IO_BASE_ADDRESS + 2,0xFE,0x0,0,0,0,0},//and FE or 0 :bit0=0,delay 0 ,no function
	{IO_BASE_ADDRESS + 3,0xFE,0x0,0,(void *)input_buf,(void *) output_buf,test_function},//and FE or 0 :bit0=0,delay 0 ,run test_function
};

#define INIT_TEST_TABLE_COUNT (sizeof(InitTestTable)/sizeof(IoAndOrStruct_S))

//read io data
unsigned char byte_io_read(IoAddress_T io_addr)
{
	unsigned char byte_data=0;
	//IO read func code add hear
	return byte_data;
}

//only write io data
void byte_io_write(IoAddress_T io_addr,unsigned char write_data)
{
	//IO write func code add hear
}

//write and read back io data
unsigned char byte_io_write_read(IoAddress_T io_addr, unsigned char write_data)
{
	byte_io_write(io_addr, write_data);
	return byte_io_read(io_addr);
}

void io_delay(int delay_count)
{

}

int execute_io_table(IoAndOrStruct_S* io_tab, int item_count)
{
	int n = 0;

	for (n = 0; n < item_count; ++n )
	{

	/*
		IoData_T io_data;
		io_data = byte_io_read(io_tab[n].address);
		io_data = io_data & io_tab[n].and_data; //bit and 
		io_data = io_data | io_tab[n].or_data; //bit or
		byte_io_write(io_tab[n].address, io_data);
	*/

		byte_io_write(io_tab[n].address, byte_io_read(io_tab[n].address) & io_tab[n].and_data | io_tab[n].or_data);

		if (io_tab[n].delay > 0) io_delay(io_tab[n].delay);	//check and delay

		if (io_tab[n].input != 0 && io_tab[n].output != 0 && io_tab[n].function != 0)		//check and call io function
		{
			io_tab[n].return_data = io_tab[n].function(io_tab[n].input, io_tab[n].output);
		}
	}

	return 0;
}

/* test code 
void io_main_test()
{
	int ret = 0;
	ret = execute_io_table(InitTestTable, INIT_TEST_TABLE_COUNT);
}
*/