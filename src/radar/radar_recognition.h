#ifndef RADAR_RECOGNITION_H
#define RADAR_RECOGNITION_H

#include "../object.h"

namespace n_radar_recognition {
	class Cradar_recognition :public Object
	{
	public:
		Cradar_recognition();
		~Cradar_recognition();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_recognition); }
	};
}

using namespace n_radar_recognition;

#endif
