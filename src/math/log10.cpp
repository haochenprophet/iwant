#include "log10.h"
int Clog10::my_init(void *p)
{
	this->name = "Clog10";
	this->alias = "log10";
	return 0;
}

Clog10::Clog10()
{
	this->my_init();
}

Clog10::~Clog10()
{

}

double Clog10::log10_c(double x)
{
	return log10(x);
}
#ifndef LOG10_TEST
#define LOG10_TEST 0//1
#endif

#if LOG10_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOG10_TEST\n\n";

	return 0;
}
#endif 