#ifndef MAIL_MESSAGE_H
#define MAIL_MESSAGE_H

#include "message.h"

namespace n_mail_message {
	class Cmail_message :public Cmessage
	{
	public:
		Cmail_message();
		~Cmail_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_mail_message;

#endif
