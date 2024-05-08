#ifndef ATOMIC_CANCEL_H
#define ATOMIC_CANCEL_H

#include "../object.h"

namespace n_atomic_cancel {
	class Catomic_cancel :public Object
	{
	public:
		Catomic_cancel();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atomic_cancel;

#endif
