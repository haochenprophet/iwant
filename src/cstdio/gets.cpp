#include "gets.h"
#include <stdio.h>

int Cgets::my_init(void *p)
{
	this->name = "Cgets";
	this->alias = "gets";
	return 0;
}

Cgets::Cgets()
{
	this->my_init();
}

Cgets::~Cgets()
{

}

char* Cgets::gets_c(char* str)
{
	//return gets(str);//build error 
	AT_LINE
	return nullptr;
}

#ifndef GETS_TEST
#define GETS_TEST 0//1
#endif

#if GETS_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "GETS_TEST\n\n";

	return 0;
}
#endif 