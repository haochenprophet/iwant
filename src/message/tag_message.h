#ifndef TAG_MESSAGE_H
#define TAG_MESSAGE_H

#include "message.h"

namespace n_tag_message {
	class Ctag_message :public Cmessage
	{
	public:
		Ctag_message();
		~Ctag_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tag_message;

#endif
