#ifndef VSCATTERDPS_H
#define VSCATTERDPS_H

#include "object/object.h"

namespace n_VSCATTERDPS {
	class CVSCATTERDPS :public Object
	{
	public:
		CVSCATTERDPS();
		~CVSCATTERDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERDPS;

#endif
