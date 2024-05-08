#ifndef EARTH_INFORMATION_H
#define EARTH_INFORMATION_H

#include "../object.h"

namespace n_earth_information {
	class Cearth_information :public Object
	{
	public:
		Cearth_information();
		~Cearth_information();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cearth_information); }
	};
}

using namespace n_earth_information;

#endif
