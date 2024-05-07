#ifndef DELETE_MESSAGE_H
#define DELETE_MESSAGE_H

#include "message.h"

namespace n_delete_message {
	class Cdelete_message :public Cmessage
	{
	public:
		Cdelete_message();
		~Cdelete_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_delete_message;

#endif
