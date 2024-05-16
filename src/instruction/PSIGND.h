#ifndef PSIGND_H
#define PSIGND_H

#include "object/object.h"

namespace n_PSIGND {
	class CPSIGND :public Object
	{
	public:
		CPSIGND();
		~CPSIGND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSIGND;

#endif
