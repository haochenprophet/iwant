#ifndef IRETD_H
#define IRETD_H

#include "object/object.h"

namespace n_IRETD {
	class CIRETD :public Object
	{
	public:
		CIRETD();
		~CIRETD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_IRETD;

#endif
