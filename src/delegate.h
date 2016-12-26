#ifndef DELEGATE_H
#define DELEGATE_H

#include "object.h"

namespace n_delegate {
	class Cdelegate :public Object
	{
	public:
		Cdelegate();
		int my_init(void *p=nullptr);
	};
}

using namespace n_delegate;

#endif
