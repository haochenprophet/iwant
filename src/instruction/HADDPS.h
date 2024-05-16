#ifndef HADDPS_H
#define HADDPS_H

#include "object/object.h"

namespace n_HADDPS {
	class CHADDPS :public Object
	{
	public:
		CHADDPS();
		~CHADDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_HADDPS;

#endif
