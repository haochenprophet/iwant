#include "algorithm.h"
int Calgorithm::my_init(void *p)
{
	this->name = "Calgorithm";
	this->alias = "algorithm";
	return 0;
}

Calgorithm::Calgorithm()
{
	this->my_init();
}

Calgorithm::~Calgorithm()
{

}

#ifndef ALGORITHM_TEST
#define ALGORITHM_TEST 0//1
#endif

#if ALGORITHM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
