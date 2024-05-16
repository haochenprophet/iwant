#include "home_television.h"
int Chome_television::my_init(void *p)
{
	this->name = "Chome_television";
	this->alias = "home_television";
	return 0;
}

Chome_television::Chome_television()
{
	this->my_init();
}

Chome_television::~Chome_television()
{

}

#ifndef HOME_TELEVISION_TEST
#define HOME_TELEVISION_TEST 0//1
#endif

#if HOME_TELEVISION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
