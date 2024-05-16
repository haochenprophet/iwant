#include "mars_communication.h"
int Cmars_communication::my_init(void *p)
{
	this->name = "Cmars_communication";
	this->alias = "mars_communication";
	return 0;
}

Cmars_communication::Cmars_communication()
{
	this->my_init();
}

Cmars_communication::~Cmars_communication()
{

}

#ifndef MARS_COMMUNICATION_TEST
#define MARS_COMMUNICATION_TEST 0//1
#endif

#if MARS_COMMUNICATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
