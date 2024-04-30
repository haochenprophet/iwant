#include "spaceport_nitrogen.h"
int Cspaceport_nitrogen::my_init(void *p)
{
	this->name = "Cspaceport_nitrogen";
	this->alias = "spaceport_nitrogen";
	return 0;
}

Cspaceport_nitrogen::Cspaceport_nitrogen()
{
	this->my_init();
}

Cspaceport_nitrogen::~Cspaceport_nitrogen()
{

}

#ifndef SPACEPORT_NITROGEN_TEST
#define SPACEPORT_NITROGEN_TEST 0//1
#endif

#if SPACEPORT_NITROGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
