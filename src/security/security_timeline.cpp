#include "security_timeline.h"
int Csecurity_timeline::my_init(void *p)
{
	this->name = "Csecurity_timeline";
	this->alias = "security_timeline";
	return 0;
}

Csecurity_timeline::Csecurity_timeline()
{
	this->my_init();
}

Csecurity_timeline::~Csecurity_timeline()
{

}

#ifndef SECURITY_TIMELINE_TEST
#define SECURITY_TIMELINE_TEST 0//1
#endif

#if SECURITY_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
