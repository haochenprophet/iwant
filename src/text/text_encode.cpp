#include "text_encode.h"
int Ctext_encode::my_init(void *p)
{
	this->name = "Ctext_encode";
	this->alias = "text_encode";
	return 0;
}

Ctext_encode::Ctext_encode()
{
	this->my_init();
}

Ctext_encode::~Ctext_encode()
{

}

#ifndef TEXT_ENCODE_TEST
#define TEXT_ENCODE_TEST 0//1
#endif

#if TEXT_ENCODE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
