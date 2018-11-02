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
