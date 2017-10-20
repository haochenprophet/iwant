#ifndef AESENC_H
#define AESENC_H

#include "object.h"

namespace n_AESENC {
	class CAESENC :public Object
	{
	public:
		CAESENC();
		~CAESENC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AESENC;

#endif
