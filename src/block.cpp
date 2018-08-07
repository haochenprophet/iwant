#include "block.h"
int Cblock::my_init(void *p)
{
	this->name = "Cblock";
	this->alias = "block";
	return 0;
}

Cblock::Cblock()
{
	this->my_init();
}

#ifndef BLOCK_TEST
#define BLOCK_TEST 0//1
#endif

#if BLOCK_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BLOCK_TEST\n\n";
	return 0;
}
#endif 