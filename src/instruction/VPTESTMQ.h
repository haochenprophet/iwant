#ifndef VPTESTMQ_H
#define VPTESTMQ_H

#include "object/object.h"

namespace n_VPTESTMQ {
	class CVPTESTMQ :public Object
	{
	public:
		CVPTESTMQ();
		~CVPTESTMQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTMQ;

#endif
