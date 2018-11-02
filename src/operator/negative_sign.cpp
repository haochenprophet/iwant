#include "negative_sign.h"
int Cnegative_sign::my_init(void *p)
{
	this->name = "Cnegative_sign";
	this->alias = "negative_sign";
	this->symbol = "-";
	return 0;
}

Cnegative_sign::Cnegative_sign()
{
	this->my_init();
}

Cnegative_sign::~Cnegative_sign()
{

}
