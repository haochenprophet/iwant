#ifndef CLONE_H
#define CLONE_H

#include "object.h"

namespace n_clone {
	class Cclone :public Object
	{
	public:
		Cclone();
		int my_init(void *p=nullptr);
	};
}

using namespace n_clone;

#endif
