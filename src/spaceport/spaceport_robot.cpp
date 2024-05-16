#include "spaceport_robot.h"
int Cspaceport_robot::my_init(void *p)
{
	this->name = "Cspaceport_robot";
	this->alias = "spaceport_robot";
	return 0;
}

Cspaceport_robot::Cspaceport_robot()
{
	this->my_init();
}

Cspaceport_robot::~Cspaceport_robot()
{

}

#ifndef SPACEPORT_ROBOT_TEST
#define SPACEPORT_ROBOT_TEST 0//1
#endif

#if SPACEPORT_ROBOT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
