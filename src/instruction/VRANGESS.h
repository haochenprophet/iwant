#ifndef VRANGESS_H
#define VRANGESS_H

#include "object.h"

namespace n_VRANGESS {
	class CVRANGESS :public Object
	{
	public:
		CVRANGESS();
		~CVRANGESS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRANGESS;

#endif
