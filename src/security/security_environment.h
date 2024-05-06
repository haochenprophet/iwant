#ifndef SECURITY_ENVIRONMENT_H
#define SECURITY_ENVIRONMENT_H

#include "../object.h"

namespace n_security_environment {
	class Csecurity_environment :public Object
	{
	public:
		Csecurity_environment();
		~Csecurity_environment();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_environment); }
	};
}

using namespace n_security_environment;

#endif
