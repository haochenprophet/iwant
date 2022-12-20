#include "perror.h"
int Cperror::my_init(void *p)
{
	this->name = "Cperror";
	this->alias = "perror";
	return 0;
}

Cperror::Cperror()
{
	this->my_init();
}

Cperror::~Cperror()
{

}

void Cperror::perror_c(const char* str)
{
	return perror(str);
}


#ifndef PERROR_TEST
#define PERROR_TEST 0//1
#endif

#if PERROR_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "PERROR_TEST\n\n";

	return 0;
}
#endif 