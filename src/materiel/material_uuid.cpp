#include "material_uuid.h"
int Cmaterial_uuid::my_init(void *p)
{
	this->name = "Cmaterial_uuid";
	this->alias = "material_uuid";
	return 0;
}

Cmaterial_uuid::Cmaterial_uuid()
{
	this->my_init();
}

Cmaterial_uuid::~Cmaterial_uuid()
{

}

#ifndef MATERIAL_UUID_TEST
#define MATERIAL_UUID_TEST 0//1
#endif

#if MATERIAL_UUID_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
