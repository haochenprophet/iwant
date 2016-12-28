#ifndef INSTEADOF_H
#define INSTEADOF_H

#include "object.h"

namespace n_insteadof {
	class Cinsteadof :public Object
	{
	public:
		Cinsteadof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_insteadof;

#endif
