#include "hello.h"
int Chello::my_init(void *p)
{
	this->name = "Chello";
	this->alias = "hello";
	return 0;
}

Chello::Chello()
{
	this->my_init();
}

Chello::~Chello()
{

}
