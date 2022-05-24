#include "debug.h"
int Cdebug::my_init(void *p)
{
	this->name = "Cdebug";
	this->alias = "debug";
	return 0;
}

Cdebug::Cdebug()
{
	this->my_init();
}

Cdebug::~Cdebug()
{

}

#ifndef DEBUG_TEST
#define DEBUG_TEST 0//1
#endif

#if DEBUG_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
