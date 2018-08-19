#include "at_quick_exit.h"
int Cat_quick_exit::my_init(void *p)
{
	this->name = "Cat_quick_exit";
	this->alias = "at_quick_exit";
	return 0;
}

Cat_quick_exit::Cat_quick_exit()
{
	this->my_init();
}

Cat_quick_exit::~Cat_quick_exit()
{

}

#ifndef AT_QUICK_EXIT_TEST
#define AT_QUICK_EXIT_TEST 0//1
#endif

#if AT_QUICK_EXIT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "AT_QUICK_EXIT_TEST\n\n";

	return 0;
}
#endif 