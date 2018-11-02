#include "reinterpret_cast_operator.h"
int Creinterpret_cast_operator::my_init(void *p)
{
	this->name = "Creinterpret_cast_operator";
	this->alias = "reinterpret_cast_operator";
	this->symbol = "reinterpret_cast";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Creinterpret_cast_operator::Creinterpret_cast_operator()
{
	this->my_init();
}

Creinterpret_cast_operator::~Creinterpret_cast_operator()
{

}
