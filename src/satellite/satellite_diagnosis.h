#ifndef SATELLITE_DIAGNOSIS_H
#define SATELLITE_DIAGNOSIS_H

#include "../object.h"

namespace n_satellite_diagnosis {
	class Csatellite_diagnosis :public Object
	{
	public:
		Csatellite_diagnosis();
		~Csatellite_diagnosis();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_diagnosis); }
	};
}

using namespace n_satellite_diagnosis;

#endif
