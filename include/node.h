#ifndef NODE_H
#define NODE_H

#include "object.h"

namespace n_node {
	class Cnode :public Object
	{
	public:
		Cnode();
		int my_init(void *p=nullptr);
	};
}

using namespace n_node;

#endif
