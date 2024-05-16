#ifndef VCVTTSS2USI_H
#define VCVTTSS2USI_H

#include "object/object.h"

namespace n_VCVTTSS2USI {
	class CVCVTTSS2USI :public Object
	{
	public:
		CVCVTTSS2USI();
		~CVCVTTSS2USI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTTSS2USI;

#endif
