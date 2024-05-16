#ifndef VPTESTNMQ_H
#define VPTESTNMQ_H

#include "object/object.h"

namespace n_VPTESTNMQ {
	class CVPTESTNMQ :public Object
	{
	public:
		CVPTESTNMQ();
		~CVPTESTNMQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTNMQ;

#endif
