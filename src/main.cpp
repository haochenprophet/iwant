#include "all_h_include.h"

#define MAIN_TEST 0

Cmain::Cmain()
{
	this->name = "Cmain";
	this->alias ="main";
	this->temp = MAIN_TEMP;
}

#if MAIN_TEST
int main(int argc, char *argv[])
{
	cout << "Hello main!\n";

	return 0;
}
#endif
