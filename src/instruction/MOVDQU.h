#ifndef MOVDQU_H
#define MOVDQU_H

#include "object.h"

namespace n_MOVDQU {
	class CMOVDQU :public Object
	{
	public:
		CMOVDQU();
		~CMOVDQU();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVDQU;

#endif
