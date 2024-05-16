#include "fflush.h"
int Cfflush::my_init(void *p)
{
	this->name = "Cfflush";
	this->alias = "fflush";
	return 0;
}

Cfflush::Cfflush()
{
	this->my_init();
}

Cfflush::~Cfflush()
{

}

int Cfflush::fflush_c(FILE* stream)
{
	return fflush(stream);
}

#ifndef FFLUSH_TEST
#define FFLUSH_TEST 0//1
#endif

#if FFLUSH_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FFLUSH_TEST\n\n";

	return 0;
}
#endif 