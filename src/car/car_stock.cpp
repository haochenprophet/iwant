#include "car_stock.h"
int Ccar_stock::my_init(void *p)
{
	this->name = "Ccar_stock";
	this->alias = "car_stock";
	return 0;
}

Ccar_stock::Ccar_stock()
{
	this->my_init();
}

Ccar_stock::~Ccar_stock()
{

}

#ifndef CAR_STOCK_TEST
#define CAR_STOCK_TEST 0//1
#endif

#if CAR_STOCK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
