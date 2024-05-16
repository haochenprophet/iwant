#ifndef MOVNTDQA_H
#define MOVNTDQA_H

#include "object/object.h"

namespace n_MOVNTDQA {
	class CMOVNTDQA :public Object
	{
	public:
		CMOVNTDQA();
		~CMOVNTDQA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVNTDQA;

#endif
