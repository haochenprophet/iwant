#ifndef VPSRAVW_H
#define VPSRAVW_H

#include "../object.h"

namespace n_VPSRAVW {
	class CVPSRAVW :public Object
	{
	public:
		CVPSRAVW();
		~CVPSRAVW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPSRAVW;

#endif
