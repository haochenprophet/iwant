#ifndef PSRAD_H
#define PSRAD_H

#include "object.h"

namespace n_PSRAD {
	class CPSRAD :public Object
	{
	public:
		CPSRAD();
		~CPSRAD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRAD;

#endif
