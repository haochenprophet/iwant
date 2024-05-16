#ifndef FREE_H
#define FREE_H

#include "object/object.h"

namespace n_free {
	class Cfree :public Object
	{
	public:
		Cfree();
		~Cfree();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfree); }
		static void free_c(void* ptr);
	};
}

using namespace n_free;

#endif
