#ifndef INTO_H
#define INTO_H

#include "object.h"

namespace n_INTO {
	class CINTO :public Object
	{
	public:
		CINTO();
		~CINTO();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INTO;

#endif
