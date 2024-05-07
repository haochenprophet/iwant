#ifndef VCVTPS2UDQ_H
#define VCVTPS2UDQ_H

#include "../object.h"

namespace n_VCVTPS2UDQ {
	class CVCVTPS2UDQ :public Object
	{
	public:
		CVCVTPS2UDQ();
		~CVCVTPS2UDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPS2UDQ;

#endif
