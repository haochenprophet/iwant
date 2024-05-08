#ifndef MONEY_MESSAGE_H
#define MONEY_MESSAGE_H

#include "message.h"

namespace n_money_message {
	class Cmoney_message :public Cmessage
	{
	public:
		Cmoney_message();
		~Cmoney_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_money_message;

#endif
