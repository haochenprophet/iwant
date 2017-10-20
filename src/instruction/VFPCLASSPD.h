#ifndef VFPCLASSPD_H
#define VFPCLASSPD_H

#include "object.h"

namespace n_VFPCLASSPD {
	class CVFPCLASSPD :public Object
	{
	public:
		CVFPCLASSPD();
		~CVFPCLASSPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFPCLASSPD;

#endif
