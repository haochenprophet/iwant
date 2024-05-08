#ifndef BROADCAST_MESSAGE_H
#define BROADCAST_MESSAGE_H

#include "message.h"

namespace n_broadcast_message {
	class Cbroadcast_message :public Cmessage
	{
	public:
		Cbroadcast_message();
		~Cbroadcast_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_broadcast_message;

#endif
