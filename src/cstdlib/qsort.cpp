#include "qsort.h"
int Cqsort::my_init(void *p)
{
	this->name = "Cqsort";
	this->alias = "qsort";
	return 0;
}

Cqsort::Cqsort()
{
	this->my_init();
}

Cqsort::~Cqsort()
{

}

#ifndef QSORT_TEST
#define QSORT_TEST 0//1
#endif

#if QSORT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "QSORT_TEST\n\n";

	return 0;
}
#endif 