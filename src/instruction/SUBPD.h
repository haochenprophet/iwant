#ifndef SUBPD_H
#define SUBPD_H

#include "object.h"

namespace n_SUBPD {
	class CSUBPD :public Object
	{
	public:
		CSUBPD();
		~CSUBPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SUBPD;

#endif
