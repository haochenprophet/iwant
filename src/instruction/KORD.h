#ifndef KORD_H
#define KORD_H

#include "object.h"

namespace n_KORD {
	class CKORD :public Object
	{
	public:
		CKORD();
		~CKORD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORD;

#endif
