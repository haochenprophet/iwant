#ifndef ATEXIT_H
#define ATEXIT_H

#include "../object.h"

namespace n_atexit {
	class Catexit :public Object
	{
	public:
		Catexit();
		~Catexit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atexit;

#endif
