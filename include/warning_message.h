#ifndef WARNING_MESSAGE_H
#define WARNING_MESSAGE_H

#include "message.h"

namespace n_warning_message {
	class Cwarning_message :public Cmessage
	{
	public:
		Cwarning_message();
		~Cwarning_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_warning_message;

#endif
