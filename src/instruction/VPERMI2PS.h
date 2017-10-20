#ifndef VPERMI2PS_H
#define VPERMI2PS_H

#include "object.h"

namespace n_VPERMI2PS {
	class CVPERMI2PS :public Object
	{
	public:
		CVPERMI2PS();
		~CVPERMI2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMI2PS;

#endif
