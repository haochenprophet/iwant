#ifndef TRANSMIT_MESSAGE_H
#define TRANSMIT_MESSAGE_H

#include "message.h"

namespace n_transmit_message {
	class Ctransmit_message :public Cmessage
	{
	public:
		Ctransmit_message();
		~Ctransmit_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_transmit_message;

#endif
