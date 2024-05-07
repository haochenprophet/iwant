#ifndef PASSWORD_MESSAGE_H
#define PASSWORD_MESSAGE_H

#include "message.h"

namespace n_password_message {
	class Cpassword_message :public Cmessage
	{
	public:
		Cpassword_message();
		~Cpassword_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_password_message;

#endif
