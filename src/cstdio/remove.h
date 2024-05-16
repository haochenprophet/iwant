#ifndef REMOVE_H
#define REMOVE_H

#include "object/object.h"

namespace n_remove {
	class Cremove :public Object
	{
	public:
		Cremove();
		~Cremove();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cremove); }
		static int remove_c(const char* filename);

	};
}

using namespace n_remove;

#endif
