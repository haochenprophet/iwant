#ifndef HYPOT_H
#define HYPOT_H

#include "../object.h"

namespace n_hypot {
	class Chypot :public Object
	{
	public:
		Chypot();
		~Chypot();
		int my_init(void *p=nullptr);
	};
}

using namespace n_hypot;

#endif
