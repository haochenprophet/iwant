#ifndef OR_H
#define OR_H

#include "object.h"

namespace n_or {
	class Cor :public Object
	{
	public:
		Cor();
		int my_init(void *p=nullptr);
	};
}

using namespace n_or;

#endif
