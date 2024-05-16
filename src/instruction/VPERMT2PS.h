#ifndef VPERMT2PS_H
#define VPERMT2PS_H

#include "object/object.h"

namespace n_VPERMT2PS {
	class CVPERMT2PS :public Object
	{
	public:
		CVPERMT2PS();
		~CVPERMT2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMT2PS;

#endif
