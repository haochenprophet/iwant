#include "home_robot.h"
int Chome_robot::my_init(void *p)
{
	this->name = "Chome_robot";
	this->alias = "home_robot";
	return 0;
}

Chome_robot::Chome_robot()
{
	this->my_init();
}

Chome_robot::~Chome_robot()
{

}

#ifndef HOME_ROBOT_TEST
#define HOME_ROBOT_TEST 0//1
#endif

#if HOME_ROBOT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
