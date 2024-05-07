#ifndef PUNPCKHQDQ_H
#define PUNPCKHQDQ_H

#include "../object.h"

namespace n_PUNPCKHQDQ {
	class CPUNPCKHQDQ :public Object
	{
	public:
		CPUNPCKHQDQ();
		~CPUNPCKHQDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKHQDQ;

#endif
