#include "ocean_move.h"
int Cocean_move::my_init(void *p)
{
	this->name = "Cocean_move";
	this->alias = "ocean_move";
	return 0;
}

Cocean_move::Cocean_move()
{
	this->my_init();
}

Cocean_move::~Cocean_move()
{

}

#ifndef OCEAN_MOVE_TEST
#define OCEAN_MOVE_TEST 0//1
#endif

#if OCEAN_MOVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
