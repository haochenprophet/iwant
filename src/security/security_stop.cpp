#include "security_stop.h"
int Csecurity_stop::my_init(void *p)
{
	this->name = "Csecurity_stop";
	this->alias = "security_stop";
	return 0;
}

Csecurity_stop::Csecurity_stop()
{
	this->my_init();
}

Csecurity_stop::~Csecurity_stop()
{

}

#ifndef SECURITY_STOP_TEST
#define SECURITY_STOP_TEST 0//1
#endif

#if SECURITY_STOP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
