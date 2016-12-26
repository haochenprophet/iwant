#ifndef NOEXCEPT_H
#define NOEXCEPT_H

#include "object.h"

namespace n_noexcept {
	class Cnoexcept :public Object
	{
	public:
		Cnoexcept();
		int my_init(void *p=nullptr);
	};
}

using namespace n_noexcept;

#endif
