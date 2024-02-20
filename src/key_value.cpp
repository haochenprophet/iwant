#include "key_value.h"
int Ckey_value::my_init(void *p)
{
	this->name = "Ckey_value";
	this->alias = "key_value";
	return 0;
}

Ckey_value::Ckey_value()
{
	this->my_init();
}

Ckey_value::~Ckey_value()
{

}

#ifndef KEY_VALUE_TEST
#define KEY_VALUE_TEST 0//1
#endif

#if KEY_VALUE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
