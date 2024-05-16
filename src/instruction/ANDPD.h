#ifndef ANDPD_H
#define ANDPD_H

#include "object/object.h"

namespace n_ANDPD {
	class CANDPD :public Object
	{
	public:
		CANDPD();
		~CANDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ANDPD;

#endif
