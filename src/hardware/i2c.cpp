#include "i2c.h"
int Ci2c::my_init(void *p)
{
	this->name = "Ci2c";
	this->alias = "i2c";
	return 0;
}

Ci2c::Ci2c()
{
	this->my_init();
}

Ci2c::~Ci2c()
{

}

#ifndef I2C_TEST
#define I2C_TEST 0//1
#endif

#if I2C_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "I2C_TEST\n\n";

	return 0;
}
#endif 