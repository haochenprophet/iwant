#ifndef SATELLITE_SWERVE_H
#define SATELLITE_SWERVE_H

#include "../object.h"

namespace n_satellite_swerve {
	class Csatellite_swerve :public Object
	{
	public:
		Csatellite_swerve();
		~Csatellite_swerve();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_swerve); }
	};
}

using namespace n_satellite_swerve;

#endif
