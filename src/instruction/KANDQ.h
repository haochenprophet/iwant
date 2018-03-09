#ifndef KANDQ_H
#define KANDQ_H

#include "../object.h"

namespace n_KANDQ {
	class CKANDQ :public Object
	{
	public:
		CKANDQ();
		~CKANDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDQ;

#endif
