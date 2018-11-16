#ifndef REWARD_MESSAGE_H
#define REWARD_MESSAGE_H

#include "message.h"

namespace n_reward_message {
	class Creward_message :public Cmessage
	{
	public:
		Creward_message();
		~Creward_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_reward_message;

#endif
