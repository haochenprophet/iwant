#ifndef SCORE_MESSAGE_H
#define SCORE_MESSAGE_H

#include "message.h"

namespace n_score_message {
	class Cscore_message :public Cmessage
	{
	public:
		Cscore_message();
		~Cscore_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_score_message;

#endif
