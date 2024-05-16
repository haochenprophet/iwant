#include "strcoll.h"
int Cstrcoll::my_init(void *p)
{
	this->name = "Cstrcoll";
	this->alias = "strcoll";
	return 0;
}

Cstrcoll::Cstrcoll()
{
	this->my_init();
}

Cstrcoll::~Cstrcoll()
{

}

#ifndef STRCOLL_TEST
#define STRCOLL_TEST 0//1
#endif

#if STRCOLL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRCOLL_TEST\n\n";

	return 0;
}
#endif 