#ifndef ISWCTYPE_H
#define ISWCTYPE_H

#include "object/object.h"

namespace n_iswctype {
	class Ciswctype :public Object
	{
	public:
		Ciswctype();
		~Ciswctype();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswctype;

#endif
