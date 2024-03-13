#include "material_size.h"
int Cmaterial_size::my_init(void *p)
{
	this->name = "Cmaterial_size";
	this->alias = "material_size";
	return 0;
}

Cmaterial_size::Cmaterial_size()
{
	this->my_init();
}

Cmaterial_size::~Cmaterial_size()
{

}

#ifndef MATERIAL_SIZE_TEST
#define MATERIAL_SIZE_TEST 0//1
#endif

#if MATERIAL_SIZE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
