#ifndef HOME_MANAGE_H
#define HOME_MANAGE_H

#include "../object.h"

namespace n_home_manage {
	class Chome_manage :public Object
	{
	public:
		Chome_manage();
		~Chome_manage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_manage); }
	};
}

using namespace n_home_manage;

#endif
