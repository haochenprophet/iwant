#ifndef VPRORD_H
#define VPRORD_H

#include "object/object.h"

namespace n_VPRORD {
	class CVPRORD :public Object
	{
	public:
		CVPRORD();
		~CVPRORD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPRORD;

#endif
