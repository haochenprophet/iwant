#ifndef VINSERTF32X8_H
#define VINSERTF32X8_H

#include "object/object.h"

namespace n_VINSERTF32x8 {
	class CVINSERTF32x8 :public Object
	{
	public:
		CVINSERTF32x8();
		~CVINSERTF32x8();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTF32x8;

#endif
