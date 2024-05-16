#include "security_event.h"
int Csecurity_event::my_init(void *p)
{
	this->name = "Csecurity_event";
	this->alias = "security_event";
	return 0;
}

Csecurity_event::Csecurity_event()
{
	this->my_init();
}

Csecurity_event::~Csecurity_event()
{

}

#ifndef SECURITY_EVENT_TEST
#define SECURITY_EVENT_TEST 0//1
#endif

#if SECURITY_EVENT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
