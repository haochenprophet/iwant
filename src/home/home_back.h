#ifndef HOME_BACK_H
#define HOME_BACK_H

#include "object/object.h"

namespace n_home_back {
	class Chome_back :public Object
	{
	public:
		Chome_back();
		~Chome_back();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_back); }
	};
}

using namespace n_home_back;

#endif
