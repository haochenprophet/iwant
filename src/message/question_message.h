#ifndef QUESTION_MESSAGE_H
#define QUESTION_MESSAGE_H

#include "message.h"

namespace n_question_message {
	class Cquestion_message :public Cmessage
	{
	public:
		Cquestion_message();
		~Cquestion_message();
		int my_init(void *p=nullptr);
	};
}

using namespace n_question_message;

#endif
