#ifndef VINSERTI64X2_H
#define VINSERTI64X2_H

#include "../object.h"

namespace n_VINSERTI64x2 {
	class CVINSERTI64x2 :public Object
	{
	public:
		CVINSERTI64x2();
		~CVINSERTI64x2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTI64x2;

#endif
