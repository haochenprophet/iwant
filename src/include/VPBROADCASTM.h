#ifndef VPBROADCASTM_H
#define VPBROADCASTM_H

#include "../object.h"

namespace n_VPBROADCASTM {
	class CVPBROADCASTM :public Object
	{
	public:
		CVPBROADCASTM();
		~CVPBROADCASTM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBROADCASTM;

#endif
