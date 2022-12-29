#include "quick_exit.h"
int Cquick_exit::my_init(void *p)
{
	this->name = "Cquick_exit";
	this->alias = "quick_exit";
	return 0;
}

Cquick_exit::Cquick_exit()
{
	this->my_init();
}

Cquick_exit::~Cquick_exit()
{

}
void Cquick_exit::quick_exit_c(int status)
{
	quick_exit( status);
}

#ifndef QUICK_EXIT_TEST
#define QUICK_EXIT_TEST 0//1
#endif

#if QUICK_EXIT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "QUICK_EXIT_TEST\n\n";

	return 0;
}
#endif 