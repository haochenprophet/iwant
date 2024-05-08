#ifndef RADAR_TRACK_H
#define RADAR_TRACK_H

#include "../object.h"

namespace n_radar_track {
	class Cradar_track :public Object
	{
	public:
		Cradar_track();
		~Cradar_track();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_track); }
	};
}

using namespace n_radar_track;

#endif
