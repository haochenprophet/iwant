#ifndef SEND_MESSAGE_H
#define SEND_MESSAGE_H

#include "message.h"

namespace n_send_message {
	class Csend_message :public Cmessage
	{
	public:
		Csend_message();
		~Csend_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_send_message;

#endif
