#ifndef REPLY_MESSAGE_H
#define REPLY_MESSAGE_H

#include "message.h"

namespace n_reply_message {
	class Creply_message :public Cmessage
	{
	public:
		Creply_message();
		~Creply_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_reply_message;

#endif
