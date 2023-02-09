#include "register_hw.h"
int Cregister_hw::my_init(void *p)
{
	this->name = "Cregister_hw";
	this->alias = "register_hw";
	return 0;
}

Cregister_hw::Cregister_hw()
{
	this->my_init();
}

Cregister_hw::~Cregister_hw()
{


}

void Cregister_hw::delay(int count)
{
	//delay codeing here or overload delay function by system (OS) .
	//usleep(count);
}
//Different hardware platform should overload the delay,read,write ... interface function
//read ,write function return rule: 0 pass , >0 error ,<0 do nothing
 int Cregister_hw::byte_read(hardware_register* hw_reg)//8bit access 
 {
	 ERROR_EXIT;//should overload byte_read function  by hardware platform
	 return -1;
 }
 int Cregister_hw::word_read(hardware_register* hw_reg)//word 16 bit access 
 {
	 ERROR_EXIT;//should overload word_read function by hardware platform
	 return -1;
 }
 int Cregister_hw::dword_read(hardware_register* hw_reg)//double word 32 bit access 
 {
	 ERROR_EXIT;//should overload dword_read function by hardware platform
	 return -1;
 }
 int Cregister_hw::qword_read(hardware_register* hw_reg)//quad word sh64 bit access 
 {
	 ERROR_EXIT;//should overload dword_read function by hardware platform
	 return -1;
 }
 int Cregister_hw::byte_write(hardware_register* hw_reg)//8bit access 
 {
	 AT_LINE;//should overload byte_write function by hardware platform
	 return -1;
 }
 int Cregister_hw::word_write(hardware_register* hw_reg)//word 16 bit access 
 {
	 ERROR_EXIT;//should overload word_write function by hardware platform
	 return -1;
 }
 int Cregister_hw::dword_write(hardware_register* hw_reg)//double word 32 bit access 
 {
	 ERROR_EXIT;//should overload dword_write function by hardware platform
	 return -1;
 }
 int Cregister_hw::qword_write(hardware_register* hw_reg)//quad word sh64 bit access 
 {
	 ERROR_EXIT;//should overload qword_write function by hardware platform
	 return -1;
 }

//return 0: pass ,>0 fail ,<0 do nothing
int Cregister_hw::read(hardware_register* hw_reg)
{
	if (hw_reg->mode == hw_reg_access_mode::byte)  return this->byte_read(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::word)  return this->word_read(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::dword) return this->dword_read(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::qword) return this->qword_read(hw_reg);

	OUT_ERROR;//check you code should not have gone here
	return -1;
}

int Cregister_hw::write(hardware_register* hw_reg)
{
	if (hw_reg->mode == hw_reg_access_mode::byte)  return this->byte_write(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::word)  return this->word_write(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::dword) return this->dword_write(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::qword) return this->qword_write(hw_reg);

	OUT_ERROR;//check you code should not have gone here
	return -1;
}

int Cregister_hw::read_write(hardware_register* hw_reg)
{
	if(0!=this->read(hw_reg)) return -1;
	hw_reg->write_data = hw_reg->read_data;
	return this->write(hw_reg);
}

int Cregister_hw::set(hardware_register* hw_reg, hw_reg_func function, void* input, void* output)//set function 
{
	hw_reg->function = function;
	hw_reg->input = input;
	hw_reg->output = output;
	return 0;
}
//count=tab item count ,return set count 
int Cregister_hw::set(hardware_register* hw_reg_tab, int count_tab, hardware_register* hw_reg,bool clear_func)//Update hw_reg.fnction to hw_reg_tab.function 
{
	int i, set_count =0;
	for (i = 0; i < count_tab; i++)
	{
		if (
			hw_reg_tab[i].type == hw_reg->type &&
			hw_reg_tab[i].mode == hw_reg->mode &&
			hw_reg_tab[i].address == hw_reg->address &&
			hw_reg_tab[i].and_data == hw_reg->and_data &&
			hw_reg_tab[i].or_data == hw_reg->or_data
			)
		{
			if (clear_func) {this->set(&hw_reg_tab[i], nullptr, nullptr, nullptr); }
			else { this->set(&hw_reg_tab[i], hw_reg->function, hw_reg->input, hw_reg->output); }
				
			hw_reg_tab[i].read_back = hw_reg->read_back;
			hw_reg_tab[i].delay = hw_reg->delay;

			set_count++;
		}
	}
	return set_count;
}

int Cregister_hw::reset(hardware_register* hw_reg, hw_reg_func function, void* input, void* output)//reset function 
{
	return this->set(hw_reg, function, input, output);
}

int Cregister_hw::execute(hw_reg_func function, void* input, void* output)
{
	if (function == nullptr) return -1;
	return function(input, output);
}

int Cregister_hw::execute(hardware_register* hw_reg)
{
	//1.read and set hardware register bit value use and_data,or_data
	hw_reg->ret = this->read(hw_reg);//get hardware register data to read_data
	if (0!=hw_reg->ret) return hw_reg->ret; //check read return 

	hw_reg->write_data = hw_reg->read_data & hw_reg->and_data | hw_reg->or_data;//set write data for write function
	hw_reg->ret = this->write(hw_reg);
	if (0 != hw_reg->ret) return hw_reg->ret; //check write return 

	//2.check delay
	if (hw_reg->delay > 0) this->delay(hw_reg->delay);

	//3.check and call function 
	if (hw_reg->function != nullptr) //input output can null ptr
	{
		if (hw_reg->input != nullptr && hw_reg->output != nullptr)
		{
			hw_reg->func_ret = hw_reg->function(hw_reg->input, hw_reg->output);
		}
		//check input is nullptr ,input use  this->hw_reg_buf
		if (hw_reg->input == nullptr && hw_reg->output != nullptr)
		{
			hw_reg->func_ret = hw_reg->function((void *) this->hw_reg_buf, hw_reg->output);
		}
		//check output is nullptr ,output use  this->hw_reg_buf
		if (hw_reg->input != nullptr && hw_reg->output == nullptr)
		{
			hw_reg->func_ret = hw_reg->function(hw_reg->input, (void*)this->hw_reg_buf);
		}
		//check input and output all nullptr
		if (hw_reg->input == nullptr && hw_reg->output == nullptr)
		{
			hw_reg->func_ret = hw_reg->function((void*)this->hw_reg_buf, (void*)this->hw_reg_buf);
		}

		if (0 != hw_reg->func_ret) return hw_reg->func_ret;
	}

	//4.check read back 
	if (hw_reg->read_back)
	{
		hw_reg->ret = this->read(hw_reg);
		if (0 != hw_reg->ret) return hw_reg->ret; //check read return
	}

	return 0;//success return pass 
}
//return 0: pass ,> 0 = error + do nothing count 
int Cregister_hw::execute(hardware_register* hw_reg, int count)
{
	int i,ret=0;
	for (i = 0; i < count; i++)
	{
		if(0!=this->execute((hardware_register*) & hw_reg[i]))//call execute(hardware_register* hw_reg)
		{
			ret++;//for check all execut is success 
		}
	}
	return ret; 
}


#ifndef REGISTER_HW_TEST
#define REGISTER_HW_TEST 0//1
#endif

#if REGISTER_HW_TEST
#include "all_h_include.h"

//io table //test code 
#define REG_BASE_ADDRESS 0x500
hardware_register io_register_tab[] = {
	{hw_reg_addr_type::io,hw_reg_access_mode::byte,REG_BASE_ADDRESS + 0,AND_DATA_NONE,OR_DATA_NONE,READ_DATA_INIT,WRITE_DATA_INIT,READ_BACK_NONE,DELAY_NONE,INPUT_NULL,OUTPUT_NULL,FUNC_NULL,FUNC_RET_INIT,HW_REG_RET_INIT},//do nothing 
	{hw_reg_addr_type::io,hw_reg_access_mode::byte,REG_BASE_ADDRESS + 1,0xFE,0x1,READ_DATA_INIT,WRITE_DATA_INIT,READ_BACK_NONE,DELAY_NONE,INPUT_NULL,OUTPUT_NULL,FUNC_NULL,FUNC_RET_INIT,HW_REG_RET_INIT},//set bit 0 =1
};

#define IO_REG_TAB_COUNT (sizeof(io_register_tab)/sizeof(hardware_register))

int main(int argc, char *argv[])
{
	std::cout << "REGISTER_HW_TEST\n\n";
	Cregister_hw reg;
	reg.execute(io_register_tab, IO_REG_TAB_COUNT);
	return 0;
}
#endif 