#ifndef EARTH_POLITICS_H
#define EARTH_POLITICS_H

#include "object/object.h"

namespace n_earth_politics {
	class Cearth_politics :public Object
	{
	public:
		Cearth_politics();
		~Cearth_politics();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_politics); }
	};
}

using namespace n_earth_politics;

#endif
