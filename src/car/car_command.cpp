#include "car_command.h"
int Ccar_command::my_init(void *p)
{
	this->name = "Ccar_command";
	this->alias = "car_command";
	return 0;
}

Ccar_command::Ccar_command()
{
	this->my_init();
}

Ccar_command::~Ccar_command()
{

}

#ifndef CAR_COMMAND_TEST
#define CAR_COMMAND_TEST 0//1
#endif

#if CAR_COMMAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
