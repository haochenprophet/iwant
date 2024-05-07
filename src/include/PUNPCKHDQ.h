#ifndef PUNPCKHDQ_H
#define PUNPCKHDQ_H

#include "../object.h"

namespace n_PUNPCKHDQ {
	class CPUNPCKHDQ :public Object
	{
	public:
		CPUNPCKHDQ();
		~CPUNPCKHDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKHDQ;

#endif
