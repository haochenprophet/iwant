#ifndef DIE_H
#define DIE_H

#include "object.h"

namespace n_die {
	class Cdie :public Object
	{
	public:
		Cdie();
		int my_init(void *p=nullptr);
	};
}

using namespace n_die;

#endif
