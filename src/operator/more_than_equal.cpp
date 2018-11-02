#include "more_than_equal.h"
int Cmore_than_equal::my_init(void *p)
{
	this->name = "Cmore_than_equal";
	this->alias = "more_than_equal";
	this->symbol = ">=";
	this->op_priority = 8;
	this->combination = Combination::L2R;
	return 0;
}

Cmore_than_equal::Cmore_than_equal()
{
	this->my_init();
}

Cmore_than_equal::~Cmore_than_equal()
{

}
