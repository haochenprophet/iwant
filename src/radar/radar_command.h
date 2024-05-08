#ifndef RADAR_COMMAND_H
#define RADAR_COMMAND_H

#include "../object.h"

namespace n_radar_command {
	class Cradar_command :public Object
	{
	public:
		Cradar_command();
		~Cradar_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_command); }
	};
}

using namespace n_radar_command;

#endif
