#ifndef CODE_MESSAGE_H
#define CODE_MESSAGE_H

#include "message.h"

namespace n_code_message {
	class Ccode_message :public Cmessage
	{
	public:
		Ccode_message();
		~Ccode_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_code_message;

#endif
