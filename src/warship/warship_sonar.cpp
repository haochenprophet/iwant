#include "warship_sonar.h"
int Cwarship_sonar::my_init(void *p)
{
	this->name = "Cwarship_sonar";
	this->alias = "warship_sonar";
	return 0;
}

Cwarship_sonar::Cwarship_sonar()
{
	this->my_init();
}

Cwarship_sonar::~Cwarship_sonar()
{

}

#ifndef WARSHIP_SONAR_TEST
#define WARSHIP_SONAR_TEST 0//1
#endif

#if WARSHIP_SONAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
