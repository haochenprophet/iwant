#include "status.h"
int Cstatus::my_init(void *p)
{
	this->name = "Cstatus";
	this->alias = "status";
	return 0;
}

Cstatus::Cstatus()
{
	this->my_init();
}

Cstatus::~Cstatus()
{

}

#ifndef STATUS_TEST
#define STATUS_TEST 0//1
#endif

#if STATUS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
