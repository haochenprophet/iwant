#ifndef MOVZX_H
#define MOVZX_H

#include "object.h"

namespace n_MOVZX {
	class CMOVZX :public Object
	{
	public:
		CMOVZX();
		~CMOVZX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVZX;

#endif
