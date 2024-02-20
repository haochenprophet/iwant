#include "compare.h"
int Ccompare::my_init(void *p)
{
	this->name = "Ccompare";
	this->alias = "compare";
	return 0;
}

Ccompare::Ccompare()
{
	this->my_init();
}

Ccompare::~Ccompare()
{

}

int Ccompare::compare(void* left, void* right, size_t cmp_size)
{
	return memcmp(left, right, cmp_size);
}

#ifndef COMPARE_TEST
#define COMPARE_TEST 0//1
#endif

#if COMPARE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
