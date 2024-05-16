#ifndef VSCATTERQPS_H
#define VSCATTERQPS_H

#include "object/object.h"

namespace n_VSCATTERQPS {
	class CVSCATTERQPS :public Object
	{
	public:
		CVSCATTERQPS();
		~CVSCATTERQPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERQPS;

#endif
