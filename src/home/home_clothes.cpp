#include "home_clothes.h"
int Chome_clothes::my_init(void *p)
{
	this->name = "Chome_clothes";
	this->alias = "home_clothes";
	return 0;
}

Chome_clothes::Chome_clothes()
{
	this->my_init();
}

Chome_clothes::~Chome_clothes()
{

}

#ifndef HOME_CLOTHES_TEST
#define HOME_CLOTHES_TEST 0//1
#endif

#if HOME_CLOTHES_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
