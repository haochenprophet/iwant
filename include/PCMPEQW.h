#ifndef PCMPEQW_H
#define PCMPEQW_H

#include "../object.h"

namespace n_PCMPEQW {
	class CPCMPEQW :public Object
	{
	public:
		CPCMPEQW();
		~CPCMPEQW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPEQW;

#endif
