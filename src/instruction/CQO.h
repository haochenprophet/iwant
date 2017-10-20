#ifndef CQO_H
#define CQO_H

#include "object.h"

namespace n_CQO {
	class CCQO :public Object
	{
	public:
		CCQO();
		~CCQO();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CQO;

#endif
