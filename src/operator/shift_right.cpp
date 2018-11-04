#include "shift_right.h"
int Cshift_right::my_init(void *p)
{
	this->name = "Cshift_right";
	this->alias = "shift_right";
	this->symbol = ">>";
	this->op_priority = 7;
	this->combination = Combination::L2R;
	return 0;
}

Cshift_right::Cshift_right()
{
	this->my_init();
}

Cshift_right::~Cshift_right()
{

}

#ifndef SHIFT_RIGHT_TEST
#define SHIFT_RIGHT_TEST 0//1
#endif

#if SHIFT_RIGHT_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SHIFT_RIGHT_TEST\n\n";

	return 0;
}
#endif 