#ifndef EARTH_GOVERNMENT_H
#define EARTH_GOVERNMENT_H

#include "../object.h"

namespace n_earth_government {
	class Cearth_government :public Object
	{
	public:
		Cearth_government();
		~Cearth_government();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_government); }
	};
}

using namespace n_earth_government;

#endif
