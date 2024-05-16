#include "material_message.h"
int Cmaterial_message::my_init(void *p)
{
	this->name = "Cmaterial_message";
	this->alias = "material_message";
	return 0;
}

Cmaterial_message::Cmaterial_message()
{
	this->my_init();
}

Cmaterial_message::~Cmaterial_message()
{

}

#ifndef MATERIAL_MESSAGE_TEST
#define MATERIAL_MESSAGE_TEST 0//1
#endif

#if MATERIAL_MESSAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
