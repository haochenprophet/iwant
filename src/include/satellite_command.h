#ifndef SATELLITE_COMMAND_H
#define SATELLITE_COMMAND_H

#include "../object.h"

namespace n_satellite_command {
	class Csatellite_command :public Object
	{
	public:
		Csatellite_command();
		~Csatellite_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_command); }
	};
}

using namespace n_satellite_command;

#endif
