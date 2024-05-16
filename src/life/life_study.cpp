#include "life_study.h"
int Clife_study::my_init(void *p)
{
	this->name = "Clife_study";
	this->alias = "life_study";
	return 0;
}

Clife_study::Clife_study()
{
	this->my_init();
}

Clife_study::~Clife_study()
{

}

#ifndef LIFE_STUDY_TEST
#define LIFE_STUDY_TEST 0//1
#endif

#if LIFE_STUDY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
