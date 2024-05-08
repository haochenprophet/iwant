#ifndef TIME_MESSAGE_H
#define TIME_MESSAGE_H

#include "message.h"

namespace n_time_message {
	class Ctime_message :public Cmessage
	{
	public:
		Ctime_message();
		~Ctime_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_time_message;

#endif
