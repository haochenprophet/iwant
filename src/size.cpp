#include "size.h"
int Csize::my_init(void *p)
{
	this->name = "Csize";
	this->alias = "size";
	return 0;
}

Csize::Csize()
{
	this->my_init();
}

Csize::~Csize()
{

}

#ifndef SIZE_TEST
#define SIZE_TEST 0//1
#endif

#if SIZE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
