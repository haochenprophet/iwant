#include "car_list.h"
int Ccar_list::my_init(void *p)
{
	this->name = "Ccar_list";
	this->alias = "car_list";
	return 0;
}

Ccar_list::Ccar_list()
{
	this->my_init();
}

Ccar_list::~Ccar_list()
{

}

#ifndef CAR_LIST_TEST
#define CAR_LIST_TEST 0//1
#endif

#if CAR_LIST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
