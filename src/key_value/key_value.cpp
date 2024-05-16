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

key_value::key_value()
{
	this->my_init();
}

key_value::~key_value()
{

}

void key_value::my_init()
{
	this->key = nullptr;
	this->value = nullptr;
	this->key_size = 0;
	this->value_size = 0;
}

bool key_value::is_me(void* key, size_t size)
{
	if (this->key == nullptr || this->key_size == 0 || this->key_size!=size) return false;
	if (memcmp(key, this->key, size) == 0) return true;
	return false;
}

void key_value::set(void* key, size_t k_size, void* value, size_t v_size, int type)
{
	this->key = key;
	this->key_size = k_size;
	this->value = value;
	this->value_size = v_size;
	this->type = type;
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
