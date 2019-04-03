#include "cpu.h"
int Ccpu::my_init(void *p)
{
	this->name = "Ccpu";
	this->alias = "cpu";
	return 0;
}

Ccpu::Ccpu()
{
	this->my_init();
}

Ccpu::~Ccpu()
{

}

#ifndef CPU_TEST
#define CPU_TEST 0//1
#endif

#if CPU_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CPU_TEST\n\n";

	return 0;
}
#endif 