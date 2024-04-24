#include "life.h"
int Clife::my_init(void *p)
{
	this->name = "Clife";
	this->alias = "life";
	return 0;
}

Clife::Clife()
{
	this->my_init();
}

Clife::~Clife()
{

}

#ifndef LIFE_TEST
#define LIFE_TEST 0//1
#endif

#if LIFE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
