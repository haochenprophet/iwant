#ifndef MOVNTDQ_H
#define MOVNTDQ_H

#include "object/object.h"

namespace n_MOVNTDQ {
	class CMOVNTDQ :public Object
	{
	public:
		CMOVNTDQ();
		~CMOVNTDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVNTDQ;

#endif
