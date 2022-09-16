#include "find.h"
int Cfind::my_init(void *p)
{
	this->name = "Cfind";
	this->alias = "find";
	return 0;
}

Cfind::Cfind()
{
	this->my_init();
}

Cfind::~Cfind()
{

}

#ifndef FIND_TEST
#define FIND_TEST 0//1
#endif

#if FIND_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FIND_TEST\n\n";

	return 0;
}
#endif 