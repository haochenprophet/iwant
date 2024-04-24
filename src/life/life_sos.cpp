#include "life_sos.h"
int Clife_sos::my_init(void *p)
{
	this->name = "Clife_sos";
	this->alias = "life_sos";
	return 0;
}

Clife_sos::Clife_sos()
{
	this->my_init();
}

Clife_sos::~Clife_sos()
{

}

#ifndef LIFE_SOS_TEST
#define LIFE_SOS_TEST 0//1
#endif

#if LIFE_SOS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
