#include "radar_length.h"
int Cradar_length::my_init(void *p)
{
	this->name = "Cradar_length";
	this->alias = "radar_length";
	return 0;
}

Cradar_length::Cradar_length()
{
	this->my_init();
}

Cradar_length::~Cradar_length()
{

}

#ifndef RADAR_LENGTH_TEST
#define RADAR_LENGTH_TEST 0//1
#endif

#if RADAR_LENGTH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
