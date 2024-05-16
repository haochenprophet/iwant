#include "wcstombs.h"
int Cwcstombs::my_init(void *p)
{
	this->name = "Cwcstombs";
	this->alias = "wcstombs";
	return 0;
}

Cwcstombs::Cwcstombs()
{
	this->my_init();
}

Cwcstombs::~Cwcstombs()
{

}
size_t Cwcstombs::wcstombs_c(char* dest, const wchar_t* src, size_t max)
{
	return wcstombs( dest, src, max);
}
#ifndef WCSTOMBS_TEST
#define WCSTOMBS_TEST 0//1
#endif

#if WCSTOMBS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WCSTOMBS_TEST\n\n";

	return 0;
}
#endif 