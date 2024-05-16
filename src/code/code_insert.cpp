#include "code_insert.h"
int Ccode_insert::my_init(void *p)
{
	this->name = "Ccode_insert";
	this->alias = "code_insert";
	return 0;
}

Ccode_insert::Ccode_insert()
{
	this->my_init();
}

Ccode_insert::~Ccode_insert()
{

}

#ifndef CODE_INSERT_TEST
#define CODE_INSERT_TEST 0//1
#endif

#if CODE_INSERT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
