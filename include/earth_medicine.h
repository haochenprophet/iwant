#ifndef EARTH_MEDICINE_H
#define EARTH_MEDICINE_H

#include "../object.h"

namespace n_earth_medicine {
	class Cearth_medicine :public Object
	{
	public:
		Cearth_medicine();
		~Cearth_medicine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_medicine); }
	};
}

using namespace n_earth_medicine;

#endif
