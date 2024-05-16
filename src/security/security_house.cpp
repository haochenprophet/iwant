#include "security_house.h"
int Csecurity_house::my_init(void *p)
{
	this->name = "Csecurity_house";
	this->alias = "security_house";
	return 0;
}

Csecurity_house::Csecurity_house()
{
	this->my_init();
}

Csecurity_house::~Csecurity_house()
{

}

#ifndef SECURITY_HOUSE_TEST
#define SECURITY_HOUSE_TEST 0//1
#endif

#if SECURITY_HOUSE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
