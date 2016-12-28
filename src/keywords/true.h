#ifndef TRUE_H
#define TRUE_H

#include "object.h"

namespace n_true {
	class Ctrue :public Object
	{
	public:
		Ctrue();
		int my_init(void *p=nullptr);
	};
}

using namespace n_true;

#endif
