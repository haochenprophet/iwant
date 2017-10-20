#ifndef MINPD_H
#define MINPD_H

#include "object.h"

namespace n_MINPD {
	class CMINPD :public Object
	{
	public:
		CMINPD();
		~CMINPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MINPD;

#endif
