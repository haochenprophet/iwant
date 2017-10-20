#ifndef PMINUW_H
#define PMINUW_H

#include "object.h"

namespace n_PMINUW {
	class CPMINUW :public Object
	{
	public:
		CPMINUW();
		~CPMINUW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINUW;

#endif
