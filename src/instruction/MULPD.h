#ifndef MULPD_H
#define MULPD_H

#include "object.h"

namespace n_MULPD {
	class CMULPD :public Object
	{
	public:
		CMULPD();
		~CMULPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MULPD;

#endif
