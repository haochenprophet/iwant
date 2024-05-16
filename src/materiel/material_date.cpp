#include "material_date.h"
int Cmaterial_date::my_init(void *p)
{
	this->name = "Cmaterial_date";
	this->alias = "material_date";
	return 0;
}

Cmaterial_date::Cmaterial_date()
{
	this->my_init();
}

Cmaterial_date::~Cmaterial_date()
{

}

#ifndef MATERIAL_DATE_TEST
#define MATERIAL_DATE_TEST 0//1
#endif

#if MATERIAL_DATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
