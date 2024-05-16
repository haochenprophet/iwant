#include "warship_radio.h"
int Cwarship_radio::my_init(void *p)
{
	this->name = "Cwarship_radio";
	this->alias = "warship_radio";
	return 0;
}

Cwarship_radio::Cwarship_radio()
{
	this->my_init();
}

Cwarship_radio::~Cwarship_radio()
{

}

#ifndef WARSHIP_RADIO_TEST
#define WARSHIP_RADIO_TEST 0//1
#endif

#if WARSHIP_RADIO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
