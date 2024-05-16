#ifndef TRY_H
#define TRY_H

#include "object/object.h"

namespace n_try {
	class Ctry :public Object
	{
	public:
		Ctry();
		int my_init(void *p=nullptr);
	};
}

using namespace n_try;

#endif
