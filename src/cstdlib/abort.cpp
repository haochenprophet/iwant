#include "abort.h"
int Cabort::my_init(void *p)
{
	this->name = "Cabort";
	this->alias = "abort";
	return 0;
}

Cabort::Cabort()
{
	this->my_init();
}

Cabort::~Cabort()
{

}

void Cabort::abort_c(void)
{
	abort();
}

#ifndef ABORT_TEST
#define ABORT_TEST 0//1
#endif

#if ABORT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ABORT_TEST\n\n";

	return 0;
}
#endif 