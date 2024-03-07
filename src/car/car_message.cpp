#include "car_message.h"
int Ccar_message::my_init(void *p)
{
	this->name = "Ccar_message";
	this->alias = "car_message";
	return 0;
}

Ccar_message::Ccar_message()
{
	this->my_init();
}

Ccar_message::~Ccar_message()
{

}

#ifndef CAR_MESSAGE_TEST
#define CAR_MESSAGE_TEST 0//1
#endif

#if CAR_MESSAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
