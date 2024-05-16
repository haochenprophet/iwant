#ifndef RADAR_ON_H
#define RADAR_ON_H

#include "object/object.h"

namespace n_radar_on {
	class Cradar_on :public Object
	{
	public:
		Cradar_on();
		~Cradar_on();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_on); }
	};
}

using namespace n_radar_on;

#endif
