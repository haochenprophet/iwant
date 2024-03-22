#include "code_event.h"
int Ccode_event::my_init(void *p)
{
	this->name = "Ccode_event";
	this->alias = "code_event";
	return 0;
}

Ccode_event::Ccode_event()
{
	this->my_init();
}

Ccode_event::~Ccode_event()
{

}

#ifndef CODE_EVENT_TEST
#define CODE_EVENT_TEST 0//1
#endif

#if CODE_EVENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
