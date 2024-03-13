#include "material_name.h"
int Cmaterial_name::my_init(void *p)
{
	this->name = "Cmaterial_name";
	this->alias = "material_name";
	return 0;
}

Cmaterial_name::Cmaterial_name()
{
	this->my_init();
}

Cmaterial_name::~Cmaterial_name()
{

}

#ifndef MATERIAL_NAME_TEST
#define MATERIAL_NAME_TEST 0//1
#endif

#if MATERIAL_NAME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
