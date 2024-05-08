#ifndef DIVPD_H
#define DIVPD_H

#include "../object.h"

namespace n_DIVPD {
	class CDIVPD :public Object
	{
	public:
		CDIVPD();
		~CDIVPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DIVPD;

#endif
