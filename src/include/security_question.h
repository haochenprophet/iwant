#ifndef SECURITY_QUESTION_H
#define SECURITY_QUESTION_H

#include "../object.h"

namespace n_security_question {
	class Csecurity_question :public Object
	{
	public:
		Csecurity_question();
		~Csecurity_question();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_question); }
	};
}

using namespace n_security_question;

#endif
