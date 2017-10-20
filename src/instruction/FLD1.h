#ifndef FLD1_H
#define FLD1_H

#include "object.h"

namespace n_FLD1 {
	class CFLD1 :public Object
	{
	public:
		CFLD1();
		~CFLD1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLD1;

#endif
