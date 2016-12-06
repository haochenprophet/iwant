#ifndef TRY_H
#define TRY_H

#include "object.h"

namespace n_try {
	class Ctry :public Object
	{
	public:
		Ctry();
		int my_init(void *p=NULL);
	};
}

using namespace n_try;

#endif
