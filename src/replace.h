#ifndef REPLACE_H
#define REPLACE_H

#include "object.h"

namespace n_replace {
	class Creplace :public Object
	{
	public:
		Creplace();
		~Creplace();
		int my_init(void *p=nullptr);
	};
}

using namespace n_replace;

#endif
