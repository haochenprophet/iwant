#ifndef VCVTSD2USI_H
#define VCVTSD2USI_H

#include "object.h"

namespace n_VCVTSD2USI {
	class CVCVTSD2USI :public Object
	{
	public:
		CVCVTSD2USI();
		~CVCVTSD2USI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTSD2USI;

#endif
