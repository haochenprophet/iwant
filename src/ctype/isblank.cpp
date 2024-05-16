#include "isblank.h"
int Cisblank::my_init(void *p)
{
	this->name = "Cisblank";
	this->alias = "isblank";
	return 0;
}

Cisblank::Cisblank()
{
	this->my_init();
}

Cisblank::~Cisblank()
{

}

#ifndef ISBLANK_TEST
#define ISBLANK_TEST 0//1
#endif

#if ISBLANK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISBLANK_TEST\n\n";

	return 0;
}
#endif 