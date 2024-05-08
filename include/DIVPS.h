#ifndef DIVPS_H
#define DIVPS_H

#include "../object.h"

namespace n_DIVPS {
	class CDIVPS :public Object
	{
	public:
		CDIVPS();
		~CDIVPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DIVPS;

#endif
