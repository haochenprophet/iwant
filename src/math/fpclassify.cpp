#include "fpclassify.h"
int Cfpclassify::my_init(void *p)
{
	this->name = "Cfpclassify";
	this->alias = "fpclassify";
	return 0;
}

Cfpclassify::Cfpclassify()
{
	this->my_init();
}

Cfpclassify::~Cfpclassify()
{

}

int Cfpclassify::fpclassify_c(double x)
{
	return fpclassify(x);
}

#ifndef FPCLASSIFY_TEST
#define FPCLASSIFY_TEST 0//1
#endif

#if FPCLASSIFY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
