#ifndef VREDUCEPS_H
#define VREDUCEPS_H

#include "object/object.h"

namespace n_VREDUCEPS {
	class CVREDUCEPS :public Object
	{
	public:
		CVREDUCEPS();
		~CVREDUCEPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VREDUCEPS;

#endif
