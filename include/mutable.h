#ifndef MUTABLE_H
#define MUTABLE_H

#include "../object.h"

namespace n_mutable {
	class Cmutable :public Object
	{
	public:
		Cmutable();
		int my_init(void *p=nullptr);
	};
}

using namespace n_mutable;

#endif
