#include "locate.h"
int Clocate::my_init(void *p)
{
	this->name = "Clocate";
	this->alias = "locate";
	return 0;
}

Clocate::Clocate()
{
	this->my_init();
}

Clocate::~Clocate()
{

}

#ifndef LOCATE_TEST
#define LOCATE_TEST 0//1
#endif

#if LOCATE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
