#ifndef SECURITY_EVALUATION_H
#define SECURITY_EVALUATION_H

#include "../object.h"

namespace n_security_evaluation {
	class Csecurity_evaluation :public Object
	{
	public:
		Csecurity_evaluation();
		~Csecurity_evaluation();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_evaluation); }
	};
}

using namespace n_security_evaluation;

#endif
