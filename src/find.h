#ifndef FIND_H
#define FIND_H

#include "object.h"

namespace n_find {
	class Cfind :public Object
	{
	public:
		Cfind();
		~Cfind();
		int my_init(void *p=nullptr);
	};
}

using namespace n_find;

#endif
