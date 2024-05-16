#ifndef HOME_DELETE_H
#define HOME_DELETE_H

#include "object/object.h"

namespace n_home_delete {
	class Chome_delete :public Object
	{
	public:
		Chome_delete();
		~Chome_delete();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_delete); }
	};
}

using namespace n_home_delete;

#endif
