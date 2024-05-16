#include "voltage.h"
int Cvoltage::my_init(void *p)
{
	this->name = "Cvoltage";
	this->alias = "voltage";
	return 0;
}

Cvoltage::Cvoltage()
{
	this->my_init();
}

Cvoltage::~Cvoltage()
{

}

#ifndef VOLTAGE_TEST
#define VOLTAGE_TEST 0//1
#endif

#if VOLTAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
