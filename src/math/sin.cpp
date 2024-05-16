#include "sin.h"
int Csin::my_init(void *p)
{
	this->name = "Csin";
	this->alias = "sin";
	return 0;
}

Csin::Csin()
{
	this->my_init();
}

Csin::~Csin()
{

}

double Csin::sin_c(double x)
{
	return sin(x);
}

#ifndef SIN_TEST
#define SIN_TEST 0//1
#endif

#if SIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SIN_TEST\n\n";

	return 0;
}
#endif 