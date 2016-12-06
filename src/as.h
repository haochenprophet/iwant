#ifndef AS_H
#define AS_H

#include "object.h"

namespace n_as {
	class Cas :public Object
	{
	public:
		Cas();
		int my_init(void *p=NULL);
	};
}

using namespace n_as;

#endif
