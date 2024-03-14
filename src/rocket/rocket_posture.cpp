#include "rocket_posture.h"
int Crocket_posture::my_init(void *p)
{
	this->name = "Crocket_posture";
	this->alias = "rocket_posture";
	return 0;
}

Crocket_posture::Crocket_posture()
{
	this->my_init();
}

Crocket_posture::~Crocket_posture()
{

}

#ifndef ROCKET_POSTURE_TEST
#define ROCKET_POSTURE_TEST 0//1
#endif

#if ROCKET_POSTURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
