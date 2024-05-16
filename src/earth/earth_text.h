#ifndef EARTH_TEXT_H
#define EARTH_TEXT_H

#include "object/object.h"

namespace n_earth_text {
	class Cearth_text :public Object
	{
	public:
		Cearth_text();
		~Cearth_text();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_text); }
	};
}

using namespace n_earth_text;

#endif
