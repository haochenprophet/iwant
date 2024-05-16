#ifndef VPMOVSQD_H
#define VPMOVSQD_H

#include "object/object.h"

namespace n_VPMOVSQD {
	class CVPMOVSQD :public Object
	{
	public:
		CVPMOVSQD();
		~CVPMOVSQD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVSQD;

#endif
