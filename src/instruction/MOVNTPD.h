#ifndef MOVNTPD_H
#define MOVNTPD_H

#include "object/object.h"

namespace n_MOVNTPD {
	class CMOVNTPD :public Object
	{
	public:
		CMOVNTPD();
		~CMOVNTPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVNTPD;

#endif
