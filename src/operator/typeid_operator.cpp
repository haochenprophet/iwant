#include "typeid_operator.h"
int Ctypeid_operator::my_init(void *p)
{
	this->name = "Ctypeid_operator";
	this->alias = "typeid_operator";
	this->symbol = "typeid";
	return 0;
}

Ctypeid_operator::Ctypeid_operator()
{
	this->my_init();
}

Ctypeid_operator::~Ctypeid_operator()
{

}
