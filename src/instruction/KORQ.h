#ifndef KORQ_H
#define KORQ_H

#include "object.h"

namespace n_KORQ {
	class CKORQ :public Object
	{
	public:
		CKORQ();
		~CKORQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORQ;

#endif
