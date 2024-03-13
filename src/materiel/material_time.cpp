#include "material_time.h"
int Cmaterial_time::my_init(void *p)
{
	this->name = "Cmaterial_time";
	this->alias = "material_time";
	return 0;
}

Cmaterial_time::Cmaterial_time()
{
	this->my_init();
}

Cmaterial_time::~Cmaterial_time()
{

}

#ifndef MATERIAL_TIME_TEST
#define MATERIAL_TIME_TEST 0//1
#endif

#if MATERIAL_TIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
