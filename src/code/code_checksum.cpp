#include "code_checksum.h"
int Ccode_checksum::my_init(void *p)
{
	this->name = "Ccode_checksum";
	this->alias = "code_checksum";
	return 0;
}

Ccode_checksum::Ccode_checksum()
{
	this->my_init();
}

Ccode_checksum::~Ccode_checksum()
{

}

#ifndef CODE_CHECKSUM_TEST
#define CODE_CHECKSUM_TEST 0//1
#endif

#if CODE_CHECKSUM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
