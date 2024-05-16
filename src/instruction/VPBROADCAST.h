#ifndef VPBROADCAST_H
#define VPBROADCAST_H

#include "object/object.h"

namespace n_VPBROADCAST {
	class CVPBROADCAST :public Object
	{
	public:
		CVPBROADCAST();
		~CVPBROADCAST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBROADCAST;

#endif
