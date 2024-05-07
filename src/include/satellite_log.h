#ifndef SATELLITE_LOG_H
#define SATELLITE_LOG_H

#include "../object.h"

namespace n_satellite_log {
	class Csatellite_log :public Object
	{
	public:
		Csatellite_log();
		~Csatellite_log();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_log); }
	};
}

using namespace n_satellite_log;

#endif
