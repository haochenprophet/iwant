#include "log.h"
int Clog::my_init(void *p)
{
	this->name = "Clog";
	this->alias = "log";
	return 0;
}

Clog::Clog()
{
	this->my_init();
}

Clog::~Clog()
{

}

#ifndef LOG_TEST
#define LOG_TEST 0//1
#endif

#if LOG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOG_TEST\n\n";

	return 0;
}
#endif 