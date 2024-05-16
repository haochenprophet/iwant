#include "fwrite.h"
int Cfwrite::my_init(void *p)
{
	this->name = "Cfwrite";
	this->alias = "fwrite";
	return 0;
}

Cfwrite::Cfwrite()
{
	this->my_init();
}

Cfwrite::~Cfwrite()
{

}

size_t Cfwrite::fwrite_c(const void* ptr, size_t size, size_t count, FILE* stream)
{
	return fwrite(ptr,size,count,stream);
}


#ifndef FWRITE_TEST
#define FWRITE_TEST 0//1
#endif

#if FWRITE_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "FWRITE_TEST\n\n";

	return 0;
}
#endif 