#include "spaceport_search.h"
int Cspaceport_search::my_init(void *p)
{
	this->name = "Cspaceport_search";
	this->alias = "spaceport_search";
	return 0;
}

Cspaceport_search::Cspaceport_search()
{
	this->my_init();
}

Cspaceport_search::~Cspaceport_search()
{

}

#ifndef SPACEPORT_SEARCH_TEST
#define SPACEPORT_SEARCH_TEST 0//1
#endif

#if SPACEPORT_SEARCH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
