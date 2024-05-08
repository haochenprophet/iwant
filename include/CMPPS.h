#ifndef CMPPS_H
#define CMPPS_H

#include "../object.h"

namespace n_CMPPS {
	class CCMPPS :public Object
	{
	public:
		CCMPPS();
		~CCMPPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPPS;

#endif
