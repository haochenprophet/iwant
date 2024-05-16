#ifndef HOME_CLOTHES_H
#define HOME_CLOTHES_H

#include "object/object.h"

namespace n_home_clothes {
	class Chome_clothes :public Object
	{
	public:
		Chome_clothes();
		~Chome_clothes();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_clothes); }
	};
}

using namespace n_home_clothes;

#endif
