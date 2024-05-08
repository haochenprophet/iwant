#ifndef UNANSWER_MESSAGE_H
#define UNANSWER_MESSAGE_H

#include "message.h"

namespace n_unanswer_message {
	class Cunanswer_message :public Cmessage
	{
	public:
		Cunanswer_message();
		~Cunanswer_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_unanswer_message;

#endif
