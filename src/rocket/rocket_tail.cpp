#include "rocket_tail.h"
int Crocket_tail::my_init(void *p)
{
	this->name = "Crocket_tail";
	this->alias = "rocket_tail";
	return 0;
}

Crocket_tail::Crocket_tail()
{
	this->my_init();
}

Crocket_tail::~Crocket_tail()
{

}

#ifndef ROCKET_TAIL_TEST
#define ROCKET_TAIL_TEST 0//1
#endif

#if ROCKET_TAIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
