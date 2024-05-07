#ifndef ADDRESS_MESSAGE_H
#define ADDRESS_MESSAGE_H

#include "message.h"

namespace n_address_message {
	class Caddress_message :public Cmessage
	{
	public:
		Caddress_message();
		~Caddress_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_address_message;

#endif
