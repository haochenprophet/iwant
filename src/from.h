#ifndef FROM_H
#define FROM_H

#include "object.h"

namespace n_from {
	class Cfrom :public Object
	{
	public:
		Cfrom();
		int my_init(void *p=NULL);
	};
}

using namespace n_from;

#endif
