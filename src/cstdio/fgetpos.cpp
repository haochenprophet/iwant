#include "fgetpos.h"
int Cfgetpos::my_init(void *p)
{
	this->name = "Cfgetpos";
	this->alias = "fgetpos";
	return 0;
}

Cfgetpos::Cfgetpos()
{
	this->my_init();
}

Cfgetpos::~Cfgetpos()
{

}

int Cfgetpos::fgetpos_c(FILE* stream, fpos_t* pos)
{
	return fgetpos(stream, pos);
}

#ifndef FGETPOS_TEST
#define FGETPOS_TEST 0//1
#endif

#if FGETPOS_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FGETPOS_TEST\n\n";

	return 0;
}
#endif 