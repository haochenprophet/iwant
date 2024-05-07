#ifndef PMINUQ_H
#define PMINUQ_H

#include "../object.h"

namespace n_PMINUQ {
	class CPMINUQ :public Object
	{
	public:
		CPMINUQ();
		~CPMINUQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINUQ;

#endif
