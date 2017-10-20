#ifndef BEXTR_H
#define BEXTR_H

#include "object.h"

namespace n_BEXTR {
	class CBEXTR :public Object
	{
	public:
		CBEXTR();
		~CBEXTR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BEXTR;

#endif
