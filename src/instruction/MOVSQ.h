#ifndef MOVSQ_H
#define MOVSQ_H

#include "object/object.h"

namespace n_MOVSQ {
	class CMOVSQ :public Object
	{
	public:
		CMOVSQ();
		~CMOVSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSQ;

#endif
