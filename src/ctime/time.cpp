#include "time.h"
int Ctime::my_init(void *p)
{
	this->name = "Ctime";
	this->alias = "time";
	return 0;
}

Ctime::Ctime()
{
	this->my_init();
}

Ctime::~Ctime()
{

}

time_t Ctime::time_c(time_t* timer)
{
	return time(timer);
}

#ifndef TIME_TEST
#define TIME_TEST 0//1
#endif

#if TIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TIME_TEST\n\n";

	return 0;
}
#endif 