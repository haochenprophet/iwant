#ifndef ATOI_H
#define ATOI_H

#include "object/object.h"

namespace n_atoi {
	class Catoi :public Object
	{
	public:
		Catoi();
		~Catoi();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Catoi); }
		static int atoi_c(const char* str);

	};
}

using namespace n_atoi;

#endif
