#ifndef PUBLIC_H
#define PUBLIC_H

#include "object.h"

namespace n_public {
	class Cpublic :public Object
	{
	public:
		Cpublic();
		int my_init(void *p=nullptr);
	};
}

using namespace n_public;

#endif
