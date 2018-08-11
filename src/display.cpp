#include "display.h"
int Cdisplay::my_init(void *p)
{
	this->name = "Cdisplay";
	this->alias = "display";
	return 0;
}

Cdisplay::Cdisplay()
{
	this->my_init();
}

#ifndef DISPLAY_TEST
#define DISPLAY_TEST 0//1
#endif

#if DISPLAY_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DISPLAY_TEST\n\n";

	return 0;
}
#endif 