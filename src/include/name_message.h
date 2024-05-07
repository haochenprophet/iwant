#ifndef NAME_MESSAGE_H
#define NAME_MESSAGE_H

#include "message.h"

namespace n_name_message {
	class Cname_message :public Cmessage
	{
	public:
		Cname_message();
		~Cname_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_name_message;

#endif
