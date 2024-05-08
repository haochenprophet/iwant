#ifndef SAVE_MESSAGE_H
#define SAVE_MESSAGE_H

#include "message.h"

namespace n_save_message {
	class Csave_message :public Cmessage
	{
	public:
		Csave_message();
		~Csave_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_save_message;

#endif
