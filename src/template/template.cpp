#include "template.h"
int Ctemplate::my_init(void *p)
{
	this->name = "Ctemplate";
	this->alias = "template";
	return 0;
}

Ctemplate::Ctemplate()
{
	this->my_init();
}

Ctemplate::~Ctemplate()
{

}

#ifndef TEMPLATE_TEST
#define TEMPLATE_TEST 0//1
#endif

#if TEMPLATE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TEMPLATE_TEST\n\n";

	return 0;
}
#endif 