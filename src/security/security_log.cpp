#include "security_log.h"
int Csecurity_log::my_init(void *p)
{
	this->name = "Csecurity_log";
	this->alias = "security_log";
	return 0;
}

Csecurity_log::Csecurity_log()
{
	this->my_init();
}

Csecurity_log::~Csecurity_log()
{

}

#ifndef SECURITY_LOG_TEST
#define SECURITY_LOG_TEST 0//1
#endif

#if SECURITY_LOG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
