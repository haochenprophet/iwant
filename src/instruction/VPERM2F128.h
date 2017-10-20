#ifndef VPERM2F128_H
#define VPERM2F128_H

#include "object.h"

namespace n_VPERM2F128 {
	class CVPERM2F128 :public Object
	{
	public:
		CVPERM2F128();
		~CVPERM2F128();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERM2F128;

#endif
