#ifndef RADAR_COMMUNICATION_H
#define RADAR_COMMUNICATION_H

#include "../object.h"

namespace n_radar_communication {
	class Cradar_communication :public Object
	{
	public:
		Cradar_communication();
		~Cradar_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_communication); }
	};
}

using namespace n_radar_communication;

#endif
