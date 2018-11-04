#include "apostrophe.h"
int Capostrophe::my_init(void *p)
{
	this->name = "Capostrophe";
	this->alias = "apostrophe";
	this->symbol = "'...'";
	return 0;
}

Capostrophe::Capostrophe()
{
	this->my_init();
}

Capostrophe::~Capostrophe()
{

}

#ifndef APOSTROPHE_TEST
#define APOSTROPHE_TEST 0//1
#endif

#if APOSTROPHE_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "APOSTROPHE_TEST\n\n";

	return 0;
}
#endif 