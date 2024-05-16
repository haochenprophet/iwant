#ifndef VRCP28SS_H
#define VRCP28SS_H

#include "object/object.h"

namespace n_VRCP28SS {
	class CVRCP28SS :public Object
	{
	public:
		CVRCP28SS();
		~CVRCP28SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP28SS;

#endif
