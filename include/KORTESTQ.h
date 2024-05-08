#ifndef KORTESTQ_H
#define KORTESTQ_H

#include "../object.h"

namespace n_KORTESTQ {
	class CKORTESTQ :public Object
	{
	public:
		CKORTESTQ();
		~CKORTESTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORTESTQ;

#endif
