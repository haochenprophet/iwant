#include "life_shop.h"
int Clife_shop::my_init(void *p)
{
	this->name = "Clife_shop";
	this->alias = "life_shop";
	return 0;
}

Clife_shop::Clife_shop()
{
	this->my_init();
}

Clife_shop::~Clife_shop()
{

}

#ifndef LIFE_SHOP_TEST
#define LIFE_SHOP_TEST 0//1
#endif

#if LIFE_SHOP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
