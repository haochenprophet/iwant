#ifndef SECURITY_TEST_H
#define SECURITY_TEST_H

#include "object/object.h"

namespace n_security_test {
	class Csecurity_test :public Object
	{
	public:
		Csecurity_test();
		~Csecurity_test();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_test); }
	};
}

using namespace n_security_test;

#endif
