#ifndef SATELLITE_MEDICINE_BOX_H
#define SATELLITE_MEDICINE_BOX_H

#include "object/object.h"

namespace n_satellite_medicine_box {
	class Csatellite_medicine_box :public Object
	{
	public:
		Csatellite_medicine_box();
		~Csatellite_medicine_box();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_medicine_box); }
	};
}

using namespace n_satellite_medicine_box;

#endif
