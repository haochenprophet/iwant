#include "wctomb.h"
int Cwctomb::my_init(void *p)
{
	this->name = "Cwctomb";
	this->alias = "wctomb";
	return 0;
}

Cwctomb::Cwctomb()
{
	this->my_init();
}

Cwctomb::~Cwctomb()
{

}

int Cwctomb::wctomb_c(char* pmb, wchar_t wc)
{
	return wctomb( pmb, wc);
}

#ifndef WCTOMB_TEST
#define WCTOMB_TEST 0//1
#endif

#if WCTOMB_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WCTOMB_TEST\n\n";

	return 0;
}
#endif 