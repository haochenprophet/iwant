#ifndef VINSERTI32X4_H
#define VINSERTI32X4_H

#include "object/object.h"

namespace n_VINSERTI32x4 {
	class CVINSERTI32x4 :public Object
	{
	public:
		CVINSERTI32x4();
		~CVINSERTI32x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTI32x4;

#endif
