#ifndef VSCALEFSD_H
#define VSCALEFSD_H

#include "../object.h"

namespace n_VSCALEFSD {
	class CVSCALEFSD :public Object
	{
	public:
		CVSCALEFSD();
		~CVSCALEFSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCALEFSD;

#endif
