#ifndef SATELLITE_HELP_H
#define SATELLITE_HELP_H

#include "../object.h"

namespace n_satellite_help {
	class Csatellite_help :public Object
	{
	public:
		Csatellite_help();
		~Csatellite_help();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_help); }
	};
}

using namespace n_satellite_help;

#endif
