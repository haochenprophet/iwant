#ifndef PCMPGTD_H
#define PCMPGTD_H

#include "object/object.h"

namespace n_PCMPGTD {
	class CPCMPGTD :public Object
	{
	public:
		CPCMPGTD();
		~CPCMPGTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPGTD;

#endif
