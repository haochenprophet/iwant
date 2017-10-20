#ifndef PINSRD_H
#define PINSRD_H

#include "object.h"

namespace n_PINSRD {
	class CPINSRD :public Object
	{
	public:
		CPINSRD();
		~CPINSRD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PINSRD;

#endif
