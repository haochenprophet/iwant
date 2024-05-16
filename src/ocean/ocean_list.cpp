#include "ocean_list.h"
int Cocean_list::my_init(void *p)
{
	this->name = "Cocean_list";
	this->alias = "ocean_list";
	return 0;
}

Cocean_list::Cocean_list()
{
	this->my_init();
}

Cocean_list::~Cocean_list()
{

}

#ifndef OCEAN_LIST_TEST
#define OCEAN_LIST_TEST 0//1
#endif

#if OCEAN_LIST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
