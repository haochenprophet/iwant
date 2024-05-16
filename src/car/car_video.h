#ifndef CAR_VIDEO_H
#define CAR_VIDEO_H

#include "object/object.h"

namespace n_car_video {
	class Ccar_video :public Object
	{
	public:
		Ccar_video();
		~Ccar_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_video); }
	};
}

using namespace n_car_video;

#endif
