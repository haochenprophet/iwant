#ifndef RADAR_COMPUTER_H
#define RADAR_COMPUTER_H

#include "object/object.h"

namespace n_radar_computer {
	class Cradar_computer :public Object
	{
	public:
		Cradar_computer();
		~Cradar_computer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_computer); }
	};
}

using namespace n_radar_computer;

#endif
