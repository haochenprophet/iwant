#include "code_setting.h"
int Ccode_setting::my_init(void *p)
{
	this->name = "Ccode_setting";
	this->alias = "code_setting";
	return 0;
}

Ccode_setting::Ccode_setting()
{
	this->my_init();
}

Ccode_setting::~Ccode_setting()
{

}

#ifndef CODE_SETTING_TEST
#define CODE_SETTING_TEST 0//1
#endif

#if CODE_SETTING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
