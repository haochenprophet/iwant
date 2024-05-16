#ifndef MARS_H
#define MARS_H

#include "object/object.h"

namespace n_mars {
	class Cmars :public Object
	{
	public:
		Cmars();
		~Cmars();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars); }
	};
}

using namespace n_mars;

#endif
