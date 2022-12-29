#include "mbstowcs.h"
int Cmbstowcs::my_init(void *p)
{
	this->name = "Cmbstowcs";
	this->alias = "mbstowcs";
	return 0;
}

Cmbstowcs::Cmbstowcs()
{
	this->my_init();
}

Cmbstowcs::~Cmbstowcs()
{

}
size_t Cmbstowcs:: mbstowcs_c(wchar_t* dest, const char* src, size_t max)
{
	return mbstowcs( dest,  src, max);
}
#ifndef MBSTOWCS_TEST
#define MBSTOWCS_TEST 0//1
#endif

#if MBSTOWCS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MBSTOWCS_TEST\n\n";

	return 0;
}
#endif 