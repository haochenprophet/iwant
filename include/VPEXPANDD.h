#ifndef VPEXPANDD_H
#define VPEXPANDD_H

#include "../object.h"

namespace n_VPEXPANDD {
	class CVPEXPANDD :public Object
	{
	public:
		CVPEXPANDD();
		~CVPEXPANDD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPEXPANDD;

#endif
