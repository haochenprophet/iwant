#ifndef ISPUNCT_H
#define ISPUNCT_H

#include "object/object.h"

namespace n_ispunct {
	class Cispunct :public Object
	{
	public:
		Cispunct();
		~Cispunct();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ispunct;

#endif
