#ifndef DESTROY_MESSAGE_H
#define DESTROY_MESSAGE_H

#include "message.h"

namespace n_destroy_message {
	class Cdestroy_message :public Cmessage
	{
	public:
		Cdestroy_message();
		~Cdestroy_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_destroy_message;

#endif
