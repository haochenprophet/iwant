#ifndef PUNPCKLDQ_H
#define PUNPCKLDQ_H

#include "../object.h"

namespace n_PUNPCKLDQ {
	class CPUNPCKLDQ :public Object
	{
	public:
		CPUNPCKLDQ();
		~CPUNPCKLDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKLDQ;

#endif
