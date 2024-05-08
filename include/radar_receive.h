#ifndef RADAR_RECEIVE_H
#define RADAR_RECEIVE_H

#include "../object.h"

namespace n_radar_receive {
	class Cradar_receive :public Object
	{
	public:
		Cradar_receive();
		~Cradar_receive();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_receive); }
	};
}

using namespace n_radar_receive;

#endif
