#include "warship_communication.h"
int Cwarship_communication::my_init(void *p)
{
	this->name = "Cwarship_communication";
	this->alias = "warship_communication";
	return 0;
}

Cwarship_communication::Cwarship_communication()
{
	this->my_init();
}

Cwarship_communication::~Cwarship_communication()
{

}

#ifndef WARSHIP_COMMUNICATION_TEST
#define WARSHIP_COMMUNICATION_TEST 0//1
#endif

#if WARSHIP_COMMUNICATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
