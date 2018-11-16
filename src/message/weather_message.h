#ifndef WEATHER_MESSAGE_H
#define WEATHER_MESSAGE_H

#include "message.h"

namespace n_weather_message {
	class Cweather_message :public Cmessage
	{
	public:
		Cweather_message();
		~Cweather_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_weather_message;

#endif
