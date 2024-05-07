#ifndef SIZE_H
#define SIZE_H

#include "object.h"

namespace n_size {
	class Csize :public Object
	{
	public:
		Csize();
		~Csize();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csize); }
	};
}

using namespace n_size;

#endif
