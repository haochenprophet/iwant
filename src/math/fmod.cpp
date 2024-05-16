#include "fmod.h"
int Cfmod::my_init(void *p)
{
	this->name = "Cfmod";
	this->alias = "fmod";
	return 0;
}

Cfmod::Cfmod()
{
	this->my_init();
}

Cfmod::~Cfmod()
{

}

double Cfmod::fmod_c(double numer, double denom)
{
	return fmod( numer,  denom);
}

#ifndef FMOD_TEST
#define FMOD_TEST 0//1
#endif

#if FMOD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FMOD_TEST\n\n";

	return 0;
}
#endif 