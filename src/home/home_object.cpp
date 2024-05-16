#include "home_object.h"
int Chome_object::my_init(void *p)
{
	this->name = "Chome_object";
	this->alias = "home_object";
	return 0;
}

Chome_object::Chome_object()
{
	this->my_init();
}

Chome_object::~Chome_object()
{

}

#ifndef HOME_OBJECT_TEST
#define HOME_OBJECT_TEST 0//1
#endif

#if HOME_OBJECT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
