#ifndef VPERMT2Q_H
#define VPERMT2Q_H

#include "object/object.h"

namespace n_VPERMT2Q {
	class CVPERMT2Q :public Object
	{
	public:
		CVPERMT2Q();
		~CVPERMT2Q();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMT2Q;

#endif
