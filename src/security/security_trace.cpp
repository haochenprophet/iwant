#include "security_trace.h"
int Csecurity_trace::my_init(void *p)
{
	this->name = "Csecurity_trace";
	this->alias = "security_trace";
	return 0;
}

Csecurity_trace::Csecurity_trace()
{
	this->my_init();
}

Csecurity_trace::~Csecurity_trace()
{

}

#ifndef SECURITY_TRACE_TEST
#define SECURITY_TRACE_TEST 0//1
#endif

#if SECURITY_TRACE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
