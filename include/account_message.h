#ifndef ACCOUNT_MESSAGE_H
#define ACCOUNT_MESSAGE_H

#include "message.h"

namespace n_account_message {
	class Caccount_message :public Cmessage
	{
	public:
		Caccount_message();
		~Caccount_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_account_message;

#endif
