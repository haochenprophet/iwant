#include "difftime.h"
int Cdifftime::my_init(void *p)
{
	this->name = "Cdifftime";
	this->alias = "difftime";
	return 0;
}

Cdifftime::Cdifftime()
{
	this->my_init();
}

Cdifftime::~Cdifftime()
{

}

double Cdifftime::difftime_c(time_t end, time_t beginning)
{
	return difftime(end, beginning);
}

#ifndef DIFFTIME_TEST
#define DIFFTIME_TEST 0//1
#endif

#if DIFFTIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DIFFTIME_TEST\n\n";

	return 0;
}
#endif 