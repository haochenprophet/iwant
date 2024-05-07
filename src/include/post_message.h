#ifndef POST_MESSAGE_H
#define POST_MESSAGE_H

#include "message.h"

namespace n_post_message {
	class Cpost_message :public Cmessage
	{
	public:
		Cpost_message();
		~Cpost_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_post_message;

#endif
