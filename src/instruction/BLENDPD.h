#ifndef BLENDPD_H
#define BLENDPD_H

#include "object.h"

namespace n_BLENDPD {
	class CBLENDPD :public Object
	{
	public:
		CBLENDPD();
		~CBLENDPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLENDPD;

#endif
