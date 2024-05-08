#ifndef SECURITY_ANSWER_H
#define SECURITY_ANSWER_H

#include "../object.h"

namespace n_security_answer {
	class Csecurity_answer :public Object
	{
	public:
		Csecurity_answer();
		~Csecurity_answer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_answer); }
	};
}

using namespace n_security_answer;

#endif
