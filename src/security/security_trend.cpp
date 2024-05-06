#include "security_trend.h"
int Csecurity_trend::my_init(void *p)
{
	this->name = "Csecurity_trend";
	this->alias = "security_trend";
	return 0;
}

Csecurity_trend::Csecurity_trend()
{
	this->my_init();
}

Csecurity_trend::~Csecurity_trend()
{

}

#ifndef SECURITY_TREND_TEST
#define SECURITY_TREND_TEST 0//1
#endif

#if SECURITY_TREND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
