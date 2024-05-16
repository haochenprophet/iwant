#ifndef RADAR_SEND_H
#define RADAR_SEND_H

#include "object/object.h"

namespace n_radar_send {
	class Cradar_send :public Object
	{
	public:
		Cradar_send();
		~Cradar_send();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_send); }
	};
}

using namespace n_radar_send;

#endif
