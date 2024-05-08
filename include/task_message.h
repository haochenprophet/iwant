#ifndef TASK_MESSAGE_H
#define TASK_MESSAGE_H

#include "message.h"

namespace n_task_message {
	class Ctask_message :public Cmessage
	{
	public:
		Ctask_message();
		~Ctask_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_task_message;

#endif
