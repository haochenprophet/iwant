#ifndef PCMPEQQ_H
#define PCMPEQQ_H

#include "../object.h"

namespace n_PCMPEQQ {
	class CPCMPEQQ :public Object
	{
	public:
		CPCMPEQQ();
		~CPCMPEQQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPEQQ;

#endif
