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

int Csetvbuf::setvbuf_c(FILE* stream, char* buffer, int mode, size_t size)
{
	return setvbuf(stream,buffer, mode, size);
}

#ifndef SETVBUF_TEST
#define SETVBUF_TEST 0//1
#endif

#if SETVBUF_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SETVBUF_TEST\n\n";

	return 0;
}
#endif 