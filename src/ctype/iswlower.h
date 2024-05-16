#ifndef ISWLOWER_H
#define ISWLOWER_H

#include "object/object.h"

namespace n_iswlower {
	class Ciswlower :public Object
	{
	public:
		Ciswlower();
		~Ciswlower();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswlower;

#endif
