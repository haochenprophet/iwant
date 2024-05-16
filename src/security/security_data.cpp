#include "security_data.h"
int Csecurity_data::my_init(void *p)
{
	this->name = "Csecurity_data";
	this->alias = "security_data";
	return 0;
}

Csecurity_data::Csecurity_data()
{
	this->my_init();
}

Csecurity_data::~Csecurity_data()
{

}

#ifndef SECURITY_DATA_TEST
#define SECURITY_DATA_TEST 0//1
#endif

#if SECURITY_DATA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
