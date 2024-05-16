#ifndef PMULUDQ_H
#define PMULUDQ_H

#include "object/object.h"

namespace n_PMULUDQ {
	class CPMULUDQ :public Object
	{
	public:
		CPMULUDQ();
		~CPMULUDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULUDQ;

#endif
