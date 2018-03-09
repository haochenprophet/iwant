#ifndef VPBROADCASTB_H
#define VPBROADCASTB_H

#include "../object.h"

namespace n_VPBROADCASTB {
	class CVPBROADCASTB :public Object
	{
	public:
		CVPBROADCASTB();
		~CVPBROADCASTB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPBROADCASTB;

#endif
