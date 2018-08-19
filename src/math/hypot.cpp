#include "hypot.h"
int Chypot::my_init(void *p)
{
	this->name = "Chypot";
	this->alias = "hypot";
	return 0;
}

Chypot::Chypot()
{
	this->my_init();
}

Chypot::~Chypot()
{

}

#ifndef HYPOT_TEST
#define HYPOT_TEST 0//1
#endif

#if HYPOT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "HYPOT_TEST\n\n";

	return 0;
}
#endif 