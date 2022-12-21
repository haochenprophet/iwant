#include "message.h"
#include "message_g_code.i"

int Cmessage::my_init(void *p)
{
	this->name = "Cmessage";
	this->alias = "message";
	return 0;
}

Cmessage::Cmessage()
{
	this->my_init();
}

Cmessage::~Cmessage()
{

}

void Cmessage::add_global_objects(Object* p) //Add  package global object to Object* p
{
	message_add_objects(p);
}

#ifndef MESSAGE_TEST
#define MESSAGE_TEST 0//1
#endif

#if MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MESSAGE_TEST\n\n";

	return 0;
}
#endif 