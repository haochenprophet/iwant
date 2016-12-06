#ifndef DIE_H
#define DIE_H

#include "object.h"

namespace n_die {
	class Cdie :public Object
	{
	public:
		Cdie();
		int my_init(void *p=NULL);
	};
}

using namespace n_die;

#endif
