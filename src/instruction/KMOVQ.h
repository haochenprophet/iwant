#ifndef KMOVQ_H
#define KMOVQ_H

#include "object/object.h"

namespace n_KMOVQ {
	class CKMOVQ :public Object
	{
	public:
		CKMOVQ();
		~CKMOVQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KMOVQ;

#endif
