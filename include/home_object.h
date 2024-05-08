#ifndef HOME_OBJECT_H
#define HOME_OBJECT_H

#include "../object.h"

namespace n_home_object {
	class Chome_object :public Object
	{
	public:
		Chome_object();
		~Chome_object();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_object); }
	};
}

using namespace n_home_object;

#endif
