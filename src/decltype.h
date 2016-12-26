#ifndef DECLTYPE_H
#define DECLTYPE_H

#include "object.h"

namespace n_decltype {
	class Cdecltype :public Object
	{
	public:
		Cdecltype();
		int my_init(void *p=nullptr);
	};
}

using namespace n_decltype;

#endif
