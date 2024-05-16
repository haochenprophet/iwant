#ifndef VTESTPD_H
#define VTESTPD_H

#include "object/object.h"

namespace n_VTESTPD {
	class CVTESTPD :public Object
	{
	public:
		CVTESTPD();
		~CVTESTPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VTESTPD;

#endif
