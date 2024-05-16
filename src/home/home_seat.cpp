#include "home_seat.h"
int Chome_seat::my_init(void *p)
{
	this->name = "Chome_seat";
	this->alias = "home_seat";
	return 0;
}

Chome_seat::Chome_seat()
{
	this->my_init();
}

Chome_seat::~Chome_seat()
{

}

#ifndef HOME_SEAT_TEST
#define HOME_SEAT_TEST 0//1
#endif

#if HOME_SEAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
