#ifndef FNSTCW_H
#define FNSTCW_H

#include "object/object.h"

namespace n_FNSTCW {
	class CFNSTCW :public Object
	{
	public:
		CFNSTCW();
		~CFNSTCW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNSTCW;

#endif
