#include "copy.h"
int Ccopy::my_init(void *p)
{
	this->name = "Ccopy";
	this->alias = "copy";
	return 0;
}

Ccopy::Ccopy()
{
	this->my_init();
}

Ccopy::~Ccopy()
{

}

#ifndef COPY_TEST
#define COPY_TEST 0//1
#endif

#if COPY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
