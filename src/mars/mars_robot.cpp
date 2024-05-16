#include "mars_robot.h"
int Cmars_robot::my_init(void *p)
{
	this->name = "Cmars_robot";
	this->alias = "mars_robot";
	return 0;
}

Cmars_robot::Cmars_robot()
{
	this->my_init();
}

Cmars_robot::~Cmars_robot()
{

}

#ifndef MARS_ROBOT_TEST
#define MARS_ROBOT_TEST 0//1
#endif

#if MARS_ROBOT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
