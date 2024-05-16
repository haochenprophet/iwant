#ifndef PRIVATE_H
#define PRIVATE_H

#include "object/object.h"

namespace n_private {
	class Cprivate :public Object
	{
	public:
		Cprivate();
		int my_init(void *p=nullptr);
	};
}

using namespace n_private;

#endif
