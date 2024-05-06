#include "security_interrupt.h"
int Csecurity_interrupt::my_init(void *p)
{
	this->name = "Csecurity_interrupt";
	this->alias = "security_interrupt";
	return 0;
}

Csecurity_interrupt::Csecurity_interrupt()
{
	this->my_init();
}

Csecurity_interrupt::~Csecurity_interrupt()
{

}

#ifndef SECURITY_INTERRUPT_TEST
#define SECURITY_INTERRUPT_TEST 0//1
#endif

#if SECURITY_INTERRUPT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
