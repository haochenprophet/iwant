#ifndef PCMPEQB_H
#define PCMPEQB_H

#include "../object.h"

namespace n_PCMPEQB {
	class CPCMPEQB :public Object
	{
	public:
		CPCMPEQB();
		~CPCMPEQB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPEQB;

#endif
