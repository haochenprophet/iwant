#include "car_serial_port.h"
int Ccar_serial_port::my_init(void *p)
{
	this->name = "Ccar_serial_port";
	this->alias = "car_serial_port";
	return 0;
}

Ccar_serial_port::Ccar_serial_port()
{
	this->my_init();
}

Ccar_serial_port::~Ccar_serial_port()
{

}

#ifndef CAR_SERIAL_PORT_TEST
#define CAR_SERIAL_PORT_TEST 0//1
#endif

#if CAR_SERIAL_PORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
