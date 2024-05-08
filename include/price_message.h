#ifndef PRICE_MESSAGE_H
#define PRICE_MESSAGE_H

#include "message.h"

namespace n_price_message {
	class Cprice_message :public Cmessage
	{
	public:
		Cprice_message();
		~Cprice_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_price_message;

#endif
