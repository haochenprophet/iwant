#ifndef HOME_SPACE_H
#define HOME_SPACE_H

#include "object/object.h"

namespace n_home_space {
	class Chome_space :public Object
	{
	public:
		Chome_space();
		~Chome_space();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_space); }
	};
}

using namespace n_home_space;

#endif
