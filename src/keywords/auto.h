#ifndef AUTO_H
#define AUTO_H

#include "object/object.h"

namespace n_auto {
	class Cauto :public Object
	{
	public:
		Cauto();
		int my_init(void *p=nullptr);
	};
}

using namespace n_auto;

#endif
