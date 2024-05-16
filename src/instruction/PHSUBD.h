#ifndef PHSUBD_H
#define PHSUBD_H

#include "object/object.h"

namespace n_PHSUBD {
	class CPHSUBD :public Object
	{
	public:
		CPHSUBD();
		~CPHSUBD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHSUBD;

#endif
