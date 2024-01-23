#include "template_object.h"
int Ctemplate_object::my_init(void *p)
{
	this->name = "Ctemplate_object";
	this->alias = "template_object";
	return 0;
}

Ctemplate_object::Ctemplate_object()
{
	this->my_init();
}

Ctemplate_object::~Ctemplate_object()
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