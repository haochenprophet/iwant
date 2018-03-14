#include "code.h"
int Ccode::my_init(void *p)
{
	this->name = "Ccode";
	this->alias = "code";
	return 0;
}

Ccode::Ccode()
{
	this->my_init();
}

Ccode::~Ccode()
{

}

#ifndef CODE_TEST
#define CODE_TEST 0//1
#endif

#if CODE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "CODE_TEST\n\n";

	return 0;
}
#endif 