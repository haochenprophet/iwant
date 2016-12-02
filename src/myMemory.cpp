#include "myMemory.h"

int CmyMemory::my_init(void *p)
{
	this->name = "CmyMemory";
	this->name += std::to_string(this->id);
	this->alias = "myMemory";
	return 0;
}

CmyMemory::CmyMemory()
{
	this->size = 0;
	this->addr = NULL;
	this->type = 0;
	this->my_init();
}

CmyMemory::CmyMemory(int size)
{
	this->size = 0;
	this->addr = NULL;
	this->type = 0;
	this->my_init();
	this->allot(size);
}

CmyMemory::~CmyMemory()
{
	this->delete_me();
}

void * CmyMemory::allot(int size, int type)
{
	if (size<1) return NULL;
	try {
		this->addr = new char[size];//
		this->size = size;
	}
	catch (...)//fail
	{
		cout<< "error:CmyMemory::CmyMemory(int size)=" << size << endl;
	}

	return (void *)this->addr;
}

bool CmyMemory::isMe(void * addr,  long id,string name)
{
	return ((addr&&addr == (void *)this->addr) || (this->my_id()== id) || (name.length() && this->name == name));
}

void CmyMemory::delete_me()
{
	if (this->addr) {
		delete[](char*) this->addr;
		this->addr = NULL;
	}
}
