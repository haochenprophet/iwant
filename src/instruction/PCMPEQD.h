#ifndef PCMPEQD_H
#define PCMPEQD_H

#include "object/object.h"

namespace n_PCMPEQD {
	class CPCMPEQD :public Object
	{
	public:
		CPCMPEQD();
		~CPCMPEQD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPEQD;

#endif
