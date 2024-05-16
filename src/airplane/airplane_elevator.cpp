#include "airplane_elevator.h"
int Cairplane_elevator::my_init(void *p)
{
	this->name = "Cairplane_elevator";
	this->alias = "airplane_elevator";
	return 0;
}

Cairplane_elevator::Cairplane_elevator()
{
	this->my_init();
}

Cairplane_elevator::~Cairplane_elevator()
{

}

#ifndef AIRPLANE_ELEVATOR_TEST
#define AIRPLANE_ELEVATOR_TEST 0//1
#endif

#if AIRPLANE_ELEVATOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
