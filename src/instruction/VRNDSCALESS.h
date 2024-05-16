#ifndef VRNDSCALESS_H
#define VRNDSCALESS_H

#include "object/object.h"

namespace n_VRNDSCALESS {
	class CVRNDSCALESS :public Object
	{
	public:
		CVRNDSCALESS();
		~CVRNDSCALESS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRNDSCALESS;

#endif
