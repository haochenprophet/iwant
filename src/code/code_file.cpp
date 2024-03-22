#include "code_file.h"
int Ccode_file::my_init(void *p)
{
	this->name = "Ccode_file";
	this->alias = "code_file";
	return 0;
}

Ccode_file::Ccode_file()
{
	this->my_init();
}

Ccode_file::~Ccode_file()
{

}

#ifndef CODE_FILE_TEST
#define CODE_FILE_TEST 0//1
#endif

#if CODE_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
