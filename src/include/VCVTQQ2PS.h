#ifndef VCVTQQ2PS_H
#define VCVTQQ2PS_H

#include "../object.h"

namespace n_VCVTQQ2PS {
	class CVCVTQQ2PS :public Object
	{
	public:
		CVCVTQQ2PS();
		~CVCVTQQ2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTQQ2PS;

#endif
