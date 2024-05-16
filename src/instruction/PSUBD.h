#ifndef PSUBD_H
#define PSUBD_H

#include "object/object.h"

namespace n_PSUBD {
	class CPSUBD :public Object
	{
	public:
		CPSUBD();
		~CPSUBD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBD;

#endif
