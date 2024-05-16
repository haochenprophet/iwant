#ifndef HOME_TIMELINE_H
#define HOME_TIMELINE_H

#include "object/object.h"

namespace n_home_timeline {
	class Chome_timeline :public Object
	{
	public:
		Chome_timeline();
		~Chome_timeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_timeline); }
	};
}

using namespace n_home_timeline;

#endif
