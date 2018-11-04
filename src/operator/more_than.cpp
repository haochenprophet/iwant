#include "more_than.h"
int Cmore_than::my_init(void *p)
{
	this->name = "Cmore_than";
	this->alias = "more_than";
	this->symbol = ">";
	this->op_priority = 8;
	this->combination = Combination::L2R;
	return 0;
}

Cmore_than::Cmore_than()
{
	this->my_init();
}

Cmore_than::~Cmore_than()
{

}

#ifndef MORE_THAN_TEST
#define MORE_THAN_TEST 0//1
#endif

#if MORE_THAN_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MORE_THAN_TEST\n\n";

	return 0;
}
#endif 