#include "free.h"
int Cfree::my_init(void *p)
{
	this->name = "Cfree";
	this->alias = "free";
	return 0;
}

Cfree::Cfree()
{
	this->my_init();
}

Cfree::~Cfree()
{

}
void Cfree::free_c(void* ptr)
{
	free(ptr);
}
#ifndef FREE_TEST
#define FREE_TEST 0//1
#endif

#if FREE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FREE_TEST\n\n";

	return 0;
}
#endif 