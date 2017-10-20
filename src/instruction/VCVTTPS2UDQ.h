#ifndef VCVTTPS2UDQ_H
#define VCVTTPS2UDQ_H

#include "object.h"

namespace n_VCVTTPS2UDQ {
	class CVCVTTPS2UDQ :public Object
	{
	public:
		CVCVTTPS2UDQ();
		~CVCVTTPS2UDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTTPS2UDQ;

#endif
