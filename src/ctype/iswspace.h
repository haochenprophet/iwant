#ifndef ISWSPACE_H
#define ISWSPACE_H

#include "object/object.h"

namespace n_iswspace {
	class Ciswspace :public Object
	{
	public:
		Ciswspace();
		~Ciswspace();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswspace;

#endif
