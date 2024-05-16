#include "home_delete.h"
int Chome_delete::my_init(void *p)
{
	this->name = "Chome_delete";
	this->alias = "home_delete";
	return 0;
}

Chome_delete::Chome_delete()
{
	this->my_init();
}

Chome_delete::~Chome_delete()
{

}

#ifndef HOME_DELETE_TEST
#define HOME_DELETE_TEST 0//1
#endif

#if HOME_DELETE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
