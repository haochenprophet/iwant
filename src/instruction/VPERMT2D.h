#ifndef VPERMT2D_H
#define VPERMT2D_H

#include "object.h"

namespace n_VPERMT2D {
	class CVPERMT2D :public Object
	{
	public:
		CVPERMT2D();
		~CVPERMT2D();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMT2D;

#endif
