#ifndef OCEAN_NITROGEN_H
#define OCEAN_NITROGEN_H

#include "object/object.h"

namespace n_ocean_nitrogen {
	class Cocean_nitrogen :public Object
	{
	public:
		Cocean_nitrogen();
		~Cocean_nitrogen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_nitrogen); }
	};
}

using namespace n_ocean_nitrogen;

#endif
