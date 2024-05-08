#ifndef REVOKE_MESSAGE_H
#define REVOKE_MESSAGE_H

#include "message.h"

namespace n_revoke_message {
	class Crevoke_message :public Cmessage
	{
	public:
		Crevoke_message();
		~Crevoke_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_revoke_message;

#endif
