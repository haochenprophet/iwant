#include "security_file.h"
int Csecurity_file::my_init(void *p)
{
	this->name = "Csecurity_file";
	this->alias = "security_file";
	return 0;
}

Csecurity_file::Csecurity_file()
{
	this->my_init();
}

Csecurity_file::~Csecurity_file()
{

}

#ifndef SECURITY_FILE_TEST
#define SECURITY_FILE_TEST 0//1
#endif

#if SECURITY_FILE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
