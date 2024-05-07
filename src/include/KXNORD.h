#ifndef KXNORD_H
#define KXNORD_H

#include "../object.h"

namespace n_KXNORD {
	class CKXNORD :public Object
	{
	public:
		CKXNORD();
		~CKXNORD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXNORD;

#endif
