#include "warship_canteen.h"
int Cwarship_canteen::my_init(void *p)
{
	this->name = "Cwarship_canteen";
	this->alias = "warship_canteen";
	return 0;
}

Cwarship_canteen::Cwarship_canteen()
{
	this->my_init();
}

Cwarship_canteen::~Cwarship_canteen()
{

}

#ifndef WARSHIP_CANTEEN_TEST
#define WARSHIP_CANTEEN_TEST 0//1
#endif

#if WARSHIP_CANTEEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
