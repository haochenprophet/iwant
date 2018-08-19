#include "fseek.h"
int Cfseek::my_init(void *p)
{
	this->name = "Cfseek";
	this->alias = "fseek";
	return 0;
}

Cfseek::Cfseek()
{
	this->my_init();
}

Cfseek::~Cfseek()
{

}

#ifndef FSEEK_TEST
#define FSEEK_TEST 0//1
#endif

#if FSEEK_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FSEEK_TEST\n\n";

	return 0;
}
#endif 