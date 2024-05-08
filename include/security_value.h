#ifndef SECURITY_VALUE_H
#define SECURITY_VALUE_H

#include "../object.h"

namespace n_security_value {
	class Csecurity_value :public Object
	{
	public:
		Csecurity_value();
		~Csecurity_value();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_value); }
	};
}

using namespace n_security_value;

#endif
