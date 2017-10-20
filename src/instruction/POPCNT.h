#ifndef POPCNT_H
#define POPCNT_H

#include "object.h"

namespace n_POPCNT {
	class CPOPCNT :public Object
	{
	public:
		CPOPCNT();
		~CPOPCNT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POPCNT;

#endif
