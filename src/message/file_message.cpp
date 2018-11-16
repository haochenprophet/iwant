#include "file_message.h"
int Cfile_message::my_init(void *p)
{
	this->name = "Cfile_message";
	this->alias = "file_message";
	return 0;
}

Cfile_message::Cfile_message()
{
	this->my_init();
}

Cfile_message::~Cfile_message()
{

}

#ifndef FILE_MESSAGE_TEST
#define FILE_MESSAGE_TEST 0//1
#endif

#if FILE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FILE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 