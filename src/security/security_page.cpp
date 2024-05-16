#include "security_page.h"
int Csecurity_page::my_init(void *p)
{
	this->name = "Csecurity_page";
	this->alias = "security_page";
	return 0;
}

Csecurity_page::Csecurity_page()
{
	this->my_init();
}

Csecurity_page::~Csecurity_page()
{

}

#ifndef SECURITY_PAGE_TEST
#define SECURITY_PAGE_TEST 0//1
#endif

#if SECURITY_PAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
