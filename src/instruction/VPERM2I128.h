#ifndef VPERM2I128_H
#define VPERM2I128_H

#include "object/object.h"

namespace n_VPERM2I128 {
	class CVPERM2I128 :public Object
	{
	public:
		CVPERM2I128();
		~CVPERM2I128();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERM2I128;

#endif
