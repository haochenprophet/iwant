#include "SYSCALL.h"
int CSYSCALL::my_init(void *p)
{
	this->name = "CSYSCALL";
	this->alias = "SYSCALL";
	return 0;
}

CSYSCALL::CSYSCALL()
{
	this->my_init();
}

CSYSCALL::~CSYSCALL()
{

}
