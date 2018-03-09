#ifndef VRNDSCALESD_H
#define VRNDSCALESD_H

#include "../object.h"

namespace n_VRNDSCALESD {
	class CVRNDSCALESD :public Object
	{
	public:
		CVRNDSCALESD();
		~CVRNDSCALESD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRNDSCALESD;

#endif
