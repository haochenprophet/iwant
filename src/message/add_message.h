#ifndef ADD_MESSAGE_H
#define ADD_MESSAGE_H

#include "message.h"

namespace n_add_message {
	class Cadd_message :public Cmessage
	{
	public:
		Cadd_message();
		~Cadd_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_add_message;

#endif
