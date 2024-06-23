#include "text_attribute.h"
int Ctext_attribute::my_init(void *p)
{
	this->name = "Ctext_attribute";
	this->alias = "text_attribute";
	return 0;
}

Ctext_attribute::Ctext_attribute()
{
	this->my_init();
}

Ctext_attribute::~Ctext_attribute()
{

}

#ifndef TEXT_ATTRIBUTE_TEST
#define TEXT_ATTRIBUTE_TEST 0//1
#endif

#if TEXT_ATTRIBUTE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
