#include "tan.h"
int Ctan::my_init(void *p)
{
	this->name = "Ctan";
	this->alias = "tan";
	return 0;
}

Ctan::Ctan()
{
	this->my_init();
}

Ctan::~Ctan()
{

}

double Ctan::tan_c(double x)
{
	return tan(x);
}

#ifndef TAN_TEST
#define TAN_TEST 0//1
#endif

#if TAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TAN_TEST\n\n";

	return 0;
}
#endif 