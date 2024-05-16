#ifndef VPCONFLICTQ_H
#define VPCONFLICTQ_H

#include "object/object.h"

namespace n_VPCONFLICTQ {
	class CVPCONFLICTQ :public Object
	{
	public:
		CVPCONFLICTQ();
		~CVPCONFLICTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCONFLICTQ;

#endif
