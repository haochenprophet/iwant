#ifndef ENTER_H
#define ENTER_H

#include "object.h"

namespace n_ENTER {
	class CENTER :public Object
	{
	public:
		CENTER();
		~CENTER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ENTER;

#endif
