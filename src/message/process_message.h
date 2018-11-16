#ifndef PROCESS_MESSAGE_H
#define PROCESS_MESSAGE_H

#include "message.h"

namespace n_process_message {
	class Cprocess_message :public Cmessage
	{
	public:
		Cprocess_message();
		~Cprocess_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_process_message;

#endif
