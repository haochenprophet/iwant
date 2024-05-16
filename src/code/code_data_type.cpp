#include "code_data_type.h"
int Ccode_data_type::my_init(void *p)
{
	this->name = "Ccode_data_type";
	this->alias = "code_data_type";
	return 0;
}

Ccode_data_type::Ccode_data_type()
{
	this->my_init();
}

Ccode_data_type::~Ccode_data_type()
{

}

#ifndef CODE_DATA_TYPE_TEST
#define CODE_DATA_TYPE_TEST 0//1
#endif

#if CODE_DATA_TYPE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
