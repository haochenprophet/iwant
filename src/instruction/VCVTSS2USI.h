#ifndef VCVTSS2USI_H
#define VCVTSS2USI_H

#include "object.h"

namespace n_VCVTSS2USI {
	class CVCVTSS2USI :public Object
	{
	public:
		CVCVTSS2USI();
		~CVCVTSS2USI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTSS2USI;

#endif
