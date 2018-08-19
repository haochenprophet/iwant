#include "setvbuf.h"
int Csetvbuf::my_init(void *p)
{
	this->name = "Csetvbuf";
	this->alias = "setvbuf";
	return 0;
}

Csetvbuf::Csetvbuf()
{
	this->my_init();
}

Csetvbuf::~Csetvbuf()
{

}

#ifndef SETVBUF_TEST
#define SETVBUF_TEST 0//1
#endif

#if SETVBUF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SETVBUF_TEST\n\n";

	return 0;
}
#endif 