#include "nan.h"
int Cnan::my_init(void *p)
{
	this->name = "Cnan";
	this->alias = "nan";
	return 0;
}

Cnan::Cnan()
{
	this->my_init();
}

Cnan::~Cnan()
{

}

double Cnan::nan_c(const char* tagp)
{
	return nan(tagp);
}

float Cnan::nanf_c(const char* tagp)
{
	return nanf(tagp);
}

float Cnan::nanl(const char* tagp)
{
	return nanl(tagp);
}
#ifndef NAN_TEST
#define NAN_TEST 0//1
#endif

#if NAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NAN_TEST\n\n";

	return 0;
}
#endif 