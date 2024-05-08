#ifndef HELLO_H
#define HELLO_H

#include "../object.h"

namespace n_hello {
	class Chello :public Object
	{
	public:
		Chello();
		~Chello();
		int my_init(void *p=nullptr);
	};
}

using namespace n_hello;

#endif
