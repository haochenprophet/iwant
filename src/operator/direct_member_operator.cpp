#include "direct_member_operator.h"
int Cdirect_member_operator::my_init(void *p)
{
	this->name = "Cdirect_member_operator";
	this->alias = "direct_member_operator";
	this->alias = ".";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cdirect_member_operator::Cdirect_member_operator()
{
	this->my_init();
}

Cdirect_member_operator::~Cdirect_member_operator()
{

}
