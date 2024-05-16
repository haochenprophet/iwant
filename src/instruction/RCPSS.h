#ifndef RCPSS_H
#define RCPSS_H

#include "object/object.h"

namespace n_RCPSS {
	class CRCPSS :public Object
	{
	public:
		CRCPSS();
		~CRCPSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RCPSS;

#endif
