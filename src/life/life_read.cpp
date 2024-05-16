#include "life_read.h"
int Clife_read::my_init(void *p)
{
	this->name = "Clife_read";
	this->alias = "life_read";
	return 0;
}

Clife_read::Clife_read()
{
	this->my_init();
}

Clife_read::~Clife_read()
{

}

#ifndef LIFE_READ_TEST
#define LIFE_READ_TEST 0//1
#endif

#if LIFE_READ_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
