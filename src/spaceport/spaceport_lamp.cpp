#include "spaceport_lamp.h"
int Cspaceport_lamp::my_init(void *p)
{
	this->name = "Cspaceport_lamp";
	this->alias = "spaceport_lamp";
	return 0;
}

Cspaceport_lamp::Cspaceport_lamp()
{
	this->my_init();
}

Cspaceport_lamp::~Cspaceport_lamp()
{

}

#ifndef SPACEPORT_LAMP_TEST
#define SPACEPORT_LAMP_TEST 0//1
#endif

#if SPACEPORT_LAMP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
