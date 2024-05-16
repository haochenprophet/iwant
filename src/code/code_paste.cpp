#include "code_paste.h"
int Ccode_paste::my_init(void *p)
{
	this->name = "Ccode_paste";
	this->alias = "code_paste";
	return 0;
}

Ccode_paste::Ccode_paste()
{
	this->my_init();
}

Ccode_paste::~Ccode_paste()
{

}

#ifndef CODE_PASTE_TEST
#define CODE_PASTE_TEST 0//1
#endif

#if CODE_PASTE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
