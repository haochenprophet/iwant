#include "myMemory.h"

CmyMemory::CmyMemory()
{
	this->name = "CmyMemory";
	this->name += std::to_string(this->my_id());
	this->alias = "myMemory";
	this->allot();//call for init 
}

CmyMemory::CmyMemory(int size)
{
	this->name = "CmyMemory";
	this->name += std::to_string(this->my_id());
	this->alias = "myMemory";
	this->allot(size);
}

CmyMemory::~CmyMemory()
{
	this->delete_me();
}

void * CmyMemory::allot(int size, int type)
{
	this->size = 0;
	this->addr = NULL;

	if (size) {
		try {
			this->addr = new char[size];//
			this->size = size;
		}
		catch (...)//fail
		{
			cout<< "error:CmyMemory::CmyMemory(int size)=" << size << endl;
		}
	}

	this->type =type;

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
