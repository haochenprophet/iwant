#include "security_setting.h"
int Csecurity_setting::my_init(void *p)
{
	this->name = "Csecurity_setting";
	this->alias = "security_setting";
	return 0;
}

Csecurity_setting::Csecurity_setting()
{
	this->my_init();
}

Csecurity_setting::~Csecurity_setting()
{

}

#ifndef SECURITY_SETTING_TEST
#define SECURITY_SETTING_TEST 0//1
#endif

#if SECURITY_SETTING_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
