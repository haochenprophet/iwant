#include "indirect_member_operator.h"
int Cindirect_member_operator::my_init(void *p)
{
	this->name = "Cindirect_member_operator";
	this->alias = "indirect_member_operator";
	this->alias = "->";
	return 0;
}

Cindirect_member_operator::Cindirect_member_operator()
{
	this->my_init();
}

Cindirect_member_operator::~Cindirect_member_operator()
{

}
