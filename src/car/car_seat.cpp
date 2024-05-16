#include "car_seat.h"
int Ccar_seat::my_init(void *p)
{
	this->name = "Ccar_seat";
	this->alias = "car_seat";
	return 0;
}

Ccar_seat::Ccar_seat()
{
	this->my_init();
}

Ccar_seat::~Ccar_seat()
{

}

#ifndef CAR_SEAT_TEST
#define CAR_SEAT_TEST 0//1
#endif

#if CAR_SEAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
