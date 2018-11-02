#include "division.h"
int Cdivision::my_init(void *p)
{
	this->name = "Cdivision";
	this->alias = "division";
	this->symbol = "/";
	return 0;
}

Cdivision::Cdivision()
{
	this->my_init();
}

Cdivision::~Cdivision()
{

}
