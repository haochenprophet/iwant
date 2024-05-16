#ifndef VCVTPS2UQQ_H
#define VCVTPS2UQQ_H

#include "object/object.h"

namespace n_VCVTPS2UQQ {
	class CVCVTPS2UQQ :public Object
	{
	public:
		CVCVTPS2UQQ();
		~CVCVTPS2UQQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPS2UQQ;

#endif
