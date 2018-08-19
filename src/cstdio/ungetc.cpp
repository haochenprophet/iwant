#include "ungetc.h"
int Cungetc::my_init(void *p)
{
	this->name = "Cungetc";
	this->alias = "ungetc";
	return 0;
}

Cungetc::Cungetc()
{
	this->my_init();
}

Cungetc::~Cungetc()
{

}

#ifndef UNGETC_TEST
#define UNGETC_TEST 0//1
#endif

#if UNGETC_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "UNGETC_TEST\n\n";

	return 0;
}
#endif 