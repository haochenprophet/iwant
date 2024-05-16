#ifndef VCVTPS2QQ_H
#define VCVTPS2QQ_H

#include "object/object.h"

namespace n_VCVTPS2QQ {
	class CVCVTPS2QQ :public Object
	{
	public:
		CVCVTPS2QQ();
		~CVCVTPS2QQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPS2QQ;

#endif
