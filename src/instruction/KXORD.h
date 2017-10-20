#ifndef KXORD_H
#define KXORD_H

#include "object.h"

namespace n_KXORD {
	class CKXORD :public Object
	{
	public:
		CKXORD();
		~CKXORD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KXORD;

#endif
