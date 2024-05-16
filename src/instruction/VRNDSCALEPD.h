#ifndef VRNDSCALEPD_H
#define VRNDSCALEPD_H

#include "object/object.h"

namespace n_VRNDSCALEPD {
	class CVRNDSCALEPD :public Object
	{
	public:
		CVRNDSCALEPD();
		~CVRNDSCALEPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRNDSCALEPD;

#endif
