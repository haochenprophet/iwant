#ifndef HOME_LIVE_H
#define HOME_LIVE_H

#include "object/object.h"

namespace n_home_live {
	class Chome_live :public Object
	{
	public:
		Chome_live();
		~Chome_live();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_live); }
	};
}

using namespace n_home_live;

#endif
