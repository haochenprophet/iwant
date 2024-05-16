#include "rewind.h"
int Crewind::my_init(void *p)
{
	this->name = "Crewind";
	this->alias = "rewind";
	return 0;
}

Crewind::Crewind()
{
	this->my_init();
}

Crewind::~Crewind()
{

}

void Crewind:: rewind_c(FILE* stream)
{
	rewind(stream);
}

#ifndef REWIND_TEST
#define REWIND_TEST 0//1
#endif

#if REWIND_TEST
#include "all/all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "REWIND_TEST\n\n";

	return 0;
}
#endif 