#include "home_message.h"
int Chome_message::my_init(void *p)
{
	this->name = "Chome_message";
	this->alias = "home_message";
	return 0;
}

Chome_message::Chome_message()
{
	this->my_init();
}

Chome_message::~Chome_message()
{

}

#ifndef HOME_MESSAGE_TEST
#define HOME_MESSAGE_TEST 0//1
#endif

#if HOME_MESSAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
