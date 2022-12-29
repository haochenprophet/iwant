#include "div_c.h"
int Cdiv_c::my_init(void *p)
{
	this->name = "Cdiv";
	this->alias = "div";
	return 0;
}

Cdiv_c::Cdiv_c()
{
	this->my_init();
}

Cdiv_c::~Cdiv_c()
{

}

div_t Cdiv_c::div_c(int numer, int denom)
{
	return  div( numer,  denom);
}

#ifndef DIV_C_TEST
#define DIV_C_TEST 0//1
#endif

#if DIV_C_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
