#include "ftell.h"
int Cftell::my_init(void *p)
{
	this->name = "Cftell";
	this->alias = "ftell";
	return 0;
}

Cftell::Cftell()
{
	this->my_init();
}

Cftell::~Cftell()
{

}

long int Cftell::ftell_c(FILE* stream)
{
	return ftell(stream);
}

#ifndef FTELL_TEST
#define FTELL_TEST 0//1
#endif

#if FTELL_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FTELL_TEST\n\n";

	return 0;
}
#endif 