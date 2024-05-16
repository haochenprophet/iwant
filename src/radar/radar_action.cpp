#include "radar_action.h"
int Cradar_action::my_init(void *p)
{
	this->name = "Cradar_action";
	this->alias = "radar_action";
	return 0;
}

Cradar_action::Cradar_action()
{
	this->my_init();
}

Cradar_action::~Cradar_action()
{

}

#ifndef RADAR_ACTION_TEST
#define RADAR_ACTION_TEST 0//1
#endif

#if RADAR_ACTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
