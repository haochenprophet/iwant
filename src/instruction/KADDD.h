#ifndef KADDD_H
#define KADDD_H

#include "object/object.h"

namespace n_KADDD {
	class CKADDD :public Object
	{
	public:
		CKADDD();
		~CKADDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KADDD;

#endif
