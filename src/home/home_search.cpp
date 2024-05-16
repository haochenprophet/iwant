#include "home_search.h"
int Chome_search::my_init(void *p)
{
	this->name = "Chome_search";
	this->alias = "home_search";
	return 0;
}

Chome_search::Chome_search()
{
	this->my_init();
}

Chome_search::~Chome_search()
{

}

#ifndef HOME_SEARCH_TEST
#define HOME_SEARCH_TEST 0//1
#endif

#if HOME_SEARCH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
