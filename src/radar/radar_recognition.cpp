#include "radar_recognition.h"
int Cradar_recognition::my_init(void *p)
{
	this->name = "Cradar_recognition";
	this->alias = "radar_recognition";
	return 0;
}

Cradar_recognition::Cradar_recognition()
{
	this->my_init();
}

Cradar_recognition::~Cradar_recognition()
{

}

#ifndef RADAR_RECOGNITION_TEST
#define RADAR_RECOGNITION_TEST 0//1
#endif

#if RADAR_RECOGNITION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
