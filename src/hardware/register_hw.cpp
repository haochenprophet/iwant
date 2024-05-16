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
	this->hw_rw = nullptr;
}

Cregister_hw::Cregister_hw(Chardware_rw * hw_rw)
{
	this->my_init();
	this->hw_rw = hw_rw;
}

Cregister_hw::~Cregister_hw()
{

}

Chardware_rw::Chardware_rw()
{
	this->hw_addr_type = hw_reg_addr_type::none;
}

inline bool Chardware_rw::isMe(hw_reg_addr_type type)
{
	return (this->hw_addr_type == type);
}

inline int Chardware_rw::set(hw_reg_addr_type type)
{
	this->hw_addr_type = type;
	return 0;
}

void Chardware_rw::delay(int count)
{
	//delay codeing here or overload delay function by system (OS) .
	//usleep(count);
	OUT_ERROR;//check you code should not have gone here
}
//Different hardware platform should overload the delay,read,write ... interface function
//read ,write function return rule: 0 pass , >0 error ,<0 do nothing
 int Chardware_rw::byte_read(hardware_register* hw_reg)//8bit access 
 {
	 if (false == this->isMe(hw_reg->type)) //check hardware address type demo code 
	 {
		 OUT_ERROR;//check you code should not have gone here
		 return -1;//not my address type 
	 }
	 ERROR_EXIT;//should overload byte_read function  by hardware platform
	 return -1;
 }

 int Chardware_rw::word_read(hardware_register* hw_reg)//word 16 bit access 
 {
	 //switch hardware address type demo code 
	 switch (hw_reg->type)
	 {
	 case hw_reg_addr_type::io:
		 //code here io word read
		 break;
	 case hw_reg_addr_type::memory:
	 case hw_reg_addr_type::mmio:
	 case hw_reg_addr_type::pci:
		 //code here memory or mmio word read
		 break;
	 case hw_reg_addr_type::cpu_msr:
	 case hw_reg_addr_type::cpu:
		 //code herer cpu msr read
		 break;
	 default:
		 OUT_ERROR;//check you code should not have gone here
		 return -1;
	 }
	 ERROR_EXIT;//should overload word_read function by hardware platform
	 return -1;
 }

 int Chardware_rw::dword_read(hardware_register* hw_reg)//double word 32 bit access 
 {
	 ERROR_EXIT;//should overload dword_read function by hardware platform
	 return -1;
 }

 int Chardware_rw::qword_read(hardware_register* hw_reg)//quad word sh64 bit access 
 {
	 ERROR_EXIT;//should overload dword_read function by hardware platform
	 return -1;
 }

 int Chardware_rw::byte_write(hardware_register* hw_reg)//8bit access 
 {
	 AT_LINE;//should overload byte_write function by hardware platform
	 return -1;
 }

 int Chardware_rw::word_write(hardware_register* hw_reg)//word 16 bit access 
 {
	 ERROR_EXIT;//should overload word_write function by hardware platform
	 return -1;
 }

 int Chardware_rw::dword_write(hardware_register* hw_reg)//double word 32 bit access 
 {
	 ERROR_EXIT;//should overload dword_write function by hardware platform
	 return -1;
 }

 int Chardware_rw::qword_write(hardware_register* hw_reg)//quad word sh64 bit access 
 {
	 ERROR_EXIT;//should overload qword_write function by hardware platform
	 return -1;
 }

//return 0: pass ,>0 fail ,<0 do nothing
int Cregister_hw::read(hardware_register* hw_reg)
{
	if (this->hw_rw == nullptr) return -1;//not init hardware read write function
	if (hw_reg->mode == hw_reg_access_mode::byte)  return this->hw_rw->byte_read(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::word)  return this->hw_rw->word_read(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::dword) return this->hw_rw->dword_read(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::qword) return this->hw_rw->qword_read(hw_reg);

	OUT_ERROR;//check you code should not have gone here
	return -1;
}

int Cregister_hw::write(hardware_register* hw_reg)
{
	if (this->hw_rw == nullptr) return -1;//not init hardware read write function
	if (hw_reg->mode == hw_reg_access_mode::byte)  return this->hw_rw->byte_write(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::word)  return this->hw_rw->word_write(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::dword) return this->hw_rw->dword_write(hw_reg);
	if (hw_reg->mode == hw_reg_access_mode::qword) return this->hw_rw->qword_write(hw_reg);

	OUT_ERROR;//check you code should not have gone here
	return -1;
}

int Cregister_hw::read_write(hardware_register* hw_reg)
{
	int ret = this->read(hw_reg);
	if(0!=ret) return ret;
	hw_reg->write_data = hw_reg->read_data;
	return this->write(hw_reg);
}
//hw_reg->write_data to hardware register => hw_reg->read_data
int Cregister_hw::write_read(hardware_register* hw_reg)
{
	int ret = this->write(hw_reg);
	if(0!= ret) return ret;
	return this->read(hw_reg);
}

int Cregister_hw::set(Chardware_rw* hw_rw)
{
	this->hw_rw = hw_rw;
	return 0;
}

int Cregister_hw::set(hardware_register* hw_reg, hw_reg_func function, void* input, void* output, int disable)//set function 
{
	hw_reg->function = function;
	hw_reg->input = input;
	hw_reg->output = output;
	hw_reg->func_disable = disable;
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

//hw_reg_buf will replace null input or output,it can use share data between other hardware access function()
//also customize the void * input and void *outputs to share data
int Cregister_hw::execute(hw_reg_func function, void* input, void* output)
{
	if (function == nullptr) return -1;
	if (input != nullptr && output != nullptr)
	{
		return function(input, output);
	}
	//check input is nullptr ,input use  this->hw_reg_buf
	if (input == nullptr && output != nullptr)
	{
		return function((void*)this->hw_reg_buf, output);
	}
	//check output is nullptr ,output use  this->hw_reg_buf
	if (input != nullptr && output == nullptr)
	{
		return function(input, (void*)this->hw_reg_buf);
	}
	//check input and output all nullptr
	if (input == nullptr && output == nullptr)
	{
		return function((void*)this->hw_reg_buf, (void*)this->hw_reg_buf);
	}
	return -1;// not gone here
}

int Cregister_hw::execute(hardware_register* hw_reg)
{
	//1.read and set hardware register bit value use and_data,or_data
	if ((-1 & hw_reg->and_data) != -1 || (0 | hw_reg->or_data) != 0) //check if or not change(and clear or set bit) register bit,when bit change call read() write() 
	{
		hw_reg->ret = this->read(hw_reg);//get hardware register data to read_data
		if (0 != hw_reg->ret) return hw_reg->ret; //check read return 

		hw_reg->write_data = hw_reg->read_data & hw_reg->and_data | hw_reg->or_data;//set write data for write function
		hw_reg->ret = this->write(hw_reg);
		if (0 != hw_reg->ret) return hw_reg->ret; //check write return 
	}
	//2.check delay
	if (hw_reg->delay > 0)
	{
		if (this->hw_rw == nullptr) { this->delay(hw_reg->delay);}//call Object::delay
		else { this->hw_rw->delay(hw_reg->delay); }
	}

	//3.check and call function 
	if (hw_reg->function != nullptr&&hw_reg->func_disable==0) //input output can null ptr
	{
		hw_reg->func_ret=this->execute(hw_reg->function, hw_reg->input, hw_reg->output);//int Cregister_hw::execute(hw_reg_func function, void* input, void* output)
		if (0 != hw_reg->func_ret) return hw_reg->func_ret;
	}

	//4.check read back 
	if (hw_reg->read_back)
	{
		hw_reg->ret = this->read(hw_reg);
		if (0 != hw_reg->ret) return hw_reg->ret; //check read return
	}

	//5.check timeline action
	if (hw_reg->timeline!=nullptr)
	{
		this->time_action(hw_reg->timeline);
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

int  Cregister_hw::time_action(void* timeline)//deal time function
{
	// Ctimeline * t= (Ctimeline *)timeline;
	// TimePoint *tp = new TimePoint;
	// tp->now();
	// t->add(tp);
	OUT_ERROR;//check you code should not have gone here
	return 0;
}

#ifndef REGISTER_HW_TEST
#define REGISTER_HW_TEST 0//1
#endif

#if REGISTER_HW_TEST
#include "all/all_h_include.h"

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