#ifndef RECEIVE_MESSAGE_H
#define RECEIVE_MESSAGE_H

#include "message.h"

namespace n_receive_message {
	class Creceive_message :public Cmessage
	{
	public:
		Creceive_message();
		~Creceive_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_receive_message;

#endif
