#ifndef FSTSW_H
#define FSTSW_H

#include "../object.h"

namespace n_FSTSW {
	class CFSTSW :public Object
	{
	public:
		CFSTSW();
		~CFSTSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSTSW;

#endif
