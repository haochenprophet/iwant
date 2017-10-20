#ifndef STD_H
#define STD_H

#include "object.h"

namespace n_STD {
	class CSTD :public Object
	{
	public:
		CSTD();
		~CSTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STD;

#endif
