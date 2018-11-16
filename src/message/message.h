#ifndef MESSAGE_H
#define MESSAGE_H

#include "../object.h"

namespace n_message {
	class Cmessage :public Object
	{
	public:
		Cmessage();
		~Cmessage();
		int my_init(void *p=nullptr);
	};
}

using namespace n_message;

#endif
