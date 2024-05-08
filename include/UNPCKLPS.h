#ifndef UNPCKLPS_H
#define UNPCKLPS_H

#include "../object.h"

namespace n_UNPCKLPS {
	class CUNPCKLPS :public Object
	{
	public:
		CUNPCKLPS();
		~CUNPCKLPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UNPCKLPS;

#endif
