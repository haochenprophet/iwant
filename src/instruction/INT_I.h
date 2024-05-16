#ifndef INT_H
#define INT_H

#include "object/object.h"

namespace n_INT {
	class CINT :public Object
	{
	public:
		CINT();
		~CINT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INT;

#endif
