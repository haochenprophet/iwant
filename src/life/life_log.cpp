#include "life_log.h"
int Clife_log::my_init(void *p)
{
	this->name = "Clife_log";
	this->alias = "life_log";
	return 0;
}

Clife_log::Clife_log()
{
	this->my_init();
}

Clife_log::~Clife_log()
{

}

#ifndef LIFE_LOG_TEST
#define LIFE_LOG_TEST 0//1
#endif

#if LIFE_LOG_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
