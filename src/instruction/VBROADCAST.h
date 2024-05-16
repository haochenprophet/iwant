#ifndef VBROADCAST_H
#define VBROADCAST_H

#include "object/object.h"

namespace n_VBROADCAST {
	class CVBROADCAST :public Object
	{
	public:
		CVBROADCAST();
		~CVBROADCAST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VBROADCAST;

#endif
