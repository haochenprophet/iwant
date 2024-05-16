#include "security_window.h"
int Csecurity_window::my_init(void *p)
{
	this->name = "Csecurity_window";
	this->alias = "security_window";
	return 0;
}

Csecurity_window::Csecurity_window()
{
	this->my_init();
}

Csecurity_window::~Csecurity_window()
{

}

#ifndef SECURITY_WINDOW_TEST
#define SECURITY_WINDOW_TEST 0//1
#endif

#if SECURITY_WINDOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
