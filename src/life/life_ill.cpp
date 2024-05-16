#include "life_ill.h"
int Clife_ill::my_init(void *p)
{
	this->name = "Clife_ill";
	this->alias = "life_ill";
	return 0;
}

Clife_ill::Clife_ill()
{
	this->my_init();
}

Clife_ill::~Clife_ill()
{

}

#ifndef LIFE_ILL_TEST
#define LIFE_ILL_TEST 0//1
#endif

#if LIFE_ILL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
