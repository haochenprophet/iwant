#ifndef KSHIFTLQ_H
#define KSHIFTLQ_H

#include "object/object.h"

namespace n_KSHIFTLQ {
	class CKSHIFTLQ :public Object
	{
	public:
		CKSHIFTLQ();
		~CKSHIFTLQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTLQ;

#endif
