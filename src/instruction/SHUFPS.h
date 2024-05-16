#ifndef SHUFPS_H
#define SHUFPS_H

#include "object/object.h"

namespace n_SHUFPS {
	class CSHUFPS :public Object
	{
	public:
		CSHUFPS();
		~CSHUFPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHUFPS;

#endif
