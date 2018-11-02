#include "address_operator.h"
int Caddress_operator::my_init(void *p)
{
	this->name = "Caddress_operator";
	this->alias = "address_operator";
	this->symbol = "&";
	return 0;
}

Caddress_operator::Caddress_operator()
{
	this->my_init();
}

Caddress_operator::~Caddress_operator()
{

}
