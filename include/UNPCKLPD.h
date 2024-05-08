#ifndef UNPCKLPD_H
#define UNPCKLPD_H

#include "../object.h"

namespace n_UNPCKLPD {
	class CUNPCKLPD :public Object
	{
	public:
		CUNPCKLPD();
		~CUNPCKLPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UNPCKLPD;

#endif
