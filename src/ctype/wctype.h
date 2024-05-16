#ifndef WCTYPE_H
#define WCTYPE_H

#include "object/object.h"

namespace n_wctype {
	class Cwctype :public Object
	{
	public:
		Cwctype();
		~Cwctype();
		int my_init(void *p=nullptr);
	};
}

using namespace n_wctype;

#endif
