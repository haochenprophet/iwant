#include "radar_send.h"
int Cradar_send::my_init(void *p)
{
	this->name = "Cradar_send";
	this->alias = "radar_send";
	return 0;
}

Cradar_send::Cradar_send()
{
	this->my_init();
}

Cradar_send::~Cradar_send()
{

}

#ifndef RADAR_SEND_TEST
#define RADAR_SEND_TEST 0//1
#endif

#if RADAR_SEND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
