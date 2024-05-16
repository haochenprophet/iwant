#ifndef RSQRTSS_H
#define RSQRTSS_H

#include "object/object.h"

namespace n_RSQRTSS {
	class CRSQRTSS :public Object
	{
	public:
		CRSQRTSS();
		~CRSQRTSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RSQRTSS;

#endif
