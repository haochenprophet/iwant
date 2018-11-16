#ifndef MARK_MESSAGE_H
#define MARK_MESSAGE_H

#include "message.h"

namespace n_mark_message {
	class Cmark_message :public Cmessage
	{
	public:
		Cmark_message();
		~Cmark_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_mark_message;

#endif
