#include "security_map.h"
int Csecurity_map::my_init(void *p)
{
	this->name = "Csecurity_map";
	this->alias = "security_map";
	return 0;
}

Csecurity_map::Csecurity_map()
{
	this->my_init();
}

Csecurity_map::~Csecurity_map()
{

}

#ifndef SECURITY_MAP_TEST
#define SECURITY_MAP_TEST 0//1
#endif

#if SECURITY_MAP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
