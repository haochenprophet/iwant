#include "money_shape.h"
int Cmoney_shape::my_init(void *p)
{
	this->name = "Cmoney_shape";
	this->alias = "money_shape";
	return 0;
}

Cmoney_shape::Cmoney_shape()
{
	this->my_init();
}

Cmoney_shape::~Cmoney_shape()
{

}

#ifndef MONEY_SHAPE_TEST
#define MONEY_SHAPE_TEST 0//1
#endif

#if MONEY_SHAPE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
