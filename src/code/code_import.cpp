#include "code_import.h"
int Ccode_import::my_init(void *p)
{
	this->name = "Ccode_import";
	this->alias = "code_import";
	return 0;
}

Ccode_import::Ccode_import()
{
	this->my_init();
}

Ccode_import::~Ccode_import()
{

}

#ifndef CODE_IMPORT_TEST
#define CODE_IMPORT_TEST 0//1
#endif

#if CODE_IMPORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
