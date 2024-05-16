#ifndef BLENDVPD_H
#define BLENDVPD_H

#include "object/object.h"

namespace n_BLENDVPD {
	class CBLENDVPD :public Object
	{
	public:
		CBLENDVPD();
		~CBLENDVPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLENDVPD;

#endif
