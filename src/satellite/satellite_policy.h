#ifndef SATELLITE_POLICY_H
#define SATELLITE_POLICY_H

#include "../object.h"

namespace n_satellite_policy {
	class Csatellite_policy :public Object
	{
	public:
		Csatellite_policy();
		~Csatellite_policy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_policy); }
	};
}

using namespace n_satellite_policy;

#endif
