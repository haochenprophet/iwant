#include "home_communication.h"
int Chome_communication::my_init(void *p)
{
	this->name = "Chome_communication";
	this->alias = "home_communication";
	return 0;
}

Chome_communication::Chome_communication()
{
	this->my_init();
}

Chome_communication::~Chome_communication()
{

}

#ifndef HOME_COMMUNICATION_TEST
#define HOME_COMMUNICATION_TEST 0//1
#endif

#if HOME_COMMUNICATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
