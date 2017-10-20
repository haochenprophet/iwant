#ifndef RET_H
#define RET_H

#include "object.h"

namespace n_RET {
	class CRET :public Object
	{
	public:
		CRET();
		~CRET();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RET;

#endif
