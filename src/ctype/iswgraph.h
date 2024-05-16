#ifndef ISWGRAPH_H
#define ISWGRAPH_H

#include "object/object.h"

namespace n_iswgraph {
	class Ciswgraph :public Object
	{
	public:
		Ciswgraph();
		~Ciswgraph();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswgraph;

#endif
