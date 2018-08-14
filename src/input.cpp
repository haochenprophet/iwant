#include "input.h"
#include "input_class.h"

int Cinput::my_init(void *p)
{
	this->name = "Cinput";
	this->alias = "input";
	return 0;
}

Cinput::Cinput()
{
	this->my_init();
}

#if INPUT_TEST

int inputin(int argc, char *argv[])
{
	std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";
	return 0;
}
#endif
