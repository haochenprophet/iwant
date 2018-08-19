#include "tmpfile.h"
int Ctmpfile::my_init(void *p)
{
	this->name = "Ctmpfile";
	this->alias = "tmpfile";
	return 0;
}

Ctmpfile::Ctmpfile()
{
	this->my_init();
}

Ctmpfile::~Ctmpfile()
{

}

#ifndef TMPFILE_TEST
#define TMPFILE_TEST 0//1
#endif

#if TMPFILE_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "TMPFILE_TEST\n\n";

	return 0;
}
#endif 