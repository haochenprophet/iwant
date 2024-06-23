#include "myMemory.h"

int CmyMemory::my_init(void *p)
{
	this->allot_flag=0;
	this->name = "CmyMemory";
	this->alias = "myMemory";
	return 0;
}

CmyMemory::CmyMemory()
{
	this->size = 0;
	this->addr = nullptr;
	this->type = 0;
	this->my_init();
}

CmyMemory::CmyMemory(int size)
{
	this->size = 0;
	this->addr = nullptr;
	this->type = 0;
	this->my_init();
	this->allot(size);
}

CmyMemory::~CmyMemory()
{
	this->delete_me();
}

char* CmyMemory::begin()
{
	return this->addr;
}

char * CmyMemory::end()
{
	return this->addr + this->size;
}

void * CmyMemory::allot(size_t size, int type,int re_allot)
{
	if (size<1) return nullptr;

	if(this->allot_flag)//exist memory
	{
		if(!re_allot) return nullptr;
		if(size==this->size) return (void *)this->addr;
		this->delete_me();//delete me for re_allot
	}

	try {
		this->addr = new char[size];//
		this->size = size;
		this->allot_flag=1;
	}
	catch (...)//fail
	{
		std::cout<< "error:CmyMemory::CmyMemory(int size)=" << size << endl;
	}

	return (void *)this->addr;
}

bool CmyMemory::isMe(void * addr,  long id,string name)
{
	return ((addr&&addr == (void *)this->addr) || (this->my_id()== id) || (name.length() && this->name == name));
}

void CmyMemory::delete_me()
{
	if (this->addr&&this->allot_flag)
	{
		delete[](char*) this->addr;
		this->addr = nullptr;
		this->allot_flag=0;
	}
}

int CmyMemory::set_addr(char *start,char *end,int type)
{
	if(this->allot_flag) return -1;
	if(end>start){
		this->addr=start;
		this->size=(int)(end-start);
	}
	else
	{
		this->addr=end;
		this->size=(int)(start-end);	
	}
	this->type=type;
	return 0;
}

int CmyMemory::set_addr(char *start,int size,int type)
{
	if(this->allot_flag) return -1;
	this->addr=start;
	this->size=size;
	this->type=type;
	return 0;
}
