#ifndef VCVTPH2PS_H
#define VCVTPH2PS_H

#include "object.h"

namespace n_VCVTPH2PS {
	class CVCVTPH2PS :public Object
	{
	public:
		CVCVTPH2PS();
		~CVCVTPH2PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPH2PS;

#endif
