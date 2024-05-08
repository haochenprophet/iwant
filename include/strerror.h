#ifndef STRERROR_H
#define STRERROR_H

#include "../object.h"

namespace n_strerror {
	class Cstrerror :public Object
	{
	public:
		Cstrerror();
		~Cstrerror();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strerror;

#endif
