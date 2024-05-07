#ifndef VPBROADCASTQ_H
#define VPBROADCASTQ_H

#include "../object.h"

namespace n_VPBROADCASTQ {
	class CVPBROADCASTQ :public Object
	{
	public:
		CVPBROADCASTQ();
		~CVPBROADCASTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBROADCASTQ;

#endif
