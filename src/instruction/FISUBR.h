#ifndef FISUBR_H
#define FISUBR_H

#include "object.h"

namespace n_FISUBR {
	class CFISUBR :public Object
	{
	public:
		CFISUBR();
		~CFISUBR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FISUBR;

#endif
