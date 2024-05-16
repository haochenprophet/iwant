#ifndef ANDNPS_H
#define ANDNPS_H

#include "object/object.h"

namespace n_ANDNPS {
	class CANDNPS :public Object
	{
	public:
		CANDNPS();
		~CANDNPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ANDNPS;

#endif
