#ifndef VSCATTERQPD_H
#define VSCATTERQPD_H

#include "object.h"

namespace n_VSCATTERQPD {
	class CVSCATTERQPD :public Object
	{
	public:
		CVSCATTERQPD();
		~CVSCATTERQPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCATTERQPD;

#endif
