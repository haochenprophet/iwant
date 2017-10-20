#ifndef INT_3_H
#define INT_3_H

#include "object.h"

namespace n_INT_3 {
	class CINT_3 :public Object
	{
	public:
		CINT_3();
		~CINT_3();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INT_3;

#endif
