#include "all_h_include.h"

#ifndef MAIN_TEST
#define MAIN_TEST 0//1
#endif

Cmain::Cmain()
{
	this->name = "Cmain";
	this->alias ="main";
	this->temp = MAIN_TEMP;
}


#if MAIN_TEST||_TEST
int main(int argc, char *argv[])
{
	cout << "Hello main!\n";

	return 0;
}
#endif
