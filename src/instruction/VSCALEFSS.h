#ifndef VSCALEFSS_H
#define VSCALEFSS_H

#include "object/object.h"

namespace n_VSCALEFSS {
	class CVSCALEFSS :public Object
	{
	public:
		CVSCALEFSS();
		~CVSCALEFSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCALEFSS;

#endif
