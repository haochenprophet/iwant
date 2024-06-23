#include "text_type.h"
int Ctext_type::my_init(void *p)
{
	this->name = "Ctext_type";
	this->alias = "text_type";
	return 0;
}

Ctext_type::Ctext_type()
{
	this->my_init();
}

Ctext_type::~Ctext_type()
{

}

#ifndef TEXT_TYPE_TEST
#define TEXT_TYPE_TEST 0//1
#endif

#if TEXT_TYPE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
