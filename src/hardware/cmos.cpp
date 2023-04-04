#include "cmos.h"
#include "cmos_action.i"

CcmosActionParameter::CcmosActionParameter()
{
	this->index=0;
	this->data=0;
	this->start=0;
	this->end=0xFF;
}

int Ccmos::my_init(void *p)
{
	this->name = "Ccmos";
	this->alias = "cmos";
	return 0;
}

Ccmos::Ccmos()
{
	this->my_init();
#if LINUX_OS
	iopl(3);
#endif
}

Ccmos::~Ccmos()
{
#if LINUX_OS
	iopl(0);
#endif
}
//8bit access out to uint8_t data
int Ccmos::read(unsigned char index, unsigned char* data)
{
//int Cio::read(unsigned short index_port, unsigned char index, unsigned short data_port, unsigned char* data)
	if (index < 0x80) //intel PCH
	{
		return Cio::read((unsigned short)0x70, index, (unsigned short)0x71, data);
	}

	return Cio::read((unsigned short)0x80, index, (unsigned short)0x81, data);
}
//8bit access 
int Ccmos::write(unsigned char index, unsigned char data)
{
//	int Cio::write(unsigned short index_port, unsigned char index, unsigned short data_port, unsigned char data)
	if (index < 0x80) //intel PCH
	{
		return Cio::write((unsigned short)0x70, index, (unsigned short)0x71, data);
	}

	return Cio::write((unsigned short)0x80, index, (unsigned short)0x81, data);
}

//8bit and access 
int Ccmos::and_cmd(unsigned char index, unsigned char data)
{
	unsigned char register_data;
	//int Ccmos::read(unsigned char index, unsigned char* data)
	if (0 != this->read(index, &register_data)) return -1;
	return this->write(index,register_data & data);
}

int Ccmos::and_cmd()
{
	return this->and_cmd(this->cmos_action_parameter.index,this->cmos_action_parameter.data);
}
//8bit or access 
int Ccmos::or_cmd(unsigned char index, unsigned char data)
{
	unsigned char register_data;
	//int Ccmos::read(unsigned char index, unsigned char* data)
	if (0 != this->read(index, &register_data)) return -1;
	return this->write(index, register_data | data);
}

int Ccmos::or_cmd()
{
	return this->or_cmd(this->cmos_action_parameter.index, this->cmos_action_parameter.data);
}

int Ccmos::read_cmd(unsigned char index)//8bit access out to uint8_t data
{
	int ret;
	unsigned char data;
	ret=read(index,&data);
	if(this->silent !=1 ) printf("index=%02X,data=%02X\n",index,data);
	return ret;
}

int Ccmos::read_cmd()
{
	return this->read_cmd(this->cmos_action_parameter.index);
}

int Ccmos::write_cmd()
{
	return this->write((unsigned char) this->cmos_action_parameter.index,(unsigned char) this->cmos_action_parameter.data);
}

int Ccmos::rw_cmd()//8bit access 
{
	if(0!=this->read_cmd()) return -1;
	return this->write_cmd();
}

int Ccmos::do_action(void * a)
{
	//printf("this->action =%lld\n",this->action);//test ok
	if (this->action == (ACTION_T)CmosAtcion::read || this->action == (ACTION_T)CmosAtcion::r ||this->action == (ACTION_T)CmosAtcion::R) this->set_main_ret(this->read_cmd());
	if (this->action == (ACTION_T)CmosAtcion::write || this->action == (ACTION_T)CmosAtcion::w || this->action == (ACTION_T)CmosAtcion::W) this->set_main_ret(this->write_cmd());
	if (this->action == (ACTION_T)CmosAtcion::_and || this->action == (ACTION_T)CmosAtcion::a || this->action == (ACTION_T)CmosAtcion::A) this->set_main_ret(this->and_cmd());
	if (this->action == (ACTION_T)CmosAtcion::_or || this->action == (ACTION_T)CmosAtcion::o || this->action == (ACTION_T)CmosAtcion::O) this->set_main_ret(this->or_cmd());
	if (this->action == (ACTION_T)CmosAtcion::rw || this->action == (ACTION_T)CmosAtcion::RW) this->set_main_ret(this->rw_cmd());
	return 0;
}

//set file action parameter from user input command line
int Ccmos::set_action_parameter(int argc, char* argv[])//override the functions of the Objet class
{

	//argv[1]=read argv[2]=<index>
	if (this->action == (ACTION_T)CmosAtcion::read || this->action == (ACTION_T)CmosAtcion::r ||this->action == (ACTION_T)CmosAtcion::R)
	{
		//char * Object::str2i(const char *str,int * data )
		if (argc < 3) return -1;
		this->str2i(argv[2],& this->cmos_action_parameter.index);
		//printf("this->cmos_action_parameter.index=%d\n",this->cmos_action_parameter.index);//test ok
	}

	//argv[1]=dump argv[2]=[start] argv[3]=[end]"
	if (this->action == (ACTION_T)CmosAtcion::dump || this->action == (ACTION_T)CmosAtcion::d ||this->action == (ACTION_T)CmosAtcion::D)
	{
		//char * Object::str2i(const char *str,int * data )
		this->cmos_action_parameter.start=0;
		this->cmos_action_parameter.end=0xFF;

		if(argc > 3)
		{
			this->str2i(argv[2],& this->cmos_action_parameter.start);
			this->str2i(argv[3],& this->cmos_action_parameter.end);
		}

		if(argc == 3)
		{
			this->str2i(argv[2],& this->cmos_action_parameter.start);
		}		
	}

	//argv[1]=write argv[2]=<index> argv[3]=<data>"
	if (this->action == (ACTION_T)CmosAtcion::write || this->action == (ACTION_T)CmosAtcion::w ||this->action == (ACTION_T)CmosAtcion::W ||
		this->action == (ACTION_T)CmosAtcion::_and || this->action == (ACTION_T)CmosAtcion::a ||this->action == (ACTION_T)CmosAtcion::A ||
		this->action == (ACTION_T)CmosAtcion::_or || this->action == (ACTION_T)CmosAtcion::o ||this->action == (ACTION_T)CmosAtcion::O ||
		this->action == (ACTION_T)CmosAtcion::rw || this->action == (ACTION_T)CmosAtcion::RW 
		)
	{
		if (argc < 4) return -1;
		this->str2i(argv[2],& this->cmos_action_parameter.index);
		this->str2i(argv[3],& this->cmos_action_parameter.data);
	}

	return 0;
}

int Ccmos::deal_cmd(int argc, char *argv[])
{
	//this->list_cmd(argc, argv);//test ok
	
	//step1.check user input
	if (argc < 2)
	{
		this->action_help(cmos_action, (int)CMOS_ACTION_COUNT);
		return -1;
	}

	//step2.init this->cmd store user input parameter
	this->cmd.argc = argc;//store user input parameter
	this->cmd.argv = argv;

	//step3.get silent cmd
	if (this->get_cmd(argc, argv, (char*)"silent") > 0) this->silent = 1;

	//step4.get action
	this->action = this->get_action(cmos_action, (int)CMOS_ACTION_COUNT, argv[1]);
	if (this->action == 0) this->action = atoll(argv[1]);//no name 
	if (this->action == 0) return -1;

	//step5.set action parameter
	if(0!=this->set_action_parameter(argc, argv))
	{
		this->action_help(cmos_action, (int)CMOS_ACTION_COUNT);
		return -1;		
	}

	//step6.do action 
	this->do_action();

	return 0;
}

#ifndef CMOS_TEST
#define CMOS_TEST 0//1
#endif

#if CMOS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;
	Ccmos cmos;
	cmos.deal_cmd(argc, argv);
	return 	cmos.main_return_value;//this->set_main_ret
}
#endif
