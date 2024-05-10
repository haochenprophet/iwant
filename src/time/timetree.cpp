#include "timetree.h"
int Ctimetree::my_init(void *p)
{
	this->name = "Ctimetree";
	this->alias = "timetree";
	return 0;
}

Ctimetree::Ctimetree()
{
	this->my_init();
}

Ctimetree::~Ctimetree()
{

}

#ifndef TIMETREE_TEST
#define TIMETREE_TEST 0//1
#endif

#if TIMETREE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
