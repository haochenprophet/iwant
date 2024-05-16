#ifndef MOVSHDUP_H
#define MOVSHDUP_H

#include "object/object.h"

namespace n_MOVSHDUP {
	class CMOVSHDUP :public Object
	{
	public:
		CMOVSHDUP();
		~CMOVSHDUP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSHDUP;

#endif
