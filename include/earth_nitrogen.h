#ifndef EARTH_NITROGEN_H
#define EARTH_NITROGEN_H

#include "../object.h"

namespace n_earth_nitrogen {
	class Cearth_nitrogen :public Object
	{
	public:
		Cearth_nitrogen();
		~Cearth_nitrogen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_nitrogen); }
	};
}

using namespace n_earth_nitrogen;

#endif
