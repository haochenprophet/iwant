#ifndef ISGRAPH_H
#define ISGRAPH_H

#include "object/object.h"

namespace n_isgraph {
	class Cisgraph :public Object
	{
	public:
		Cisgraph();
		~Cisgraph();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isgraph;

#endif
