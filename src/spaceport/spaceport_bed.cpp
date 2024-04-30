#include "spaceport_bed.h"
int Cspaceport_bed::my_init(void *p)
{
	this->name = "Cspaceport_bed";
	this->alias = "spaceport_bed";
	return 0;
}

Cspaceport_bed::Cspaceport_bed()
{
	this->my_init();
}

Cspaceport_bed::~Cspaceport_bed()
{

}

#ifndef SPACEPORT_BED_TEST
#define SPACEPORT_BED_TEST 0//1
#endif

#if SPACEPORT_BED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
