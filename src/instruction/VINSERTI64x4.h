#ifndef VINSERTI64X4_H
#define VINSERTI64X4_H

#include "object/object.h"

namespace n_VINSERTI64x4 {
	class CVINSERTI64x4 :public Object
	{
	public:
		CVINSERTI64x4();
		~CVINSERTI64x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTI64x4;

#endif
