#ifndef LOCK_H
#define LOCK_H

#include "../object.h"

namespace n_LOCK {
	class CLOCK :public Object
	{
	public:
		CLOCK();
		~CLOCK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LOCK;

#endif
