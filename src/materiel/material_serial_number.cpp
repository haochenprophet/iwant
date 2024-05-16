#include "material_serial_number.h"
int Cmaterial_serial_number::my_init(void *p)
{
	this->name = "Cmaterial_serial_number";
	this->alias = "material_serial_number";
	return 0;
}

Cmaterial_serial_number::Cmaterial_serial_number()
{
	this->my_init();
}

Cmaterial_serial_number::~Cmaterial_serial_number()
{

}

#ifndef MATERIAL_SERIAL_NUMBER_TEST
#define MATERIAL_SERIAL_NUMBER_TEST 0//1
#endif

#if MATERIAL_SERIAL_NUMBER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
