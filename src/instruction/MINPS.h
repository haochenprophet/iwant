#ifndef MINPS_H
#define MINPS_H

#include "object/object.h"

namespace n_MINPS {
	class CMINPS :public Object
	{
	public:
		CMINPS();
		~CMINPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MINPS;

#endif
