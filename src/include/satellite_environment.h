#ifndef SATELLITE_ENVIRONMENT_H
#define SATELLITE_ENVIRONMENT_H

#include "../object.h"

namespace n_satellite_environment {
	class Csatellite_environment :public Object
	{
	public:
		Csatellite_environment();
		~Csatellite_environment();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_environment); }
	};
}

using namespace n_satellite_environment;

#endif
