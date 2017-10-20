#ifndef VINSERTI32X8_H
#define VINSERTI32X8_H

#include "object.h"

namespace n_VINSERTI32x8 {
	class CVINSERTI32x8 :public Object
	{
	public:
		CVINSERTI32x8();
		~CVINSERTI32x8();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTI32x8;

#endif
