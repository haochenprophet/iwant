#include "text_split.h"
int Ctext_split::my_init(void *p)
{
	this->name = "Ctext_split";
	this->alias = "text_split";
	return 0;
}

Ctext_split::Ctext_split()
{
	this->my_init();
}

Ctext_split::~Ctext_split()
{

}

#ifndef TEXT_SPLIT_TEST
#define TEXT_SPLIT_TEST 0//1
#endif

#if TEXT_SPLIT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
