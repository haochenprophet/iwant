#ifndef ANSWER_MESSAGE_H
#define ANSWER_MESSAGE_H

#include "message.h"

namespace n_answer_message {
	class Canswer_message :public Cmessage
	{
	public:
		Canswer_message();
		~Canswer_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_answer_message;

#endif
