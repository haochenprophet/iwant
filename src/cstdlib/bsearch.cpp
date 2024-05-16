#include "bsearch.h"
int Cbsearch::my_init(void *p)
{
	this->name = "Cbsearch";
	this->alias = "bsearch";
	return 0;
}

Cbsearch::Cbsearch()
{
	this->my_init();
}

Cbsearch::~Cbsearch()
{

}

void* Cbsearch::bsearch_c(const void* key, const void* base, size_t num, size_t size, int (*compar)(const void*, const void*))
{
	return bsearch(key,base,num,size, compar);
}

#ifndef BSEARCH_TEST
#define BSEARCH_TEST 0//1
#endif

#if BSEARCH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BSEARCH_TEST\n\n";

	return 0;
}
#endif 