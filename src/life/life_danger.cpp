#include "life_danger.h"
int Clife_danger::my_init(void *p)
{
	this->name = "Clife_danger";
	this->alias = "life_danger";
	return 0;
}

Clife_danger::Clife_danger()
{
	this->my_init();
}

Clife_danger::~Clife_danger()
{

}

#ifndef LIFE_DANGER_TEST
#define LIFE_DANGER_TEST 0//1
#endif

#if LIFE_DANGER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
