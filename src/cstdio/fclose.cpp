#include "fclose.h"
int Cfclose::my_init(void *p)
{
	this->name = "Cfclose";
	this->alias = "fclose";
	return 0;
}

Cfclose::Cfclose()
{
	this->my_init();
}

Cfclose::~Cfclose()
{

}

#ifndef FCLOSE_TEST
#define FCLOSE_TEST 0//1
#endif

#if FCLOSE_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FCLOSE_TEST\n\n";

	return 0;
}
#endif 