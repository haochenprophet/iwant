#ifndef EARTH_WAR_H
#define EARTH_WAR_H

#include "object/object.h"

namespace n_earth_war {
	class Cearth_war :public Object
	{
	public:
		Cearth_war();
		~Cearth_war();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_war); }
	};
}

using namespace n_earth_war;

#endif
