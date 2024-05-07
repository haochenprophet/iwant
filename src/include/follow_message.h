#ifndef FOLLOW_MESSAGE_H
#define FOLLOW_MESSAGE_H

#include "message.h"

namespace n_follow_message {
	class Cfollow_message :public Cmessage
	{
	public:
		Cfollow_message();
		~Cfollow_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_follow_message;

#endif
