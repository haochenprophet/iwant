#ifndef AFFAIR_MESSAGE_H
#define AFFAIR_MESSAGE_H

#include "message.h"

namespace n_affair_message {
	class Caffair_message :public Cmessage
	{
	public:
		Caffair_message();
		~Caffair_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_affair_message;

#endif
