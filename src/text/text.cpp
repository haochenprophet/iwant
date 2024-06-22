#include "text.h"
int Ctext::my_init(void *p)
{
	this->name = "Ctext";
	this->alias = "text";
	return 0;
}

Ctext::Ctext()
{
	this->my_init();
}

Ctext::~Ctext()
{

}

#ifndef TEXT_TEST
#define TEXT_TEST 0//1
#endif

#if TEXT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
