#ifndef VRCP28SD_H
#define VRCP28SD_H

#include "object.h"

namespace n_VRCP28SD {
	class CVRCP28SD :public Object
	{
	public:
		CVRCP28SD();
		~CVRCP28SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP28SD;

#endif
