#ifndef PMULLW_H
#define PMULLW_H

#include "object/object.h"

namespace n_PMULLW {
	class CPMULLW :public Object
	{
	public:
		CPMULLW();
		~CPMULLW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULLW;

#endif
