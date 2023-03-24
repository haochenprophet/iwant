#include "gpio.h"
int Cgpio::my_init(void *p)
{
	this->name = "Cgpio";
	this->alias = "gpio";
	return 0;
}

Cgpio::Cgpio()
{
	this->my_init();
}

Cgpio::~Cgpio()
{

}

int Cgpio::get_native(void* gpio)//gpio point : gpio pin definition for all kinds of chips
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_to_native(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_gpio_owner(void* gpio)//set chip owner 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpio_owner(void* gpio)//get chip owner 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpio(void* gpio)//get gpio select
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_to_gpio(void* gpio)//set gpio select
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpi(void* gpio)//get gpi pin select 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_to_gpi(void* gpio)//set gpi pin select 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpo(void* gpio)//set gpi pin select 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_to_gpo(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_level(void* gpio)// get gpio(gpi+gpo) level 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_level(void* gpio)//set gpo level 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_invert(void* gpio)//set gpo level 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_invert(void* gpio)//set gpo level 
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpi_interrupt(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_gpi_interrupt(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpi_interrupt_mode(void* gpio)//edge ,level ...
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_gpi_interrupt_mode(void* gpio)//edge ,level ...
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpio_pin_power(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_gpio_pin_power(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::get_gpio_pin_reset(void* gpio)
{
	OUT_ERROR;
	return -1;
}

int Cgpio::set_gpio_pin_reset(void* gpio)
{
	OUT_ERROR;
	return -1;
}

#ifndef GPIO_TEST
#define GPIO_TEST 0//1
#endif

#if GPIO_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "GPIO_TEST\n\n";

	return 0;
}
#endif 