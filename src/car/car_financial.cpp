#include "car_financial.h"
int Ccar_financial::my_init(void *p)
{
	this->name = "Ccar_financial";
	this->alias = "car_financial";
	return 0;
}

Ccar_financial::Ccar_financial()
{
	this->my_init();
}

Ccar_financial::~Ccar_financial()
{

}

#ifndef CAR_FINANCIAL_TEST
#define CAR_FINANCIAL_TEST 0//1
#endif

#if CAR_FINANCIAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
