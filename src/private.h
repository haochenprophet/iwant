#ifndef PRIVATE_H
#define PRIVATE_H

#include "object.h"

namespace n_private {
	class Cprivate :public Object
	{
	public:
		Cprivate();
		int my_init(void *p=NULL);
	};
}

using namespace n_private;

#endif
