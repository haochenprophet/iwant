#ifndef VPBROADCASTW_H
#define VPBROADCASTW_H

#include "../object.h"

namespace n_VPBROADCASTW {
	class CVPBROADCASTW :public Object
	{
	public:
		CVPBROADCASTW();
		~CVPBROADCASTW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBROADCASTW;

#endif
