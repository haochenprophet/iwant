#ifndef RADAR_LENGTH_H
#define RADAR_LENGTH_H

#include "object/object.h"

namespace n_radar_length {
	class Cradar_length :public Object
	{
	public:
		Cradar_length();
		~Cradar_length();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_length); }
	};
}

using namespace n_radar_length;

#endif
