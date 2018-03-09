#ifndef KANDND_H
#define KANDND_H

#include "../object.h"

namespace n_KANDND {
	class CKANDND :public Object
	{
	public:
		CKANDND();
		~CKANDND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDND;

#endif
