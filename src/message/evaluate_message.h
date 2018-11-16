#ifndef EVALUATE_MESSAGE_H
#define EVALUATE_MESSAGE_H

#include "message.h"

namespace n_evaluate_message {
	class Cevaluate_message :public Cmessage
	{
	public:
		Cevaluate_message();
		~Cevaluate_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_evaluate_message;

#endif
