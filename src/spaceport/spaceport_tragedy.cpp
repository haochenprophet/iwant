#include "spaceport_tragedy.h"
int Cspaceport_tragedy::my_init(void *p)
{
	this->name = "Cspaceport_tragedy";
	this->alias = "spaceport_tragedy";
	return 0;
}

Cspaceport_tragedy::Cspaceport_tragedy()
{
	this->my_init();
}

Cspaceport_tragedy::~Cspaceport_tragedy()
{

}

#ifndef SPACEPORT_TRAGEDY_TEST
#define SPACEPORT_TRAGEDY_TEST 0//1
#endif

#if SPACEPORT_TRAGEDY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
