#include "strxfrm.h"
int Cstrxfrm::my_init(void *p)
{
	this->name = "Cstrxfrm";
	this->alias = "strxfrm";
	return 0;
}

Cstrxfrm::Cstrxfrm()
{
	this->my_init();
}

Cstrxfrm::~Cstrxfrm()
{

}

#ifndef STRXFRM_TEST
#define STRXFRM_TEST 0//1
#endif

#if STRXFRM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRXFRM_TEST\n\n";

	return 0;
}
#endif 