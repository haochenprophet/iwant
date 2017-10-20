#ifndef VERR_H
#define VERR_H

#include "object.h"

namespace n_VERR {
	class CVERR :public Object
	{
	public:
		CVERR();
		~CVERR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VERR;

#endif
