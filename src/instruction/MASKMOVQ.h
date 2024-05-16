#ifndef MASKMOVQ_H
#define MASKMOVQ_H

#include "object/object.h"

namespace n_MASKMOVQ {
	class CMASKMOVQ :public Object
	{
	public:
		CMASKMOVQ();
		~CMASKMOVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MASKMOVQ;

#endif
