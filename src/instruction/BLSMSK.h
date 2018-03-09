#ifndef BLSMSK_H
#define BLSMSK_H

#include "../object.h"

namespace n_BLSMSK {
	class CBLSMSK :public Object
	{
	public:
		CBLSMSK();
		~CBLSMSK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLSMSK;

#endif
