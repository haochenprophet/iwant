#ifndef VPBLENDMD_H
#define VPBLENDMD_H

#include "object/object.h"

namespace n_VPBLENDMD {
	class CVPBLENDMD :public Object
	{
	public:
		CVPBLENDMD();
		~CVPBLENDMD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBLENDMD;

#endif
