#include "cstdio.h"
#include "cstdio_g_code.i"

int Ccstdio::my_init(void *p)
{
	this->name = "Ccstdio";
	this->alias = "cstdio";
	return 0;
}

Ccstdio::Ccstdio()
{
	this->my_init();
}

Ccstdio::~Ccstdio()
{

}
//Overrides the Object class add_global_objects functions
void Ccstdio::add_global_objects(Object* p)//Add cstdio package global object to Object* p
{
	cstdio_add_objects(p);
}

#ifndef CSTDIO_TEST
#define CSTDIO_TEST 0//1
#endif

#if CSTDIO_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CSTDIO_TEST\n\n";

	return 0;
}
#endif 