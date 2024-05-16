#ifndef MOVDQA_H
#define MOVDQA_H

#include "object/object.h"

namespace n_MOVDQA {
	class CMOVDQA :public Object
	{
	public:
		CMOVDQA();
		~CMOVDQA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVDQA;

#endif
