
#include "recognition_intel_gpio.h"

//give an example intel PCH gpio table 
bit_information GPIO_RX_State[] =
{
	{0,(char*)"GPIO RX level is 0"},
	{1,(char*)"GPIO RX level is 1"},
};

bit_information GPIO_TX_State[] =
{
	{0,(char*)"Drive a level '0' to the TX output pad"},
	{1,(char*)"Drive a level '1' to the TX output pad"},
};

int Crecognition_intel_gpio::my_init(void *p)
{
	this->name = "Crecognition_intel_gpio";
	this->alias = "recognition_intel_gpio";
	return 0;
}

Crecognition_intel_gpio::Crecognition_intel_gpio()
{
	this->my_init();
}

Crecognition_intel_gpio::~Crecognition_intel_gpio()
{

}

#ifndef RECOGNITION_INTEL_GPIO_TEST
#define RECOGNITION_INTEL_GPIO_TEST 0//1
#endif

#if RECOGNITION_INTEL_GPIO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
