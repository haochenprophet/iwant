#ifndef HOME_FIND_H
#define HOME_FIND_H

#include "../object.h"

namespace n_home_find {
	class Chome_find :public Object
	{
	public:
		Chome_find();
		~Chome_find();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_find); }
	};
}

using namespace n_home_find;

#endif
