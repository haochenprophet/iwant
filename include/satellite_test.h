#ifndef SATELLITE_TEST_H
#define SATELLITE_TEST_H

#include "../object.h"

namespace n_satellite_test {
	class Csatellite_test :public Object
	{
	public:
		Csatellite_test();
		~Csatellite_test();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_test); }
	};
}

using namespace n_satellite_test;

#endif
