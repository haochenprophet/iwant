#ifndef HOME_STATUS_H
#define HOME_STATUS_H

#include "object/object.h"

namespace n_home_status {
	class Chome_status :public Object
	{
	public:
		Chome_status();
		~Chome_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_status); }
	};
}

using namespace n_home_status;

#endif
