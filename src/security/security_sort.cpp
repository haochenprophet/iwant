#include "security_sort.h"
int Csecurity_sort::my_init(void *p)
{
	this->name = "Csecurity_sort";
	this->alias = "security_sort";
	return 0;
}

Csecurity_sort::Csecurity_sort()
{
	this->my_init();
}

Csecurity_sort::~Csecurity_sort()
{

}

#ifndef SECURITY_SORT_TEST
#define SECURITY_SORT_TEST 0//1
#endif

#if SECURITY_SORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
