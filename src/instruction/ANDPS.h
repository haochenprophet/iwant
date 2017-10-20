#ifndef ANDPS_H
#define ANDPS_H

#include "object.h"

namespace n_ANDPS {
	class CANDPS :public Object
	{
	public:
		CANDPS();
		~CANDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ANDPS;

#endif
