#ifndef ERROR_MESSAGE_H
#define ERROR_MESSAGE_H

#include "message.h"

namespace n_error_message {
	class Cerror_message :public Cmessage
	{
	public:
		Cerror_message();
		~Cerror_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_error_message;

#endif
