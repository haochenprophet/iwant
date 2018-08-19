#include "remquo.h"
int Cremquo::my_init(void *p)
{
	this->name = "Cremquo";
	this->alias = "remquo";
	return 0;
}

Cremquo::Cremquo()
{
	this->my_init();
}

Cremquo::~Cremquo()
{

}

#ifndef REMQUO_TEST
#define REMQUO_TEST 0//1
#endif

#if REMQUO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REMQUO_TEST\n\n";

	return 0;
}
#endif 