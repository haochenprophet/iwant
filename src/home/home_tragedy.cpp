#include "home_tragedy.h"
int Chome_tragedy::my_init(void *p)
{
	this->name = "Chome_tragedy";
	this->alias = "home_tragedy";
	return 0;
}

Chome_tragedy::Chome_tragedy()
{
	this->my_init();
}

Chome_tragedy::~Chome_tragedy()
{

}

#ifndef HOME_TRAGEDY_TEST
#define HOME_TRAGEDY_TEST 0//1
#endif

#if HOME_TRAGEDY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
