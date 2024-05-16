#ifndef ROCKET_POSTURE_H
#define ROCKET_POSTURE_H

#include "object/object.h"

namespace n_rocket_posture {
	class Crocket_posture :public Object
	{
	public:
		Crocket_posture();
		~Crocket_posture();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crocket_posture); }
	};
}

using namespace n_rocket_posture;

#endif
