#ifndef VGETEXPPD_H
#define VGETEXPPD_H

#include "object.h"

namespace n_VGETEXPPD {
	class CVGETEXPPD :public Object
	{
	public:
		CVGETEXPPD();
		~CVGETEXPPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGETEXPPD;

#endif
