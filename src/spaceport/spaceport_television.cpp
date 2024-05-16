#include "spaceport_television.h"
int Cspaceport_television::my_init(void *p)
{
	this->name = "Cspaceport_television";
	this->alias = "spaceport_television";
	return 0;
}

Cspaceport_television::Cspaceport_television()
{
	this->my_init();
}

Cspaceport_television::~Cspaceport_television()
{

}

#ifndef SPACEPORT_TELEVISION_TEST
#define SPACEPORT_TELEVISION_TEST 0//1
#endif

#if SPACEPORT_TELEVISION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
