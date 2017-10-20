#ifndef MOVDDUP_H
#define MOVDDUP_H

#include "object.h"

namespace n_MOVDDUP {
	class CMOVDDUP :public Object
	{
	public:
		CMOVDDUP();
		~CMOVDDUP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVDDUP;

#endif
