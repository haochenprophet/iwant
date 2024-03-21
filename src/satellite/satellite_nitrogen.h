#ifndef SATELLITE_NITROGEN_H
#define SATELLITE_NITROGEN_H

#include "../object.h"

namespace n_satellite_nitrogen {
	class Csatellite_nitrogen :public Object
	{
	public:
		Csatellite_nitrogen();
		~Csatellite_nitrogen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_nitrogen); }
	};
}

using namespace n_satellite_nitrogen;

#endif
