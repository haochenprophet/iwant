#ifndef REFERENCE_MESSAGE_H
#define REFERENCE_MESSAGE_H

#include "message.h"

namespace n_reference_message {
	class Creference_message :public Cmessage
	{
	public:
		Creference_message();
		~Creference_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_reference_message;

#endif
