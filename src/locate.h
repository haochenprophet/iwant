#ifndef LOCATE_H
#define LOCATE_H

#include "object.h"

namespace n_locate {
	class Clocate :public Object
	{
	public:
		Clocate();
		~Clocate();
		int my_init(void *p=nullptr);
	};
}

using namespace n_locate;

#endif
