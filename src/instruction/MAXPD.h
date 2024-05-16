#ifndef MAXPD_H
#define MAXPD_H

#include "object/object.h"

namespace n_MAXPD {
	class CMAXPD :public Object
	{
	public:
		CMAXPD();
		~CMAXPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MAXPD;

#endif
