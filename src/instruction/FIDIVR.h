#ifndef FIDIVR_H
#define FIDIVR_H

#include "object.h"

namespace n_FIDIVR {
	class CFIDIVR :public Object
	{
	public:
		CFIDIVR();
		~CFIDIVR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FIDIVR;

#endif
