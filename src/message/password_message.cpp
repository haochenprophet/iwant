#include "password_message.h"
int Cpassword_message::my_init(void *p)
{
	this->name = "Cpassword_message";
	this->alias = "password_message";
	return 0;
}

Cpassword_message::Cpassword_message()
{
	this->my_init();
}

Cpassword_message::~Cpassword_message()
{

}

#ifndef PASSWORD_MESSAGE_TEST
#define PASSWORD_MESSAGE_TEST 0//1
#endif

#if PASSWORD_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PASSWORD_MESSAGE_TEST\n\n";

	return 0;
}
#endif 