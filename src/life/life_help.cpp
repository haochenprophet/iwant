#include "life_help.h"
int Clife_help::my_init(void *p)
{
	this->name = "Clife_help";
	this->alias = "life_help";
	return 0;
}

Clife_help::Clife_help()
{
	this->my_init();
}

Clife_help::~Clife_help()
{

}

#ifndef LIFE_HELP_TEST
#define LIFE_HELP_TEST 0//1
#endif

#if LIFE_HELP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
