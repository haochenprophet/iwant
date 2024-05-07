#ifndef FORWARD_MESSAGE_H
#define FORWARD_MESSAGE_H

#include "message.h"

namespace n_forward_message {
	class Cforward_message :public Cmessage
	{
	public:
		Cforward_message();
		~Cforward_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_forward_message;

#endif
