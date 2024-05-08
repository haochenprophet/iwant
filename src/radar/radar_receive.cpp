#include "radar_receive.h"
int Cradar_receive::my_init(void *p)
{
	this->name = "Cradar_receive";
	this->alias = "radar_receive";
	return 0;
}

Cradar_receive::Cradar_receive()
{
	this->my_init();
}

Cradar_receive::~Cradar_receive()
{

}

#ifndef RADAR_RECEIVE_TEST
#define RADAR_RECEIVE_TEST 0//1
#endif

#if RADAR_RECEIVE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
