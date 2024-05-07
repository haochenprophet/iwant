#ifndef SECURITY_ILLATION_H
#define SECURITY_ILLATION_H

#include "../object.h"

namespace n_security_illation {
	class Csecurity_illation :public Object
	{
	public:
		Csecurity_illation();
		~Csecurity_illation();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_illation); }
	};
}

using namespace n_security_illation;

#endif
