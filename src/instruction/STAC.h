#ifndef STAC_H
#define STAC_H

#include "object.h"

namespace n_STAC {
	class CSTAC :public Object
	{
	public:
		CSTAC();
		~CSTAC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STAC;

#endif
