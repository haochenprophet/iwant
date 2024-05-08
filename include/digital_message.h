#ifndef DIGITAL_MESSAGE_H
#define DIGITAL_MESSAGE_H

#include "message.h"

namespace n_digital_message {
	class Cdigital_message :public Cmessage
	{
	public:
		Cdigital_message();
		~Cdigital_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_digital_message;

#endif
