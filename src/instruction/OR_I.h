#ifndef OR_H
#define OR_H

#include "object/object.h"

namespace n_OR {
	class COR :public Object
	{
	public:
		COR();
		~COR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_OR;

#endif
