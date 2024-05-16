#include "spaceport_clean.h"
int Cspaceport_clean::my_init(void *p)
{
	this->name = "Cspaceport_clean";
	this->alias = "spaceport_clean";
	return 0;
}

Cspaceport_clean::Cspaceport_clean()
{
	this->my_init();
}

Cspaceport_clean::~Cspaceport_clean()
{

}

#ifndef SPACEPORT_CLEAN_TEST
#define SPACEPORT_CLEAN_TEST 0//1
#endif

#if SPACEPORT_CLEAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
