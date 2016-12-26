#ifndef UNSET_H
#define UNSET_H

#include "object.h"

namespace n_unset {
	class Cunset :public Object
	{
	public:
		Cunset();
		int my_init(void *p=nullptr);
	};
}

using namespace n_unset;

#endif
