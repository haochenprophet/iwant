#ifndef VRCP28PD_H
#define VRCP28PD_H

#include "object.h"

namespace n_VRCP28PD {
	class CVRCP28PD :public Object
	{
	public:
		CVRCP28PD();
		~CVRCP28PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP28PD;

#endif
