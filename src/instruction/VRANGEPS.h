#ifndef VRANGEPS_H
#define VRANGEPS_H

#include "object.h"

namespace n_VRANGEPS {
	class CVRANGEPS :public Object
	{
	public:
		CVRANGEPS();
		~CVRANGEPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRANGEPS;

#endif
