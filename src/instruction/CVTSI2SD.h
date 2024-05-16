#ifndef CVTSI2SD_H
#define CVTSI2SD_H

#include "object/object.h"

namespace n_CVTSI2SD {
	class CCVTSI2SD :public Object
	{
	public:
		CCVTSI2SD();
		~CCVTSI2SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTSI2SD;

#endif
