#ifndef HOME_ADD_H
#define HOME_ADD_H

#include "object/object.h"

namespace n_home_add {
	class Chome_add :public Object
	{
	public:
		Chome_add();
		~Chome_add();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_add); }
	};
}

using namespace n_home_add;

#endif
