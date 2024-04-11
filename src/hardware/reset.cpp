#include "reset.h"
int Creset::my_init(void *p)
{
	this->name = "Creset";
	this->alias = "reset";
	return 0;
}

Creset::Creset()
{
	this->my_init();
}

Creset::~Creset()
{

}

#ifndef RESET_TEST
#define RESET_TEST 0//1
#endif

#if RESET_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
