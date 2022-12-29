#include "cstdlib.h"
#include "cstdlib_g_code.i"

int Ccstdlib::my_init(void *p)
{
	this->name = "Ccstdlib";
	this->alias = "cstdlib";
	return 0;
}

Ccstdlib::Ccstdlib()
{
	this->my_init();
}

Ccstdlib::~Ccstdlib()
{

}

void Ccstdlib::add_global_objects(Object* p)
{
	cstdlib_add_objects(p);
}
#ifndef CSTDLIB_TEST
#define CSTDLIB_TEST 0//1
#endif

#if CSTDLIB_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CSTDLIB_TEST\n\n";

	return 0;
}
#endif 