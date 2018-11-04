#ifndef CTYPE_H
#define CTYPE_H

#include "object.h"

namespace n_ctype {
	class Cctype :public Object
	{
	public:
		Cctype();
		~Cctype();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ctype;

#endif
