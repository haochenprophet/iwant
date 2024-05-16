#ifndef PUSH_H
#define PUSH_H

#include "object/object.h"

namespace n_PUSH {
	class CPUSH :public Object
	{
	public:
		CPUSH();
		~CPUSH();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUSH;

#endif
