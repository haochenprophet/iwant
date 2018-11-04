#include "type_conversion.h"
int Ctype_conversion::my_init(void *p)
{
	this->name = "Ctype_conversion";
	this->alias = "type_conversion";
	this->symbol = "(type)exp";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Ctype_conversion::Ctype_conversion()
{
	this->my_init();
}

Ctype_conversion::~Ctype_conversion()
{

}

#ifndef TYPE_CONVERSION_TEST
#define TYPE_CONVERSION_TEST 0//1
#endif

#if TYPE_CONVERSION_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TYPE_CONVERSION_TEST\n\n";

	return 0;
}
#endif 