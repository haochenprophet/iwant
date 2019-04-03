#include "block_dev.h"
int Cblock_dev::my_init(void *p)
{
	this->name = "Cblock_dev";
	this->alias = "block_dev";
	return 0;
}

Cblock_dev::Cblock_dev()
{
	this->my_init();
}

Cblock_dev::~Cblock_dev()
{

}

#ifndef BLOCK_DEV_TEST
#define BLOCK_DEV_TEST 0//1
#endif

#if BLOCK_DEV_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BLOCK_DEV_TEST\n\n";

	return 0;
}
#endif 