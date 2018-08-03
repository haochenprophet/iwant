#include "but.h"
int Cbut::my_init(void *p)
{
	this->name = "Cbut";
	this->alias = "but";
	return 0;
}

Cbut::Cbut()
{
	this->my_init();
}

Cbut::~Cbut()
{

}

#ifndef BUT_TEST
#define BUT_TEST 0//1
#endif

#if BUT_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "BUT_TEST\n\n";

	return 0;
}
#endif 