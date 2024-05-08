#ifndef MODIFY_MESSAGE_H
#define MODIFY_MESSAGE_H

#include "message.h"

namespace n_modify_message {
	class Cmodify_message :public Cmessage
	{
	public:
		Cmodify_message();
		~Cmodify_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_modify_message;

#endif
