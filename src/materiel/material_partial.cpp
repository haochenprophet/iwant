#include "material_partial.h"
int Cmaterial_partial::my_init(void *p)
{
	this->name = "Cmaterial_partial";
	this->alias = "material_partial";
	return 0;
}

Cmaterial_partial::Cmaterial_partial()
{
	this->my_init();
}

Cmaterial_partial::~Cmaterial_partial()
{

}

#ifndef MATERIAL_PARTIAL_TEST
#define MATERIAL_PARTIAL_TEST 0//1
#endif

#if MATERIAL_PARTIAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
