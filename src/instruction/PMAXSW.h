#ifndef PMAXSW_H
#define PMAXSW_H

#include "object.h"

namespace n_PMAXSW {
	class CPMAXSW :public Object
	{
	public:
		CPMAXSW();
		~CPMAXSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXSW;

#endif
