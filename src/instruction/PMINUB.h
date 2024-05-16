#ifndef PMINUB_H
#define PMINUB_H

#include "object/object.h"

namespace n_PMINUB {
	class CPMINUB :public Object
	{
	public:
		CPMINUB();
		~CPMINUB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINUB;

#endif
