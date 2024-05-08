#include "radar_lock.h"
int Cradar_lock::my_init(void *p)
{
	this->name = "Cradar_lock";
	this->alias = "radar_lock";
	return 0;
}

Cradar_lock::Cradar_lock()
{
	this->my_init();
}

Cradar_lock::~Cradar_lock()
{

}

#ifndef RADAR_LOCK_TEST
#define RADAR_LOCK_TEST 0//1
#endif

#if RADAR_LOCK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
