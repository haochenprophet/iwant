#ifndef VSCALEFPS_H
#define VSCALEFPS_H

#include "../object.h"

namespace n_VSCALEFPS {
	class CVSCALEFPS :public Object
	{
	public:
		CVSCALEFPS();
		~CVSCALEFPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSCALEFPS;

#endif
