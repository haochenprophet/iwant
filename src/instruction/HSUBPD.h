#ifndef HSUBPD_H
#define HSUBPD_H

#include "object/object.h"

namespace n_HSUBPD {
	class CHSUBPD :public Object
	{
	public:
		CHSUBPD();
		~CHSUBPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_HSUBPD;

#endif
