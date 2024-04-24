#include "life_teach.h"
int Clife_teach::my_init(void *p)
{
	this->name = "Clife_teach";
	this->alias = "life_teach";
	return 0;
}

Clife_teach::Clife_teach()
{
	this->my_init();
}

Clife_teach::~Clife_teach()
{

}

#ifndef LIFE_TEACH_TEST
#define LIFE_TEACH_TEST 0//1
#endif

#if LIFE_TEACH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
