#ifndef ROUNDPS_H
#define ROUNDPS_H

#include "object/object.h"

namespace n_ROUNDPS {
	class CROUNDPS :public Object
	{
	public:
		CROUNDPS();
		~CROUNDPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ROUNDPS;

#endif
