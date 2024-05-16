#include "code_update.h"
int Ccode_update::my_init(void *p)
{
	this->name = "Ccode_update";
	this->alias = "code_update";
	return 0;
}

Ccode_update::Ccode_update()
{
	this->my_init();
}

Ccode_update::~Ccode_update()
{

}

#ifndef CODE_UPDATE_TEST
#define CODE_UPDATE_TEST 0//1
#endif

#if CODE_UPDATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
