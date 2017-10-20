#ifndef INSERTPS_H
#define INSERTPS_H

#include "object.h"

namespace n_INSERTPS {
	class CINSERTPS :public Object
	{
	public:
		CINSERTPS();
		~CINSERTPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INSERTPS;

#endif
