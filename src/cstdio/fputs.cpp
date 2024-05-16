#include "fputs.h"
int Cfputs::my_init(void *p)
{
	this->name = "Cfputs";
	this->alias = "fputs";
	return 0;
}

Cfputs::Cfputs()
{
	this->my_init();
}

Cfputs::~Cfputs()
{

}

int Cfputs::fputs_c(const char* str, FILE* stream)
{
	return fputs(str, stream);
}

#ifndef FPUTS_TEST
#define FPUTS_TEST 0//1
#endif

#if FPUTS_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FPUTS_TEST\n\n";

	return 0;
}
#endif 