#ifndef PCMPGTW_H
#define PCMPGTW_H

#include "object/object.h"

namespace n_PCMPGTW {
	class CPCMPGTW :public Object
	{
	public:
		CPCMPGTW();
		~CPCMPGTW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPGTW;

#endif
