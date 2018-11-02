#include "less_than_equal.h"
int Cless_than_equal::my_init(void *p)
{
	this->name = "Cless_than_equal";
	this->alias = "less_than_equal";
	this->symbol = "<=";
	this->op_priority = 8;
	this->combination = Combination::L2R;
	return 0;
}

Cless_than_equal::Cless_than_equal()
{
	this->my_init();
}

Cless_than_equal::~Cless_than_equal()
{

}
