#ifndef ATOMIC_NOEXCEPT_H
#define ATOMIC_NOEXCEPT_H

#include "object.h"

namespace n_atomic_noexcept {
	class Catomic_noexcept :public Object
	{
	public:
		Catomic_noexcept();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atomic_noexcept;

#endif
