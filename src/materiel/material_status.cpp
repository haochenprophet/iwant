#include "material_status.h"
int Cmaterial_status::my_init(void *p)
{
	this->name = "Cmaterial_status";
	this->alias = "material_status";
	return 0;
}

Cmaterial_status::Cmaterial_status()
{
	this->my_init();
}

Cmaterial_status::~Cmaterial_status()
{

}

#ifndef MATERIAL_STATUS_TEST
#define MATERIAL_STATUS_TEST 0//1
#endif

#if MATERIAL_STATUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
