#ifndef VCVTTSD2USI_H
#define VCVTTSD2USI_H

#include "../object.h"

namespace n_VCVTTSD2USI {
	class CVCVTTSD2USI :public Object
	{
	public:
		CVCVTTSD2USI();
		~CVCVTTSD2USI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTTSD2USI;

#endif
