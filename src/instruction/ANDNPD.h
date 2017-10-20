#ifndef ANDNPD_H
#define ANDNPD_H

#include "object.h"

namespace n_ANDNPD {
	class CANDNPD :public Object
	{
	public:
		CANDNPD();
		~CANDNPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ANDNPD;

#endif
