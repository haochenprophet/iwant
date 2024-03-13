#include "material_id.h"
int Cmaterial_id::my_init(void *p)
{
	this->name = "Cmaterial_id";
	this->alias = "material_id";
	return 0;
}

Cmaterial_id::Cmaterial_id()
{
	this->my_init();
}

Cmaterial_id::~Cmaterial_id()
{

}

#ifndef MATERIAL_ID_TEST
#define MATERIAL_ID_TEST 0//1
#endif

#if MATERIAL_ID_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
