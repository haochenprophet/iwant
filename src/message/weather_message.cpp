#include "weather_message.h"
int Cweather_message::my_init(void *p)
{
	this->name = "Cweather_message";
	this->alias = "weather_message";
	return 0;
}

Cweather_message::Cweather_message()
{
	this->my_init();
}

Cweather_message::~Cweather_message()
{

}

#ifndef WEATHER_MESSAGE_TEST
#define WEATHER_MESSAGE_TEST 0//1
#endif

#if WEATHER_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WEATHER_MESSAGE_TEST\n\n";

	return 0;
}
#endif 