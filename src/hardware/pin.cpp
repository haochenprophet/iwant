#include "pin.h"
int Cpin::my_init(void *p)
{
	this->name = "Cpin";
	this->alias = "pin";
	return 0;
}

Cpin::Cpin()
{
	this->my_init();
}

Cpin::~Cpin()
{

}

#ifndef PIN_TEST
#define PIN_TEST 0//1
#endif

#if PIN_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PIN_TEST\n\n";

	return 0;
}
#endif 