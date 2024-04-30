#include "spaceport_delete.h"
int Cspaceport_delete::my_init(void *p)
{
	this->name = "Cspaceport_delete";
	this->alias = "spaceport_delete";
	return 0;
}

Cspaceport_delete::Cspaceport_delete()
{
	this->my_init();
}

Cspaceport_delete::~Cspaceport_delete()
{

}

#ifndef SPACEPORT_DELETE_TEST
#define SPACEPORT_DELETE_TEST 0//1
#endif

#if SPACEPORT_DELETE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
