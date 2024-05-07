#ifndef PBLENDW_H
#define PBLENDW_H

#include "../object.h"

namespace n_PBLENDW {
	class CPBLENDW :public Object
	{
	public:
		CPBLENDW();
		~CPBLENDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PBLENDW;

#endif
