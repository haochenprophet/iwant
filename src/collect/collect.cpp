#include "collect.h"
int Ccollect::my_init(void *p)
{
	this->name = "Ccollect";
	this->alias = "collect";
	return 0;
}

Ccollect::Ccollect()
{
	this->my_init();
}

Ccollect::~Ccollect()
{

}

#ifndef COLLECT_TEST
#define COLLECT_TEST 0//1
#endif

#if COLLECT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
