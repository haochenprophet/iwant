#ifndef RADAR_SCANNING_H
#define RADAR_SCANNING_H

#include "../object.h"

namespace n_radar_scanning {
	class Cradar_scanning :public Object
	{
	public:
		Cradar_scanning();
		~Cradar_scanning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_scanning); }
	};
}

using namespace n_radar_scanning;

#endif
