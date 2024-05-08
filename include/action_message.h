#ifndef ACTION_MESSAGE_H
#define ACTION_MESSAGE_H

#include "message.h"

namespace n_action_message {
	class Caction_message :public Cmessage
	{
	public:
		Caction_message();
		~Caction_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_action_message;

#endif
