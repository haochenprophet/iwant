#include "isdigit.h"
int Cisdigit::my_init(void *p)
{
	this->name = "Cisdigit";
	this->alias = "isdigit";
	return 0;
}

Cisdigit::Cisdigit()
{
	this->my_init();
}

Cisdigit::~Cisdigit()
{

}

#ifndef ISDIGIT_TEST
#define ISDIGIT_TEST 0//1
#endif

#if ISDIGIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISDIGIT_TEST\n\n";

	return 0;
}
#endif 