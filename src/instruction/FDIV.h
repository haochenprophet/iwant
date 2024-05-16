#ifndef FDIV_H
#define FDIV_H

#include "object/object.h"

namespace n_FDIV {
	class CFDIV :public Object
	{
	public:
		CFDIV();
		~CFDIV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FDIV;

#endif
