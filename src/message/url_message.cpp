#include "url_message.h"
int Curl_message::my_init(void *p)
{
	this->name = "Curl_message";
	this->alias = "url_message";
	return 0;
}

Curl_message::Curl_message()
{
	this->my_init();
}

Curl_message::~Curl_message()
{

}

#ifndef URL_MESSAGE_TEST
#define URL_MESSAGE_TEST 0//1
#endif

#if URL_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "URL_MESSAGE_TEST\n\n";

	return 0;
}
#endif 